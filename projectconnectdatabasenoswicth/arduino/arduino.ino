int Lswitch = 2;
int led = 13;

#include <SoftwareSerial.h>
SoftwareSerial NodeSerial(10, 11); // RX | TX

void actionMode(char Mode) {
  int Time;
  int i;

  switch (Mode) {
    case '1':
      Time = 10;
      break;
    case '2':
      Time = 20;
      break;
    default:
      Time = 30;
      break;
  }
  for (i = Time; i > 0; i--) {
    delay(10000);
    NodeSerial.write(i);


    if (i <= 10) {
      NodeSerial.println("Spin");
      Serial.println("Spin");
    }
    else if (i <= 20) {
      NodeSerial.println("Rinse");
      Serial.println("Rinse");
    }
    else if (i <= 30) {
      NodeSerial.println("Wash");
      Serial.println("Wash");
    }

    NodeSerial.flush();
  }

}

void setup() {
  Serial.begin(9600);
  NodeSerial.begin(9600);

  pinMode(Lswitch, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  char Mode;
  int input;
  //รับข้อมูล mode จาก esp
  while (NodeSerial.available () > 0) {
    input = NodeSerial.parseInt();
    Mode = char(input);
    if ( Mode == '1' || Mode == '2' || Mode == '3' || Mode == '4' || Mode == '5' || Mode == '6' || Mode == '7' || Mode == '8' ) {
      Serial.print(" Mode is ");
      Serial.print(Mode);
      Serial.print("\n");
      actionMode(Mode);
    }


  }
}
