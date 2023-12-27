# JOBSHEET 2.1 - JARINGAN SENSOR NIRKABEL MENGGUNAKAN ESP-NOW

## Abstrak
<p align="justify">ESP-NOW adalah protokol komunikasi tanpa Wi-Fi yang dikembangkan oleh Espressif untuk ESP32. Protokol ini memungkinkan perangkat saling berkomunikasi pada frekuensi 2.4GHz 
dengan konfigurasi awal menggunakan alamat MAC. Setelah terpasang, jaringan peer-to-peer terbentuk, memungkinkan koneksi tetap ada tanpa perlu melakukan handshaking ulang. 
Jika salah satu perangkat ESP32 mati atau diatur ulang, koneksi otomatis dipulihkan saat restart ke perangkat pasangannya yang telah ditentukan alamatnya.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami konsep topologi jaringan sensor nirkabel berbasis ESP-NOW, melakukan konfigurasi berbagai topologi ESP-NOW, dan menganalisis dan menentukan topologi ESP-NOW,sesuai dengan
studi kasus proyek.</p>

**Sub-job** pada jobsheet ini, antara lain:
1. Memperoleh MAC Address ESP32 Receiver
2. ESP-NOW One-Way Point-to-Point Communication
3. One-Way, One-to-Many Communication
4. One-Way, Many-to-One Communication
5. Two-Way Communication

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Resistor 10K Ohm
5) Sensor DHT11

## Project A - Memperoleh MAC Address ESP32 Receiver
### Codingan 
Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/A.%20%20Memperoleh%20MAC%20Address/A._Memperoleh_MAC_Address_ESP32_Receiver.ino)

### Hasil
<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/b9e09121-7440-4218-893c-3fe93e07088d" width="480px">

## Project B -  ESP-NOW One-Way Point-to-Point Communication
### Codingan
Script program As Sender dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/B.%20%20ESP-NOW%20OneWay%20P2P%20Communication/B._Sender_One_way_point_to_point_communication.ino)

Script program As Receiver dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/B.%20%20ESP-NOW%20One-Way%20P2P%20Communication/B._Sender_One_way_point_to_point_communication.ino)

Script program Data Dummy dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/B.%20%20ESP-NOW%20One-Way%20P2P%20Communication/sender%20dummy.ino)

### Hasil
As Sender

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/fcd19db7-006e-476d-a35a-cf993c4164ef" width="480px">


As Receiver

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/ba000903-0762-47f8-b167-b3834d22f3e4" width="480px">

Data Dummy

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/3e363761-2c02-4153-9b75-6af65b14db4d" width="480px">
  
## Project C - One-Way, One-to-Many Communication
### Codingan
A.  Mengirim Pesan yang Sama Ke Beberapa Board ESP32
script program as receiver dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/C.%20One-Way%2C%20One-toMany%20Communication/A.%20%20Mengirim%20Pesan%20yang%20Sama%20Ke%20Beberapa%20Board%20ESP32/A_as_receiver.ino)

B. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32
script program as sender dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/C.%20One-Way%2C%20One-to-Many%20Communication/B.%20Mengirim%20Pesan%20yang%20Berbeda%20Ke%20Beberapa%20Board%20ESP32/B%20SENDER.ino)

### Hasil
A.  Mengirim Pesan yang Sama Ke Beberapa Board ESP32
As Sender

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/f3c08a29-61d6-4fc9-a878-30b197ca9e48" width="480px">

AS SENDER JIKA SALAH SATU ESP DIMATIKAN

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/e4ef3a55-9aa5-488d-a259-6f119982f57b" width="480px">

As Sender

As Receiver


B. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32
As Sender

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/a6bf06d6-6053-4d4e-8a90-1f82928e7f0b

## Project D - One-Way, Many-to-One Communication
### Codingan
A. Mengirim pesan sebagai sender
script program as sender dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/D.%20%20One-Way%2C%20Many-to-One%20Communication/sender.ino)

### Hasil
A. Mendapat pesan sebagai sender

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/eb2f4305-7125-4bd1-a456-ab8dcb1cc950

## Project E - Two-Way Communication
### Codingan
### Hasil

