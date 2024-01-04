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

### Hasil dan Pembahasan
Hasil dari percobaan ini adalah memperoleh MAC Address dari ESP32 yang ditampilkan melalui serial monitor. MAC Address yang diperoleh adalah 08:3A:F2:B7:C6:80.

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/b9e09121-7440-4218-893c-3fe93e07088d" width="480px">

## Project B -  ESP-NOW One-Way Point-to-Point Communication
### Rangkaian 

![Rangkaian](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/06e5cf7b-123a-45c6-8da0-a66990a229ce)

### Codingan
Script program As Sender dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/B.%20%20ESP-NOW%20OneWay%20P2P%20Communication/B._Sender_One_way_point_to_point_communication.ino)

Script program As Receiver dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/B.%20%20ESP-NOW%20One-Way%20P2P%20Communication/B._Sender_One_way_point_to_point_communication.ino)

Script program Data Dummy dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/B.%20%20ESP-NOW%20One-Way%20P2P%20Communication/sender%20dummy.ino)

### Hasil dan Pembahasan
### Hasil dan Pembahasan
### A. ANALISIS PROGRAM SENDER DAN RECEIVER
**PROGRAM SENDER**
1. Include Library dan Header
```c
#include <esp_now.h>
#include <WiFi.h>
```
>Program ini menggunakan dua library, yaitu `esp_now` untuk ESP-NOW dan `WiFi` untuk mengonfigurasi mode WiFi.
<br>

2. Inisialisasi Broadcast Address
```c
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
```
>Menginisialisasi alamat broadcast yang digunakan untuk mengirim data ke semua perangkat di jaringan.
<br>

  3. Deklarasi Struktur Pesan
```c
typedef struct struct_message {
    char a[32];
    int b;
    float c;
    bool d;
} struct_message;
```
>Mendefinisikan struktur pesan yang akan dikirim. Struktur ini memiliki empat elemen, yaitu array karakter, integer, float, dan boolean.
<br>

  4. Deklarasi Variabel dan Fungsi Callback
```c
struct_message myData;
esp_now_peer_info_t peerInfo;

void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
    Serial.print("\r\nStatus Paket Terakhir :\t");
    Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Sukses Terkirim" : "Gagal Terkirim");
}
```
>Menyediakan variabel untuk menyimpan data yang akan dikirim dan struktur peer info untuk informasi penerima. Fungsi `OnDataSent` adalah callback yang dipanggil setelah data terkirim.
<br>

  5. Setup Function
```c
void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);

    if (esp_now_init() != ESP_OK) {
        Serial.println("Gagal menginisialisasi ESP-NOW");
        return;
    }

    esp_now_register_send_cb(OnDataSent);

    memcpy(peerInfo.peer_addr, broadcastAddress, 6);
    peerInfo.channel = 0;
    peerInfo.encrypt = false;

    if (esp_now_add_peer(&peerInfo) != ESP_OK){
        Serial.println("Gagal menambahkan peer");
        return;
    }
}
```
 > - Menginisialisasi Serial Monitor dan mode WiFi sebagai station.
 > - Menginisialisasi ESP-NOW dan mendaftarkan callback untuk meng-handle status pengiriman.
 > - Mendaftarkan alamat peer yang akan menerima data.
<br>

  6. Loop Function
```c
void loop() {
    strcpy(myData.a, "INI ADALAH CHAR");
    myData.b = random(1,20);
    myData.c = 1.2;
    myData.d = false;

    esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    if (result == ESP_OK) {
        Serial.println("Data berhasil terkirim");
    }
    else {
        Serial.println("Gagal mengirim data");
    }

    delay(2000);
}
```
 > - Mengisi data dalam struktur pesan.
 > - Mengirim data menggunakan `esp_now_send`.
 > - Menampilkan status pengiriman data melalui Serial Monitor.
 > - Menunggu selama 2 detik sebelum mengulang proses pengiriman.
Dengan demikian, program ini secara berulang mengirim data menggunakan protokol ESP-NOW ke perangkat penerima yang telah ditentukan.
<br>

**PROGRAM RECEIVER**
 1. Include Library dan Header
