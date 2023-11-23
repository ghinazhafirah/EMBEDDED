const int ledPin = 5;  // GPIO pin yang akan digunakan untuk LED
int interval = 1000;   // Interval awal 1 detik

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Nyalakan LED
  delay(interval);            // Tunggu sesuai interval

  digitalWrite(ledPin, LOW);  // Matikan LED
  delay(500);                 // Tunggu sebentar setelah LED mati

  // Ganti interval sesuai dengan kebutuhan
  if (interval == 1000) {
    interval = 2000;  // Ubah ke interval 2 detik
  } else if (interval == 2000) {
    interval = 3000;  // Ubah ke interval 3 detik
  } else {
    interval = 100;   // Kembali ke interval 100ms
  }
}
