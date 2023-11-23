// ESP32 Touch Test
const int touch = 4;
const int ledPin1 = 5;
const int ledPin2 = 16;
const int ledPin3 = 17;
int  value = 20;
int sentuh;
int a = 0; 
void setup() {
 Serial.begin(115200);
 delay(1000); // give me time to bring up serial monitor
 Serial.println("ESP32 Touch Test");
 pinMode(ledPin1, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(ledPin3, OUTPUT);
}
void loop() {
 sentuh = touchRead(touch);
// Serial.println(sentuh); // get value of Touch 0 pin = GPIO 4
// delay(300);
 if (sentuh < value){
    digitalWrite(ledPin1, HIGH); // Turn on the LED when touch is detected
    delay(500);
    digitalWrite(ledPin1, LOW); // Turn on the LED when touch is detected
    digitalWrite(ledPin2, HIGH); // Turn on the LED when touch is detected
    delay(500);
    digitalWrite(ledPin2, LOW); // Turn on the LED when touch is detected
    digitalWrite(ledPin3, HIGH); // Turn on the LED when touch is detected
    delay(500);
    digitalWrite(ledPin2, HIGH); // Turn on the LED when touch is detected
    digitalWrite(ledPin3, LOW); // Turn on the LED when touch is detected
    delay(500);
    digitalWrite(ledPin1, HIGH); // Turn on the LED when touch is detected
    digitalWrite(ledPin2, LOW); // Turn on the LED when touch is detected
    delay(10);

  }else {
    digitalWrite(ledPin1, LOW); // Turn off the LED when no touch is detected
    digitalWrite(ledPin2, LOW); // Turn off the LED when no touch is detected
    digitalWrite(ledPin3, LOW); // Turn off the LED when no touch is detected

    }
    delay (100);

}