```c
#include <esp_now.h>
#include <WiFi.h>
```
>Seperti pada program sender, library yang digunakan adalah `esp_now` untuk ESP-NOW dan `WiFi` untuk mengonfigurasi mode WiFi.
<br>
  
  2. Deklarasi Struktur Pesan
```c
typedef struct struct_message {
    char a[32];
    int b;
    float c;
    bool d;
} struct_message;
```
>Mendefinisikan struktur pesan yang harus sama dengan struktur pesan pada program sender untuk memastikan konsistensi data yang dikirim dan diterima.
<br>
  
  3. Deklarasi Variabel dan Fungsi Callback Penerima
```c
struct_message myData;

void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
    // Mengkopi data yang diterima ke dalam struktur myData
    memcpy(&myData, incomingData, sizeof(myData));

    // Menampilkan data yang diterima melalui Serial Monitor
    Serial.print("Bytes received: ");
    Serial.println(len);
    Serial.print("Char: ");
    Serial.println(myData.a);
    Serial.print("Int: ");
    Serial.println(myData.b);
    Serial.print("Float: ");
    Serial.println(myData.c);
    Serial.print("Bool: ");
    Serial.println(myData.d);
    Serial.println();
}
```
>`OnDataRecv`: Callback yang dieksekusi ketika ada data yang diterima. Menggunakan `memcpy` untuk menyalin data yang diterima ke dalam struktur `myData`. Kemudian, menampilkan informasi mengenai data yang diterima melalui Serial Monitor.
<br>
  
  4. Setup Function
```c
void setup() {
    // Initialize Serial Monitor
    Serial.begin(115200);
    
    // Set ESP32 sebagai station
    WiFi.mode(WIFI_STA);

    // Inisialisasi ESP-NOW dan mendaftarkan callback untuk proses penerimaan data
    if (esp_now_init() != ESP_OK) {
        Serial.println("Error initializing ESP-NOW");
        return;
    }
    esp_now_register_recv_cb(OnDataRecv);
}
```
 > - Menginisialisasi Serial Monitor dan mode WiFi sebagai station.
 > - Inisialisasi ESP-NOW dan mendaftarkan callback `OnDataRecv` untuk menangani proses penerimaan data.
<br>
  
  5. Loop Function
```c
void loop() {
    // Loop kosong, karena penerima hanya menangani data yang diterima secara asinkron.
}
```
>Loop utama tidak melakukan apa-apa karena penerima hanya menangani data yang diterima secara asinkron melalui callback.
Program ini, ketika dijalankan, akan terus mendengarkan dan menampilkan informasi mengenai data yang diterima melalui protokol ESP-NOW. Program sender yang sesuai akan mengirimkan data ke ESP32 yang berperan sebagai receiver, dan callback OnDataRecv akan dieksekusi untuk menangani data yang diterima.
<br>

### B. MEMBUAT DATA DUMMY DENGAN UKURAN YANG TERBACA OLEH RECEIVER ± 250 BYTE
Untuk membuat data dummy dengan ukuran yang terbaca oleh receiver $\pm$ 250 byte, yang harus dilakukan adalah dengan mengubah nilai `char a[]` menjadi 236
```c
typedef struct struct_message {
 char a[236];
 int b;
 float c;
 bool d;
}
```


As Sender

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/fcd19db7-006e-476d-a35a-cf993c4164ef" width="480px">


As Receiver

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/ba000903-0762-47f8-b167-b3834d22f3e4" width="480px">

Data Dummy

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/3e363761-2c02-4153-9b75-6af65b14db4d" width="480px">
  
## Project C - One-Way, One-to-Many Communication
### Rangkaian 
![Rangkaian](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/396f8c21-bcfe-416f-a81d-44895661cb2d)

### Codingan
A.  Mengirim Pesan yang Sama Ke Beberapa Board ESP32
script program as receiver dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/C.%20One-Way%2C%20One-toMany%20Communication/A.%20%20Mengirim%20Pesan%20yang%20Sama%20Ke%20Beberapa%20Board%20ESP32/A_as_receiver.ino)

B. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32
script program as sender dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/C.%20One-Way%2C%20One-to-Many%20Communication/B.%20Mengirim%20Pesan%20yang%20Berbeda%20Ke%20Beberapa%20Board%20ESP32/B%20SENDER.ino)

