// ESP32 Touch Test
const int touch = 4;
const int led = 16;
int  value = 20;
int sentuh;
void setup() {
 Serial.begin(115200);
 delay(1000); // give me time to bring up serial monitor
 Serial.println("ESP32 Touch Test");
 pinMode(led, OUTPUT);
}
void loop() {
 sentuh = touchRead(touch);
 Serial.println(sentuh); // get value of Touch 0 pin = GPIO 4
 delay(300);
 
 if (sentuh < value){
  digitalWrite(led,HIGH);
  delay(300);
  digitalWrite(led,LOW);
  delay(300);
  } 
 
}
