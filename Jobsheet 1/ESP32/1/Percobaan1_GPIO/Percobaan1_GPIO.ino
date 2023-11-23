// set pin numbers
const int buttonPin = 4; // the number of the pushbutton pin
const int buttonPinn = 18;
const int ledPin = 5; // the number of the LED pin
const int ledPinn = 21;
// variable for storing the pushbutton status 
int buttonState = 0;
void setup() {
 Serial.begin(115200); 
 // initialize the pushbutton pin as an input
 pinMode(buttonPin, INPUT);
 pinMode(18, INPUT);
 // initialize the LED pin as an output
 pinMode(ledPin, OUTPUT);
 pinMode(21,OUTPUT);
}
void loop() {
 // read the state of the pushbutton value
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
 // check if the pushbutton is pressed.
 // if it is, the buttonState is HIGH
 if (buttonState == HIGH) {
 // turn LED on
 digitalWrite(ledPin, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPin, LOW);
 }

 buttonState = digitalRead(buttonPinn);
 Serial.println(buttonState);

 if (buttonState == HIGH) {
 // turn LED on
 digitalWrite(ledPinn, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPinn, LOW);
 }
}
