  const int buttonPin = 4; // the number of the pushbutton pin
  const int buttonPin1 = 18;
  const int buttonPin2 = 15;
  const int ledPin = 5; // the number of the LED pin
  const int ledPin1 = 19;
  const int ledPinA = 21;
  const int ledPinB = 22;
  const int ledPinC = 23;
  
  // variable for storing the pushbutton status 
  int a = 0;
  int b = 0;
  int buttonState = 0;
  int button_state = 0;
  int tombol = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello, ESP32!");
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);

  }

void loop() {
 buttonState = digitalRead(buttonPin);
 button_state = digitalRead(buttonPin1);
 tombol = digitalRead(buttonPin2);
 //Serial.println(buttonState);
 
 if (buttonState == HIGH) {
 // turn LED on
 digitalWrite(ledPin, HIGH);
 } else {
 digitalWrite(ledPin, LOW);
 }



if (button_state == HIGH){
  for(int i=1;i<=2;i++){
    digitalWrite(ledPin1, HIGH);
    delay(500);
    digitalWrite(ledPin1, LOW);
    delay(500);
  }
}


if (tombol == HIGH){
  for(int j=1;j<=3;j++){
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, LOW);
  delay(500);
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, LOW);
  delay(500);
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, HIGH);
  delay(500);
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, LOW);
  delay(10);
    }  
  
}


  delay(10); // this speeds up the simulation
}
