  const int buttonPin = 4; // the number of the pushbutton pin
  const int buttonPin1 = 18;
  const int ledPin = 5; // the number of the LED pin
  const int ledPin1 = 19;
  
  // variable for storing the pushbutton status 
  int a = 0;
  int b = 0;
  int buttonState = 0;
  int button_state = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello, ESP32!");
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);

  }

void loop() {
 buttonState = digitalRead(buttonPin);
 //Serial.println(buttonState);
 if (buttonState == HIGH) {
 // turn LED on
 digitalWrite(ledPin, HIGH);
 } else {
 digitalWrite(ledPin, LOW);
 }

button_state = digitalRead(buttonPin1);

if (button_state == HIGH){
  for(int i=1;i<=2;i++){
    digitalWrite(ledPin1, HIGH);
    delay(500);
    digitalWrite(ledPin1, LOW);
    delay(500);
  }
  
}
  delay(10); // this speeds up the simulation
}
