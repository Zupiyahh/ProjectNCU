int Lswitch = 2;
int led = 13;
int flag;

#include <SoftwareSerial.h>
SoftwareSerial NodeSerial(10, 11); // RX | TX

void setup() {
  Serial.begin(9600);
  NodeSerial.begin(9600);

  pinMode(Lswitch, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int Mode;
  //รับข้อมูล mode จาก esp
  while (NodeSerial.available () > 0) {
    Mode = NodeSerial.read();
    if ( Mode == '1' || Mode == '2' || Mode == '3' || Mode == '4' || Mode == '5' || Mode == '6' || Mode == '7' || Mode == '8' ) {
      Serial.print(" Mode is ");
      Serial.write(Mode);
      Serial.write("\n");
    }
    //ส่งข้อมูล เวลา และ โพรเสจ ให้ Arduino
    if (Mode == '1') {
      M1cottonEco ();
    }

    if (Mode == '2') {
      M2Duvet ();
    }

    if (Mode == '3') {
      M3Darkwash ();
    }

    if (Mode == '4') {
      M4Delicate ();
    }

    if (Mode == '5') {
      M5Wool ();
    }

    if (Mode == '6') {
      M6Incentive ();
    }

    if (Mode == '7') {
      M7Quick ();
    }

    if (Mode == '8') {
      M8SportWear ();
    }
  }
}

void M1cottonEco () {
  int  Time = 90;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 80 && i <= 90) {
      P1Temnam();
    }
    if (i > 61 && i <= 80) {
      P2Sak();
    }
    if (i > 53 && i <= 61) {
      P3Taynamthing();
    }
    if (i > 43 && i <= 53) {
      P1Temnam();
    }
    if (i > 24 && i <= 43) {
      P4langnam();
    }
    if (i > 16 && i <= 24) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 16) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M2Duvet () {
  int  Time = 101;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 89 && i <= 101) {
      P1Temnam();
    }
    if (i > 69 && i <= 89) {
      P2Sak();
    }
    if (i > 59 && i <= 69) {
      P3Taynamthing();
    }
    if (i > 47 && i <= 59) {
      P1Temnam();
    }
    if (i > 27 && i <= 47) {
      P4langnam();
    }
    if (i > 17 && i <= 27) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 17)  {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M3Darkwash () {
  int  Time = 61;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 54 && i <= 61) {
      P1Temnam();
    }
    if (i > 41 && i <= 54) {
      P2Sak();
    }
    if (i > 36 && i <= 41) {
      P3Taynamthing();
    }
    if (i > 29 && i <= 36) {
      P1Temnam();
    }
    if (i > 16 && i <= 29) {
      P4langnam();
    }
    if (i > 11 && i <= 16) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 11) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M4Delicate () {
  int  Time = 47;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 42 && i <= 47) {
      P1Temnam();
    }
    if (i > 30 && i <= 42) {
      P2Sak();
    }
    if (i > 27 && i <= 30) {
      P3Taynamthing();
    }
    if (i > 22 && i <= 27) {
      P1Temnam();
    }
    if (i > 10 && i <= 22) {
      P4langnam();
    }
    if (i > 7 && i <= 10) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 7) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M5Wool () {
  int  Time = 35;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 31 && i <= 35) {
      P1Temnam();
    }
    if (i > 23 && i <= 31) {
      P2Sak();
    }
    if (i > 21 && i <= 23) {
      P3Taynamthing();
    }
    if (i > 17 && i <= 21) {
      P1Temnam();
    }
    if (i > 9 && i <= 17) {
      P4langnam();
    }
    if (i > 7 && i <= 9) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 7) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M6Incentive () {
  int  Time = 60;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 53 && i <= 60) {
      P1Temnam();
    }
    if (i > 40 && i <= 53) {
      P2Sak();
    }
    if (i > 35 && i <= 40) {
      P3Taynamthing();
    }
    if (i > 28 && i <= 35) {
      P1Temnam();
    }
    if (i > 15 && i <= 28) {
      P4langnam();
    }
    if (i > 10 && i <= 15) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 10) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M7Quick () {
  int  Time = 30;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 27 && i <= 30) {
      P1Temnam();
    }
    if (i > 20 && i <= 27) {
      P2Sak();
    }
    if (i > 18 && i <= 20) {
      P3Taynamthing();
    }
    if (i > 15 && i <= 18) {
      P1Temnam();
    }
    if (i > 8 && i <= 15) {
      P4langnam();
    }
    if (i > 6 && i <= 8) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 6) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void M8SportWear () {
  int  Time = 10;
  for (int i = Time; i > 0; i -= 1 ) {
    Serial.print("Time = ");
    Serial.println(i);
    NodeSerial.write(i);

    if (i > 89 && i <= 101) {
      P1Temnam();
    }
    if (i > 69 && i <= 89) {
      P2Sak();
    }
    if (i > 59 && i <= 69) {
      P3Taynamthing();
    }
    if (i > 47 && i <= 59) {
      P1Temnam();
    }
    if (i > 27 && i <= 47) {
      P4langnam();
    }
    if (i > 17 && i <= 27) {
      P3Taynamthing();
    }
    if (i >= 2 && i <= 17) {
      P5panheng();
    }
    if (i == 1) {
      P6sakseadleaw();
      countdonw(flag);
    }
    delay(1000);
  }
}

void P1Temnam() { //เติมน้ำ
  NodeSerial.println("Process is :เติมน้ำ ");
  Serial.println(" Process is :เติมน้ำ ");
}

void P2Sak() { //ซัก
  NodeSerial.println("Process is :ซัก ");
  Serial.println(" Process is :ซัก ");
}

void P3Taynamthing() { //ถ่ายน้ำทิ้ง
  NodeSerial.println("Process is :ถ่ายน้ำทิ้ง ");
  Serial.println(" Process is :ถ่ายน้ำทิ้ง ");
}

void P4langnam() {// ล้างน้ำ
  NodeSerial.println("Process is :ล้างน้ำ ");
  Serial.println(" Process is :ล้างน้ำ ");
}

void P5panheng() { //ปั่นแห้ง
  NodeSerial.println("Process is :ปั่นแห้ง ");
  Serial.println(" Process is :ปั่นแห้ง ");
}

void P6sakseadleaw() { //ซักเสร็จแล้ว
  NodeSerial.println(" Process is :ซักเสร็จแล้ว ");
  Serial.println(" Process is :ซักเสร็จแล้ว ");
}

void countdonw(int &flag) {
  int Time;
  if (digitalRead(Lswitch) == LOW) {
    Serial.println(" door is opened ----> The State is : ว่าง ");
    NodeSerial.println(" door is opened ----> The State is : ว่าง ");
  }
  if (digitalRead(Lswitch) == HIGH) {
    Serial.println(" the door is closed ----> The State is : ไม่ว่าง ");
    NodeSerial.println(" the door is closed ----> The State is : ไม่ว่าง ");

    //ตั้งเวลาเกิน
    Time = 15 ;
    for (int i = Time; i >= 0; i -= 1) {
      Serial.print("\tTime is : ");
      Serial.println(i);
      delay(1000);
      if  (digitalRead(Lswitch) == LOW) {
        Serial.println(" door is opened ----> The State is : ว่าง ");
        NodeSerial.println(" door is opened ----> The State is : ว่าง ");
        break ;
      }
    }
    if (digitalRead(Lswitch) == HIGH) {
      Serial.println(" ## TheState is Error !!!!!  ##  ");
      NodeSerial.println("## TheState is Error !!!!!  ## ");

    }
  }
}
