#include "SoftwareSerial.h"

SoftwareSerial NodeSerial(10, 11); // RX | TX


int Lswitch = 2;
int led = 13;
int Time;
int i;
int flag = 0;

 //รุ่น WA10T5260BY/ST(Samsung) 
void actionMode(char Mode) {
  switch (Mode) {
    case '1': //Normal
       Time = 60;
      for (i = Time; i > 0; i--) {
        delay(7000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("State is :");


        if (i > 53 && i <= 60) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 40 && i <= 53) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 35 && i <= 40) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 28 && i <= 35) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 15 && i <= 28) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 10 && i <= 15) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 10) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing");
          Serial.println("finishedWashing");
          countdown();
        }

        NodeSerial.flush();
      }
      break;
      
    case '2': //Superclean
      Time = 90;
      for (i = Time; i > 0; i--) {
        delay(7000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("State is :");

        if (i > 80 && i <= 90) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 61 && i <= 80) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 53 && i <= 61) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 43 && i <= 53) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 24 && i <= 43) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 16 && i <= 24) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 16) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing");
          Serial.println("finishedWashing");
          countdown();
        }
        NodeSerial.flush();
      }
      break;

    case '3': //Delicate
      Time = 47;
      for (i = Time; i > 0; i--) {
        delay(7000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("State is :");


        if (i > 42 && i <= 47) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 30 && i <= 42) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 27 && i <= 30) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 22 && i <= 27) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 10 && i <= 22) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 7 && i <= 10) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 7) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing");
          Serial.println("finishedWashing");
          countdown();
        }
        NodeSerial.flush();
      }
      break;

    case '4': //Quick
      Time = 30;
      for (i = Time; i > 0; i--) {
        delay(7000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("State is :");

        if (i > 27 && i <= 30) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 20 && i <= 27) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 18 && i <= 20) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 15 && i <= 18) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 8 && i <= 15) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 6 && i <= 8) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 6) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing");
          Serial.println("finishedWashing");
          countdown();
        }
        NodeSerial.flush();
      }
      break;

    default: //Bedding
      Time = 35;
      for (i = Time; i > 0; i--) {
        delay(7000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("State is :");

        if (i > 31 && i <= 35) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 23 && i <= 31) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 21 && i <= 23) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 17 && i <= 21) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 9 && i <= 17) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 7 && i <= 9) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 7) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing");
          Serial.println("finishedWashing");
          countdown();
        }

        NodeSerial.flush();
      }
      break;

  }
}

void countdown() {
  //ตั้งเวลาเกิน
  for (int i = 5; i >= 0; i -- ) {
    Serial.print("\tcountdown:");
    Serial.println(i);
    delay(1000);
    if ( (digitalRead(Lswitch) == HIGH) && (flag == 1) )
    {
      Serial.println("door is opened");
      NodeSerial.write("1");
      NodeSerial.println("Idle");
      flag = 0;
      break ;
    }
  }
  NodeSerial.flush();
  if (flag == 1) {
    Serial.println("Idle");
    NodeSerial.write("1");
    NodeSerial.println("Idle");
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
    if ( (digitalRead(Lswitch) == HIGH) && (flag == 1) )
    {
      Serial.println("door is opened");
      flag = 0;
      delay(20);
    }

    if ( (digitalRead(Lswitch) == LOW) && (flag == 0) )
    {
      Serial.println("door is closed");
      flag = 1;
      delay(20);

      //รับข้อมูล mode จาก esp
      while (NodeSerial.available () > 0) {
        input = NodeSerial.parseInt();
        Mode = char(input);
        if ( Mode == '1' || Mode == '2' || Mode == '3' || Mode == '4' || Mode == '5' ) {
          Serial.print(" Mode is ");
          Serial.print(Mode);
          Serial.print("\n");
          actionMode(Mode);
        }
      }
    }

    if ( flag == 1 )
    {
      digitalWrite(led, LOW);
    }

    digitalWrite(Lswitch, HIGH);

  }