### Hasil dan Pembahasan
### Hasil dan Pembahasan 
Pada percobaan ini, terlibat penggunaan 4 modul ESP32. Salah satu ESP32 akan berperan sebagai Master (pengirim), sedangkan tiga ESP32 lainnya berfungsi sebagai Slave (penerima). Peran Master adalah sebagai pengendali utama yang memulai dan mengatur proses komunikasi, sementara tiga perangkat Slave bertugas menerima instruksi atau data yang sama yang dikirimkan oleh Master. Awalnya, Master memasukkan alamat MAC dari setiap ESP yang berperan sebagai Slave. Selanjutnya, Master mengirimkan data yang identik kepada masing-masing Slave.

A.  Mengirim Pesan yang Sama Ke Beberapa Board ESP32
As Sender

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/f3c08a29-61d6-4fc9-a878-30b197ca9e48" width="480px">

AS SENDER JIKA SALAH SATU ESP DIMATIKAN

<img src="https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/e4ef3a55-9aa5-488d-a259-6f119982f57b" width="480px">

B. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32

### Hasil dan Pembahasan 
Dalam percobaan ini, konfigurasi tetap serupa dengan sebelumnya, dimana satu ESP bertindak sebagai Master dan tiga ESP berperan sebagai Slave. Namun, perbedaannya terletak pada jenis data yang dikirimkan kepada setiap Slave. Slave 1 akan menerima data yang mengandung variabel dengan tipe data integer, Slave 2 menerima data variabel dengan tipe data float, dan Slave 3 menerima data variabel dengan tipe data string.

As Sender

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/a6bf06d6-6053-4d4e-8a90-1f82928e7f0b

## Project D - One-Way, Many-to-One Communication
### Rangkaian
![Rangkaian](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/054120d4-e028-456c-b6e8-9e930c955cbf)

### Codingan
A. Mengirim pesan sebagai sender
script program as sender dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/D.%20%20One-Way%2C%20Many-to-One%20Communication/sender.ino)

### Hasil dan Pembahasan
Dalam percobaan ini, istilah "One" mengacu pada satu perangkat penerima tunggal, sementara "Many" merujuk pada banyak perangkat pengirim. Artinya, satu perangkat penerima menerima data dari beberapa perangkat pengirim secara bersamaan atau secara bergantian, tetapi tanpa memberikan respons atau balasan kepada perangkat pengirim. Dalam pengujian ini, digunakan 1 ESP32 sebagai penerima dan 3 ESP32 sebagai pengirim. Hasil yang dihasilkan adalah sebagai berikut.

A. Mendapat pesan sebagai sender

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/eb2f4305-7125-4bd1-a456-ab8dcb1cc950

## Project E - Two-Way Communication
### Rangkaian
Rangkaian cek sensor
![Rangkaian_Cek_sensor](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/cd3b8660-8539-4494-9da1-b98bb78da4c3)

Rangkaian Two-Way Communication
![ESP32](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/652e2f77-d3f4-471f-8de5-0acb42b3dd19)

### Codingan
1. Pengecekan Sensor DHT11 dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/E.%20%20Two-Way%20Communication/Cek_Sensor_DHT_11.ino)
   
2. Two-Way Communication dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202.1/E.%20%20Two-Way%20Communication/Sensor_DHT_11_sender_receiver.ino)
   
### Hasil dan Pembahasan
1. Pengecekan Sensor DHT11

    Percobaan ini melibatkan pemeriksaan sensor DHT11 yang terhubung ke board ESP, diikuti oleh eksekusi program terkait. Apabila sensor beroperasi secara normal, hasil pembacaan suhu dan kelembaban oleh sensor akan ditampilkan di serial monitor.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/eab40681-7d36-45c0-bdf2-5d73cbba71f6

2. Two-Way Communication

   Pada percobaan ini, terlibat penggunaan 2 board ESP32 yang saling berkomunikasi. Sensor pada ESP A mengirimkan hasilnya ke ESP B, dan sebaliknya, dalam interval waktu tertentu. Oleh karena itu, program ini menggabungkan fungsi pengiriman dan penerimaan data, serta melakukan pembacaan sensor secara bersamaan.

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/7e1a365f-d287-4e9c-89f8-6c2c290bb22d

