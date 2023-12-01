#include <DHT.h>

#define DHTPIN 4      // Pin yang terhubung ke sensor DHT
#define DHTTYPE DHT11 // Tipe sensor DHT (DHT11 atau DHT22)
#define LED_PIN 5    // Pin LED merah
#define BUZZER_PIN 18 // Pin buzzer

DHT dht(DHTPIN, DHTTYPE);
int buzzerState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  float temperature = dht.readTemperature();

  if (!isnan(temperature)) {
    Serial.print("Suhu: ");
    Serial.println(temperature);

    if (temperature >= 30) {
      digitalWrite(LED_PIN, HIGH);
      // Nyalakan buzzer secara beep (blink)
      tone(BUZZER_PIN, 1000); // Frekuensi 1000 Hz
      delay(100);             // Tahan buzzer selama 100 ms
      noTone(BUZZER_PIN);     // Matikan buzzer
      delay(100);             // Tahan selama 100 ms
    } else {
      digitalWrite(LED_PIN, LOW);
      // LED berkedip seperti pada Percobaan A
      for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(500); // Nyalakan LED selama 500 ms
        digitalWrite(LED_PIN, LOW);
        delay(500); // Matikan LED selama 500 ms
      }
    }
  } else {
    Serial.println("Gagal membaca suhu.");
  }

  delay(1000); // Ukur suhu setiap 2 detik
}
