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
Kode program dapat dilihat <a href="">disini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah apabila ujung jumper disentuh maka grafik kapasitansi akan naik.

https://github.com/JeffriPS/Embedded/assets/94127988/ee99970b-f3a2-409d-80fc-b23c33e29dee

## 2. LED menyala ketika sensor disentuh

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah LED akan menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh.

https://github.com/JeffriPS/Embedded/assets/94127988/0e7375a1-2426-4bb4-b258-e30ced4775bf

## 3. LED menyala blink ketika sensor disentuh

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan

Percobaan ini menunjukkan bahwa saat sensor disentuh, LED berkedip dengan interval 500 ms. Nilai kapasitansi kurang dari 20 menandakan sentuhan terdeteksi, sehingga LED berkedip. Jika nilai kapasitansi lebih besar atau sama dengan 20, LED dimatikan, menandakan tidak ada sentuhan terdeteksi.

https://github.com/JeffriPS/Embedded/assets/94127988/6443ce83-28ff-4cb4-a3b3-697d856f3f06

## 4. Angka yang akan bertambah setiap kali sensor disentuh

### a. Rangkaian

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">


### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika LED menyala, maka pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh

https://github.com/JeffriPS/Embedded/assets/94127988/e66042e3-b185-42f2-b755-79b04653be3e

## 5. LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan

Percobaan ini menggunakan tiga LED untuk membentuk efek running LED saat sensor disentuh. Program membuka komunikasi serial dengan pesan "ESP32 Touch Test". Saat nilai kapasitansi sensor sentuh (T0/GPIO 4) kurang dari 20 (sentuhan terdeteksi), tiga LED (led1, led2, led3) berkedip berurutan setiap 500 ms. Jika tidak ada sentuhan, semua LED dimatikan. Nilai hitungan dicetak ke serial monitor.

https://github.com/JeffriPS/Embedded/assets/94127988/d0e9bfad-00c2-4c36-b520-c0f189d0c6c3

# B. Mengakses Sensor DHT 11 (Single Wire / BUS)

## 1. Cek Sensor DHT11

### a. Rangkaian 

<img alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/cca91488-7ed5-4895-8eec-67d8496790c8">

### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika mengecek sensor DHT11. Jika sensor berfungsi dengan baik, maka serial monitor akan menampilkan hasil pembacaan suhu dan kelembaban oleh sensor DHT11.

https://github.com/JeffriPS/Embedded/assets/94127988/b8be5f06-1c60-4c92-b84a-7538f695eac0

## 2. Tugas

### a. Rangkaian

![board-2](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/14779bf1-007e-428e-b901-ab4477c5802c)


### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari tugas ini adalah apabila sensor mendeteksi suhu yang naik maka suhu pada serial monitor juga akan naik.
Ketika suhu rungan mencapai 30 derajat celcius, maka ESP32 akan menyalakan LED Merah dan buzzer.

https://github.com/JeffriPS/Embedded/assets/94127988/2f1ea066-960d-49fa-b76e-4114f4cd063d

# C. Mengakses Sensor RFID (SPI Communication)

## 1. Cek RFID

### a. Rangkaian 

<img alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/74a26b36-91ab-4a93-8a4d-af319da6e011">

### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika RFID Card didekatkan pada RFID Reader maka akan muncul code deteksi RFID Card di serial monitor

https://github.com/JeffriPS/Embedded/assets/94127988/9e22e002-c2db-40ea-8959-3f9c5f3918f0

## 2. Tugas

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan

Dalam percobaan ini, ketika tag RFID didekatkan pada Reader, LED Hijau menyala, servo bergerak ke kanan (kemudian kembali ke posisi semula setelah 3 detik), dan di Serial Monitor muncul pesan “Akses Diterima, Silahkan Masuk”. Namun, jika Tag RFID tidak dikenali, LED Merah menyala, servo tetap statis, dan di Serial Monitor terpampang pesan “Akses Ditolak”.

https://github.com/JeffriPS/Embedded/assets/94127988/235eb796-e0c3-4ba8-af1e-4e5dd657b0fa



