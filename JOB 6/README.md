# JOBSHEET 6 - TRANSMISI DATA MENGGUNAKAN MESSAGE QUEUING TELEMETRY TRANSPORT (MQTT) PROTOCOL

## Abstrak
<p align="justify">
  Pada praktikum ini, fokus utamanya adalah implementasi dan penerapan protokol Message Queuing Telemetry Transport (MQTT) dalam konteks transmisi data. MQTT, sebagai protokol komunikasi yang ringan, dirancang khusus untuk perangkat dengan keterbatasan sumber daya, seperti sensor dan perangkat Internet of Things (IoT). Praktikum bertujuan memberikan pemahaman mendalam tentang konsep dasar MQTT, melibatkan aspek-aspek seperti topik, penerbitan (publishing), langganan (subscribing), dan struktur pesan.</p>

<p align="justify">Mahasiswa dalam praktikum ini akan mempelajari prinsip dasar MQTT, termasuk peran kunci seperti broker MQTT yang berfungsi sebagai perantara dalam pertukaran pesan antara penerbit dan pelanggan. Selain itu,juga akan terlibat dalam konfigurasi dan penggunaan perangkat lunak atau platform yang mendukung MQTT, seperti Eclipse Mosquitto atau platform IoT yang terintegrasi dengan protokol ini.

Serangkaian tugas praktikum melibatkan pengaturan dan konfigurasi broker MQTT, pembuatan penerbit dan pelanggan MQTT sederhana, serta pengiriman data baik dalam lingkungan simulasi maupun pada perangkat fisik yang terhubung. Mahasiswa juga akan memahami bagaimana membuat topik, menerbitkan pesan ke topik, dan menerima pesan dari topik yang sama atau berbeda.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami alur kerja, kegunaan dan manfaat protokol MQTT,serta memahami dan mengimplementasikan protokol MQTT pada sistem IoT untuk monitoring dan kendali.</p>

**Sub-job** pada jobsheet ini, antara lain:
1. Koneksi MQTT Broker
2. Menerima Data JSON Melalui Protokol MQTT
3. Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer
5) Sensor DHT11
6) LED
7) Multimeter
8) Resistor 1K Ohm

# A. Koneksi MQTT Broker

### a. Langkah Kerja
  1.  Buka Node-Red
  2.  Kemudian buatlah tab baru untuk memulai membuat flow pemrograman backend-server menggunakan protokol MQTT.
  3.  Buatlah flow program seperti pada Gambar 6.1.
  ![langkah-1](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/1245d44d-9929-47be-b278-100beb1c3c03)


  4. Konfigurasikan Temperature Node seperti Gambar di bawah ini.
  <img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/7a200dc5-b942-4b89-a35f-813f086e3731">

  5. Kemudian konfigurasikan Pub/Sub Node seperti pada Gambar 6.3. Klik pada tanda lingkaran merah untuk membuat koneksi dengan broker MQTT.
  <img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/41d46294-b921-43a8-9579-d09fee7bbc30">

   6. Setelah itu, konfigurasikan Broker Node seperti pada Gambar 6.4. Sesuaikan dengan broker server sebelumnya, agar tercipta koneksi. Perhatikan juga topic yang digunakan, agar pesan dapat dikirim pada address yang benar.
  <img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/962ee209-2197-4c82-93a7-6ff6239df98f">

   7. Setelah semua telah dikonfigurasi, deploy flow dan dokumentasikan hasil
outputnya.

### b. Hasil dan Pembahasan
Broker MQTT berfungsi sebagai perantara dalam interaksi antara penerbit (publisher) dan pelanggan (subscriber). Dengan menggunakan protokol MQTT, pertukaran pesan difasilitasi melalui manajemen topik (topics) yang diterbitkan dan di-subscribe oleh klien. Hal ini memungkinkan pengiriman dan penerimaan data melalui broker MQTT.

Selanjutnya yaitu penekanan tombol "Deploy" yang terletak di pojok kanan atas antarmuka pengguna untuk menjalankan program. Hasil operasi tersebut akan terlihat pada Debug Node, di mana hasilnya mencerminkan nilai suhu, yakni "28".

Dengan demikian, broker MQTT menjadi penghubung yang efisien dalam pertukaran informasi antara penerbit dan pelanggan, sedangkan tombol "Deploy" digunakan untuk mengeksekusi program dan menampilkan hasilnya melalui Debug Node.

![JOB 6 A 3](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/7bee2c5e-68c0-40eb-a31a-aab5a1182a81)

# B. Menerima Data JSON Melalui Protokol MQTT

### a. Langkah Kerja
  1. Buatlah flow program seperti pada Gambar 6.5.
      ![langkah-2](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/be037b6b-6edd-4c5f-b19a-c4162c5590b6)

  2. Flow pada Gambar 6.5 merupakan pengembangan dari Gambar 6.1 dengan
menambahkan JSON Parser dan Parser Function Node.
  3. Setelah flow program dibuat, konfigurasikan Temperature Node seperti
