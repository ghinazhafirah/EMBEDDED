# JOBSHEET 2 - PROTOKOL KOMUNIKASI DAN SENSOR

## Abstrak
<p align="justify">Praktikum Protokol Komunikasi dan Sensor memperkenalkan mahasiswa pada konsep dasar protokol komunikasi dan penggunaan sensor dengan mikrokontroler ESP32, yang memiliki kemampuan WiFi dan Bluetooth untuk proyek Internet of Things (IoT). Materi melibatkan konsep Serial Communication, I2C, SPI, serta penerapan sensor seperti suhu, kelembaban, gerak, dan jarak pada ESP32. Setelah memahami dasar-dasar pemrograman ESP32, mahasiswa diajak untuk menerapkan pengetahuan tersebut dalam proyek sederhana, seperti membaca data sensor suhu dan mengirimkannya ke server melalui koneksi WiFi.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami cara kerja protokol komunikasi yang terdapat pada ESP32, seperti UART, I2C, OneWire, SPI, menggunakan protokol komunikasi data seperti UART, I2C, OneWire, dan SPI untuk mengakses sensordsan diharapkan dapat memanfaatkan transducer sensor dan actuator untuk membuat sebuah perangkat IoT..</p>

**Sub-job** pada jobsheet ini, antara lain:
1. ESP32 Capacitive Touch Sensor
2. Mengakses Sensor DHT 11 (Single Wire / BUS)
3. Mengakses Sensor RFID (SPI Communication)

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT11, RFID
5) LED (5) dan Push Button (3)
6) Servo
7) Resistor 330,1K, 10K Ohm (@ 3)

# A. ESP32 Capasitive Touch Sensor  

## 1. Cek Touch

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/1.%20ESP32%20TOUCH%20TEST/Percobaan1_Step2.ino">disini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah apabila ujung jumper disentuh maka grafik kapasitansi akan naik.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/12632450-d748-4302-99e3-a751bb347bd9

## 2. LED menyala ketika sensor disentuh

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/2.%20LED%20nyala%20ketika%20disentuh%20mati%20ketika%20tidak%20disentuh/percobaan2_step6.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah LED akan menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/00b8b76c-82f0-4aa0-bde6-f559c0d9f9e3

## 3. LED menyala blink ketika sensor disentuh

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/3.%20LED%20BLINK%20KETIKA%20SENSOR%20DISENTUH/Percobaan2.ino">di sini</a>

### c. Hasil dan Pembahasan

Percobaan ini menunjukkan bahwa saat sensor disentuh, LED berkedip dengan interval 500 ms. Nilai kapasitansi kurang dari 20 menandakan sentuhan terdeteksi, sehingga LED berkedip. Jika nilai kapasitansi lebih besar atau sama dengan 20, LED dimatikan, menandakan tidak ada sentuhan terdeteksi.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/d2baf9f3-92ca-4e21-901a-a858b13bc655

## 4. Angka yang akan bertambah setiap kali sensor disentuh

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">


### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/4.%20sensor%20disentuh%2C%20led%20menyala%2C%20angka%20bertambah/percobaan2_step8.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika LED menyala, maka pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/4d3d984f-aebd-4d25-b506-d15c5a2410c4

## 5. LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/5.%20RUNNING%20LED%20SECARA%20KONTINYU/percobaan2_step9.ino">di sini</a>

### c. Hasil dan Pembahasan

Percobaan ini menggunakan tiga LED untuk membentuk efek running LED saat sensor disentuh. Program membuka komunikasi serial dengan pesan "ESP32 Touch Test". Saat nilai kapasitansi sensor sentuh (T0/GPIO 4) kurang dari 20 (sentuhan terdeteksi), tiga LED (led1, led2, led3) berkedip berurutan setiap 500 ms. Jika tidak ada sentuhan, semua LED dimatikan. Nilai hitungan dicetak ke serial monitor.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/21a8e5e1-698a-47f5-b637-1f237f2e856c

# B. Mengakses Sensor DHT 11 (Single Wire / BUS)

## 1. Cek Sensor DHT11

### a. Rangkaian 

<img alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/cca91488-7ed5-4895-8eec-67d8496790c8">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/B.%20%20Mengakses%20Sensor%20DHT%2011%20(Single%20Wire%20-%20BUS)/1.%20AKSES%20SENSOR%20DHT%2011/sensor_dht_step3.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika mengecek sensor DHT11. Jika sensor berfungsi dengan baik, maka serial monitor akan menampilkan hasil pembacaan suhu dan kelembaban oleh sensor DHT11.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/c1eaad69-0f7d-486d-936d-92ef0393f236

## 2. Tugas

### a. Rangkaian

![board-2](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/14779bf1-007e-428e-b901-ab4477c5802c)


### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/B.%20%20Mengakses%20Sensor%20DHT%2011%20(Single%20Wire%20-%20BUS)/2.%20KONTROL%20BUZZER%20MENGGUNAKAN%20SENSOR%20SUHU/sensor_dht11_dan_buzzer.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari tugas ini adalah apabila sensor mendeteksi suhu yang naik maka suhu pada serial monitor juga akan naik.
Ketika suhu rungan mencapai 30 derajat celcius, maka ESP32 akan menyalakan LED Merah dan buzzer.

https://github.com/JeffriPS/Embedded/assets/94127988/2f1ea066-960d-49fa-b76e-4114f4cd063d

# C. Mengakses Sensor RFID (SPI Communication)

## 1. Cek RFID

### a. Rangkaian 

<img alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/74a26b36-91ab-4a93-8a4d-af319da6e011">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/C.%20%20Mengakses%20Sensor%20RFID%20(SPI%20Communication)/Tag%20RFID%20ke%20RFID%20Reader/percobaan1_step3.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika RFID Card didekatkan pada RFID Reader maka akan muncul code deteksi RFID Card di serial monitor

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/111cf428-9b58-4bcc-bc22-8fa7c267ec8b

## 2. Tugas

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan

Dalam percobaan ini, ketika tag RFID didekatkan pada Reader, LED Hijau menyala, servo bergerak ke kanan (kemudian kembali ke posisi semula setelah 3 detik), dan di Serial Monitor muncul pesan “Akses Diterima, Silahkan Masuk”. Namun, jika Tag RFID tidak dikenali, LED Merah menyala, servo tetap statis, dan di Serial Monitor terpampang pesan “Akses Ditolak”.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/d7e13819-c66a-469a-b0a5-a218a0b5f7c8




