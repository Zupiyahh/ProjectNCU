  #include <ESP8266WiFi.h>
  #include <WiFiClient.h>
  #include <ESP8266WebServer.h>
  #include <ESP8266HTTPClient.h>
  #include <SoftwareSerial.h>

  SoftwareSerial ArduinoSerial(D1, D0); // RX | TX

  //Set these to your desired credentials.
  const char *ssid = "Zupiyah_2.4GHz";
  const char *password = "0622067376";

  //Web/Server address to read/write from
  const char *host = "192.168.1.6";

  int i;
  int Mode;
  String s;

  void setup() {

  ArduinoSerial.begin(9600);
  // delay(1000);
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

  //If connection successful show IP address in serial monitor
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());  //IP address assigned to your ESP
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
      i = ArduinoSerial.read ();
      Serial.print("Time is :");
      Serial.println(i);
      s = ArduinoSerial.readString();
      Serial.println(s);
    

  //GET Data ตั้ง HTTP Get ตามต้องการ
   HTTPClient http;
   String getData, Link;
   int iData = i;
  getData = "?WTime=" + String (iData) + "&Process=" + s;
  Link = "http://192.168.1.6/ProjectConnectDatabaseNoSwicth/add.php" + getData; // Host เหมือนข้างบน
  Serial.println(Link);
  http.begin(Link);
  int httpCode = http.GET();            //Send the request
  http.end(); //Close connection
  }
  }
