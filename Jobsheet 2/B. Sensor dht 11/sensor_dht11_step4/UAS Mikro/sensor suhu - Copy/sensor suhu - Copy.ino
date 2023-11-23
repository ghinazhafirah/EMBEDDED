#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPin 2                    // Deklarasi PIN DHT11
#define DHTTipe DHT11               // Tipe sensor yang digunakan3 (DHT11 atau DHT22)
DHT dht(DHTPin, DHTTipe);

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

int R_LED=11;
int G_LED=10;
int B_LED=9;
int Buz=5;

void setup() {

  // inisialisasi pin led dan buzer sebagai output
  pinMode(R_LED,OUTPUT);
  pinMode(G_LED,OUTPUT);
  pinMode(B_LED,OUTPUT);
  pinMode(Buz,OUTPUT);

  // initialize the LCD
	lcd.begin();
	// Turn on the blacklight and print a message.
	lcd.backlight();
  // initialize DHT11
  dht.begin();
  delay(1000);
  // initialize Serial Monitor
  Serial.begin(9600);
}

void loop() {
  int lembab = dht.readHumidity();      // Membaca kelembaban
  float suhu1 = dht.readTemperature();   // Membaca suhu dalam satuan Celsius
  float suhu2 = dht.readTemperature(true); // Membaca suhu dalam satuan Fahrenheit
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Suhu(C): ");
  lcd.print(suhu1);
  lcd.println(" C");

  lcd.setCursor(0,1);
  lcd.print("Suhu(F): ");
  lcd.print(suhu2);
  lcd.println(" F");
  if (isnan(lembab) || isnan(suhu1) || isnan(suhu2)) {
  Serial.println(F("Failed to read from DHT sensor!"));
  return;
  }
    
  Serial.print(F("Humidity: "));
  Serial.print(lembab);
  Serial.print(F("% Temperature: "));
  Serial.print(suhu1);
  Serial.print(F("°C ,"));
  Serial.print(suhu2);
  Serial.println(F("°F "));
    
  if(suhu1 > 29.5)
  {
Serial.println("Warning, Sistem PANAS");
  digitalWrite(G_LED,LOW);
  digitalWrite(R_LED,HIGH);
  digitalWrite(Buz,80);
  delay(2000);
  digitalWrite(R_LED,LOW);
  analogWrite(Buz,0);
  delay(1000);
  }
  else if (suhu1 < 28.0)
  {
Serial.println("Warning, Sistem DINGIN");
  digitalWrite(G_LED,LOW);
  digitalWrite(B_LED,HIGH);
  analogWrite(Buz,20);
  delay(2000);
  digitalWrite(B_LED,LOW);
  analogWrite(Buz,0);
  delay(1000);
  }
  else
  {
Serial.println("Sistem Berfungsi BAIK");
  digitalWrite(R_LED,LOW);
  digitalWrite(B_LED,LOW);
  digitalWrite(G_LED,HIGH);
  delay(2000);
  }

}