Gambar 6.6.
<img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/d49d2464-04fe-4663-b851-f1d320c41ee9">

  4. Kemudian konfigurasi JSON Parser Node seperti pada Gambar 6.7.
<img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/28260f7f-28f0-496d-8711-0884ad738bdf">

  5. Setelah itu, konfigurasi pula Parser Function Node seperti Gambar 6.8, agar data JSON dapat dipisahkan dan diambil yang diperlukan saja.
<img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/2977bab6-2abd-4bed-98c0-2ae8dd7a2ecd">

  6. Deploy flow program, kemudian dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
Percobaan Menerima Data JSON Melalui Protokol MQTT untuk menentukan cara parsing atau pemrosesan pesan JSON yang diterima. Bagaimana pesan JSON diubah menjadi objek atau data yang dapat digunakan dalam aplikasi atau sistem yang diimplementasikan. `on_connect` digunakan untuk menangani kejadian saat klien berhasil terhubung, sementara `on_message` digunakan untuk mengelola pesan yang diterima dari broker MQTT. Keduanya memungkinkan pengguna untuk menentukan tindakan khusus saat koneksi berhasil atau ketika pesan baru diterima.
Hasil yang ditampilkan adalah nilai dari humi, yaitu "30"



![hasil-2](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/ce02f934-cfe2-4509-967c-7ebfc0868395)
### Tugas

Kembangkan flow program tersebut agar mempunya 2 input (Inject Node). Input pertama seperti contoh, kemudian pisahkan datanya agar bisa tertampil
dalam log yang berbeda. Sementara itu, Input yang lain menggunakan topic
kitchen/sensors, dengan jenis sensor flame : 0 , metane : 0, temp : 24, humi :38. Tampilkan datanya dalam log yang berbeda-beda.

![langkah-2-tugas](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/94e161f9-379a-4322-9bb5-56725231c7f0)

![hasil-2-tugas](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/a65ae6c2-8ce7-4cdd-9596-38945d252070)

Pada bagian ini, ditambahkan sebuah inject node lagi sehingga menjadi 2 buah inject node. Pada inject node pertama masih berisi topic livingroom/sensors. Pada inject node kedua diberikan topic kitchen/sensors dengan jenis sensor flame : 0 , metane : 0, temp : 24, humi :38.
Kedua inject node tersebut akan ditampilkan pada debug node yang berbeda, yaitu inject pertama dengan nilai humi "30" akan ditampilkan pada debug 1, sedangkan inject kedua dengan nilai humi "30" akan ditampilkan pada debug 2.

# C. Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware

### a. Langkah Kerja
  1. Buka browser Google Chrome yang terinstall pada Windows.
  2. Install ekstensi MQTTbox untuk Google Chrome.
  3. Setelah itu, buka MQTTbox, klik Create Clients. Setelah itu, konfigurasikan MQTTbox seperti Gambar 6.9. Sesuiakan IP Address Host dengan IP Address MQTT Server pada VM Ubuntu. Untuk mengetahui alamat IP, pada Terminal, ketikkan perintah ifconfig.
<img width="369" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/6d53e5cc-3ed0-4328-853c-4453f3623f42">

  4. Setelah itu, klik Save. Kemudian konfigurasikan topic, QoS, Payload Type, dan Payload seperti Gambar 6.10.
<img width="274" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/29afb41d-fe8b-402a-bf43-70dad9fe6bb2">

  5. Kemudian, pada terminal Ubuntu, ketikkan perintah sudo ufw allow 1883 untuk membuka port 1883 agar tidak di-block Firewall.
  6. Untuk mencoba publish/mengirim data, klik tombol Publish. Sebelumnya klik tombol Subscribe untuk mengetahui data yang dikirim dapat diterima kembali oleh Clients.
  7. Dokumentasikan hasilnya.


### b. Hasil dan Pembahasan
Pada percobaan ke 3 yaitu percobaan Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware hal pertama yang dilakukan adalah mengkonfigurasi dan mengimplementasi Mqtt pada hardware, kemudian melanjutkan ke mengirim data dummy melalui MQTT, kemudian memulai interaksi dengan topik MQTT dan akan divalidasi sebelum klik tombol "Subscribe"
Selanjutnya Klik tombol “Subscribe” untuk mengetahui data yang dikirim dapat diterima kembali oleh Clients. Kemudian klik tombol Publish. Hasil yang ditampilkan adalah {"temp":26} dari data dummy topic livingroom/sensors.

![hasil-3](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/7954a14e-5d19-408a-8569-70b91b3ae4f0)

### Tugas

Kembangkan flow program yang sudah dibuat agar dapat menerima data berupa String, Bolean dan Number. Kemudian tampilkan data tersebut secara terpisah pada masing-masing log.

![hasil-tugas](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/aebc2501-c5d7-4dbb-a19b-0a9c6ad78cf8)

Pada bagian ini dikembangkan agar dapat menrima data berupa string, boolean, dan number. Ketiga data tersebut akan ditampilkan pada 3 log yang berbeda. Data yang ditampilkan adalah {"temp":26}, Hello World dan 12.
