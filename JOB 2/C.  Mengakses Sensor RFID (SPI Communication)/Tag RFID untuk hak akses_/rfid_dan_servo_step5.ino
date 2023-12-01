#include <SPI.h>
#include <Wire.h>
#include <Servo.h>
byte sda = 21;
byte rst = 22;
#include<KRrfid.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

Servo servo; 

int servoPin = 35;

void setup() {

  Serial.begin(9600); 
  rfidBegin();
  SPI.begin(); 
  servo.attach(servoPin); 
  servo.write(0);
  delay(100);
  Serial.println("Tempelkan kartu");
}

void loop() {
  getTAG(); 


  if (TAG != "") {
    
    Serial.printlnt("ID ANDA : ");
    Serial.println(TAG);
    delay(1000);  
    

    if (TAG == "3518920959") { // Nilai RFID yang sudah pernah diinputkan
      
      Serial.println("Access Accepted");
      delay(1000);
      servo.write(90); 
      delay(1000); 
      servo.write(0); 
      delay(1000);
    }
    else if (TAG == "52021466") { // Nilai RFID yang sudah pernah diinputkan
      Serial.println("Access Accepted");
      delay(1000);
      servo.write(90); 
      delay(1000); 
      servo.write(0); 
      delay(1000);
    }
    else { // Nilai RFID yang belum pernah diinputkan
      Serial.print("Access Denied");
      delay(1000);
      servo.write(0); 
      delay(1000);
    }
    delay(100);
    TAG = "";
  }
}
