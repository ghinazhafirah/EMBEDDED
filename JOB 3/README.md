# JOBSHEET 3 - TOPOLOGI JARINGAN LOKAL DAN WIFI

## Abstrak
<p align="justify">WiFi adalah teknologi nirkabel yang menggunakan gelombang radio 2,4GHz hingga 5GHz untuk menghubungkan perangkat seperti PC, smartphone, dan mikrokontrol ke jaringan lokal, memungkinkan akses internet. Dengan jangkauan sekitar 20 meter di dalam ruangan, WiFi telah menjadi kebutuhan harian untuk internet dan IoT. Perangkat membutuhkan adaptor nirkabel untuk terhubung ke WiFi, dan data dikirim melalui gelombang radio ke router, kemudian ke internet melalui koneksi ethernet. Jaringan WiFi beroperasi dalam dua arah, memungkinkan pertukaran data melalui sinyal radio antara perangkat dan adaptor nirkabel.</p>

<p align="justify">Jobsheet ini dirancang untuk memahami protokol topologi jaringan lokal dengan Wi-Fi, serta merancang topologi jaringan untuk Wireless Sensor Network (WSN) dan Internet of Things (IoT) menggunakan Wi-Fi sebagai medium komunikasi.</p>

Sub-job pada jobsheet ini, antara lain:
  1. ESP32 Wi-Fi Modes dan Wifi-Scan
  2. Menghubungkan ESP32 dengan Jaringan Wi-Fi
  3. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
  4. Mengganti Hostname ESP32
  5. Mengirim Data Sensor ke Database

## Alat dan Bahan

Alat dan bahan yang digunakan dalam jobsheet ini, antara lain:
  1. ESP32
  2. Breadboard
  3. Kabel jumper
  4. Sensor DHT 11, RFID
  5. LED (5) dan Push Button (3)
  6. Servo
  7. Resistor 330, 1K, 10K Ohm (@3)

# A. ESP32 Wi-Fi Modes dan Wifi-Scan

## Wifi Scan

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/a37af924-187d-41d9-8d78-a6316d5a189b)


### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
ESP akan melakukan pemindaian jaringan WiFi dan menampilkan hasilnya, termasuk kekuatan sinyal, pada serial monitor. Jika tidak ada jaringan, pesan "No Networks Found" akan ditampilkan. Proses pemindaian akan diulang setiap 5 detik menggunakan delay(5000) untuk menghindari pemindaian yang terlalu cepat (spam).

https://github.com/JeffriPS/Embedded/assets/94127988/fccd99ac-6159-4680-934d-742e2f85f939

### d. Flowchart
![flowchart 3A](https://github.com/JeffriPS/Embedded/assets/94127988/0372edd9-30c1-4309-9ba6-c0c1693d0933)

# B. Menghubungkan ESP32 dengan Jaringan Wi-Fi
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/883ce85e-5f2e-455d-9925-d4a828eb0a4d)

### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan

ESP berperan sebagai station atau klien dalam sebuah jaringan/AP yang ada. Oleh karena itu, ESP perlu mengetahui SSID dan password jaringan untuk melakukan koneksi. Pada kode program, terdapat looping untuk memeriksa apakah ESP sudah terhubung dengan jaringan. Jika sudah terkoneksi, IP address yang diperoleh oleh ESP akan ditampilkan.

#### Menghubungkan ESP32 dengan Jaringan Wi-Fi | Proses menghubungkan jaringan

https://github.com/JeffriPS/Embedded/assets/94127988/6f115a42-1ff0-41d9-b556-fbd8ca320c85

#### Menghubungkan ESP32 dengan Jaringan Wi-Fi | ESP32 berhasil terhubung dan mendapatkan IP Address

https://github.com/JeffriPS/Embedded/assets/94127988/d55ce36e-95fc-4904-a559-79244f5346c7

### d. Flowchart

![Flow 3B](https://github.com/JeffriPS/Embedded/assets/94127988/b04b3123-a6ad-45d8-80e9-89f842d23872)

# C. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/883ce85e-5f2e-455d-9925-d4a828eb0a4d)

### b. Source Code

Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan
Sistem auto reconnect ini merupakan pengembangan dari sistem koneksi sebelumnya, dengan tambahan kondisi dalam loop untuk mendeteksi kehilangan koneksi. Jika ESP terdeteksi terputus dari jaringan, ESP akan mencoba menghubungkan ulang ke jaringan yang sebelumnya terhubung setelah beberapa "jeda waktu". Informasi SSID dan password telah disiapkan pada tahap sebelumnya untuk proses ini.

https://github.com/JeffriPS/Embedded/assets/94127988/aed4d713-6721-465c-94e1-92e5089fc0f5

### d. Flowchart

![flow 3c](https://github.com/JeffriPS/Embedded/assets/94127988/44f6a1ba-0afb-4f3b-b7a1-9fb003c40b8d)

# D. Mengganti Hostname ESP32

### a. Rangkaian

Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/883ce85e-5f2e-455d-9925-d4a828eb0a4d)

### b. Source Code
Kode program dapat dilihat <a href="">di sini</a>

### c. Hasil dan Pembahasan

Hostname merupakan identitas yang digunakan oleh ESP32 pada suatu jaringan. Saat ESP terhubung ke jaringan, pemilik jaringan (AP) dapat melihat identitas perangkat, yaitu hostname dari ESP. Sebelum terhubung ke jaringan, ESP harus mendeklarasikan hostname menggunakan perintah `WiFi.setHostname()`. Untuk mengganti hostname ESP32, Anda dapat meng-upload program ke ESP32 seperti yang dijelaskan dalam jobsheet. Setelah itu, buka serial monitor, aktifkan mode koneksi WiFi pada smartphone atau laptop, lakukan scanning, dan lihat daftar jaringan WiFi yang tersedia. Dengan menggunakan `WiFi.setHostname()`, Anda dapat menetapkan nama host untuk ESP32, yang akan terlihat di jaringan Wi-Fi. Pastikan untuk mendokumentasikan perubahan hostname yang telah dilakukan.

https://github.com/JeffriPS/Embedded/assets/94127988/4c51a4e3-f60b-4a75-b4be-042537b02da2

### d. Flowchart

![flow 3D](https://github.com/JeffriPS/Embedded/assets/94127988/f9a40b71-27be-47d2-ad19-51a14733ed21)

# E. Mengirim Data Sensor ke Database
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3d](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/0b3d3a03-e7a6-44f0-878d-1e41bbe7d229)


### b. Source Code
Kode program dapat dilihat <a href="https://github.com/iamanisaamalia/sistemembedded/blob/main/jobsheet%203/e.%20Mengirim%20Data%20Sensor%20ke%20Database/mengirim_data/mengirim_data.ino">di sini</a>

### c. Hasil dan Pembahasan
Pengiriman data sensor ke database dimulai dengan menyusun rangkaian sederhana sesuai petunjuk jobsheet. Setelah menginstal library Asynch Web Server dan Async TCP untuk ESP32, unggah program ke ESP32, dan periksa IP Address melalui serial monitor. ESP32 melakukan inisialisasi WiFi, sensor suhu dan kelembaban (dht), serta menjadi host web server menggunakan localhost. Data suhu dan kelembaban dibaca, disimpan, dan dikirim melalui link dengan metode POST menggunakan JavaScript. Akses web server melalui IP address ESP32 setelah terhubung WiFi.

https://github.com/JeffriPS/Embedded/assets/94127988/36744e9d-3f77-4bd1-8696-edec2068c738

### d. Flowchart


