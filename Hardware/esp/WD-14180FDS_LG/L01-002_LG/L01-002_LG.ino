#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>
#include <SoftwareSerial.h>
#include <WiFiClient.h>

WiFiClient wifiClient;
SoftwareSerial ArduinoSerial(D1, D0); // RX | TX

//Set these to your desired credentials.
const char *ssid = "Zupiyah_2.4GHz";
const char *password = "0622067376";

//Web/Server address to read/write from
const char *host = "192.168.1.6"; 

int WTime;
int Mode;
String state;
String WID = "L01-002";
String Model = "WD-14180FDS";

void setup() {

  ArduinoSerial.begin(9600);

  Serial.begin(9600);

  WiFi.mode(WIFI_OFF);        //Prevents reconnection issue (taking too long to connect)
  delay(1000);
  WiFi.mode(WIFI_STA);        //This line hides the viewing of ESP as wifi hotspot

  WiFi.begin(ssid, password);     //Connect to your WiFi router
  Serial.println("");

  Serial.print("Connecting");
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

//  If connection successful show IP address in serial monitor
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP()); //IP address assigned to your ESP
  
}

void loop() {

  //ส่วน Hardware

  //ส่งข้อมูล mode ให้ arduino
  while (Serial.available() > 0) {
    Mode = Serial.read();
    if ( Mode == '1' || Mode == '2' || Mode == '3' || Mode == '4' || Mode == '5' || Mode == '6' || Mode == '7' || Mode == '8' ) {
      Serial.print(" Mode : ");
      Serial.write(Mode);
      Serial.write("\n");
      ArduinoSerial.print(Mode);
    }
  }

  //รับข้อมูล เวลา และ โพรเสจ จาก Arduino
  while (ArduinoSerial.available() > 0) {
    WTime = ArduinoSerial.read ();
    Serial.print("\nTime is :");
    Serial.println(WTime);
    state = ArduinoSerial.readString();
    Serial.print("State is :");
    Serial.print(state);
    Serial.flush();
    
    //GET Data ตั้ง HTTP Get ตามต้องการ
    HTTPClient http;
    String getData, Link;
    int WTimeData = WTime;
    getData = "?WID=" + WID + "&Model=" + Model + "&WTime=" + String (WTimeData) + "&State=" + state;
    Link = "https://wash-station-2.herokuapp.com/add.php" + getData; // Host เหมือนข้างบน
    //Link = "https:/192.168.1.6/Heroku/add.php" + getData; // Host เหมือนข้างบน
    Serial.print(Link);
    
    bool a = http.begin(wifiClient, Link);
    Serial.println(a);//Send the request
    int httpCode = http.GET(); 
     Serial.print(httpCode);//Send the request
    http.end(); //Close connection
  }
}
