int Lswitch = 2;
int led = 13;

#include <SoftwareSerial.h>
SoftwareSerial NodeSerial(10, 11); // RX | TX

void actionMode(char Mode) {
  int Time;
  int i;

  switch (Mode) {
    case '1':
      Time = 90;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");

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
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

    case '2':
      Time = 101;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");

        if (i > 89 && i <= 101) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 69 && i <= 89) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 59 && i <= 69) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 47 && i <= 59) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 27 && i <= 47) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 17 && i <= 27) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 17) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

    case '3':
      Time = 61;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");


        if (i> 54 && i <= 61) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 41 && i <= 54) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 36 && i <= 41) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 29 && i <= 36) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 16 <= 29) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 11 && i <= 16) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 11) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

    case '4':
      Time = 47;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");


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
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }
        NodeSerial.flush();
      }
      break;

    case '5':
      Time = 35;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");

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
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

    case '6':
      Time = 60;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");


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
        else if (i >=2 && i <= 10) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

    case '7':
      Time = 30;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
 

        if (i > 27 && i <= 30) {
          NodeSerial.println("Water");
          Serial.println("process is :Water");
        }
        else if (i > 20 && i <= 27) {
          NodeSerial.println("Wash");
          Serial.println("process is :Wash");
        }
        else if (i > 18 && i <= 20) {
          NodeSerial.println("WasteWater");
          Serial.println("process is :WasteWater");
        }
        else if (i > 15 && i <= 18) {
          NodeSerial.println("Water");
          Serial.println("process is :Water");
        }
        else if (i > 8 && i <= 15) {
          NodeSerial.println("RinseWash");
          Serial.println("process is :RinseWash");
        }
        else if (i > 6 && i <= 8) {
          NodeSerial.println("WasteWater");
          Serial.println("process is :WasteWater");
        }
        else if (i >= 2 && i <= 6) {
          NodeSerial.println("SpinDrying");
          Serial.println("process is :SpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing!!");
          Serial.println("process is :finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

    default:
      Time = 54;
      for (i = Time; i > 0; i--) {
        delay(6000);
        NodeSerial.write(i);

        Serial.print("\nTime is :");
        Serial.println(i);
        Serial.print("process is :");

        if (i > 48 && i <= 54) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 35 && i <= 48) {
          NodeSerial.println("Wash");
          Serial.println("Wash");
        }
        else if (i > 31 && i <= 35) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i > 25 && i <= 31) {
          NodeSerial.println("Water");
          Serial.println("Water");
        }
        else if (i > 12 && i <= 25) {
          NodeSerial.println("RinseWash");
          Serial.println("RinseWash");
        }
        else if (i > 8 && i <= 12) {
          NodeSerial.println("WasteWater");
          Serial.println("WasteWater");
        }
        else if (i >= 2 && i <= 8) {
          NodeSerial.println("SpinDrying");
          Serial.println("SpinSpinDrying");
        }
        else if (i == 1) {
          NodeSerial.println("finishedWashing!!");
          Serial.println("finishedWashing!!");
        }

        NodeSerial.flush();
      }
      break;

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
