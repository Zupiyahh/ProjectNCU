
#include <SoftwareSerial.h>
SoftwareSerial ArduinoSerial(D1, D0); // RX | TX

void setup() {
  Serial.begin(9600);
  ArduinoSerial.begin(9600);
}

void loop() {

  //ส่วน Hardware

  //ส่งข้อมูล mode ให้ arduino
  while (Serial.available() > 0) {
    int Mode = Serial.read();
    if ( Mode == '1' || Mode == '2' || Mode == '3' || Mode == '4' || Mode == '5' || Mode == '6' || Mode == '7' || Mode == '8' ) {
      Serial.print(" Mode : ");
      Serial.write(Mode);
      Serial.write("\n");
      ArduinoSerial.write(Mode);
    }
  }

  //รับข้อมูล เวลา และ โพรเสจ จาก Arduino
  if (ArduinoSerial.available() > 0) {
    if (int i = ArduinoSerial.read ()) {
      Serial.print("Time is :");
      Serial.println(i);
    }
    if (String s = ArduinoSerial.readString()) {
      Serial.println(s);
    }
  }
}
