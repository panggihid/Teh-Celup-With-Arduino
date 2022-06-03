#include <Servo.h>

Servo myservo;

int cepet=8;
byte turun_naik;
byte batas_bawah=90;
byte batas_atas=160;
byte celup=200;
byte ulangi=0;

void setup() {
  myservo.attach(10);
}

void loop() {
  for (ulangi=ulangi;ulangi<celup;ulangi++){
    for (turun_naik=batas_bawah;turun_naik<batas_atas;turun_naik++) {
      myservo.write(turun_naik);
      delay(cepet);
    }
    for (turun_naik=batas_atas;turun_naik>batas_bawah;turun_naik--){
      myservo.write(turun_naik);
      delay(cepet);
    }
  }
}
