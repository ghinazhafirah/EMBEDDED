# JOBSHEET 5 - PEMROGRAMAN DASAR NODE-RED

## Abstrak
<p align="justify">
  Node-RED adalah platform pemrograman berbasis grafis yang memungkinkan integrasi perangkat keras, API, dan layanan online secara intuitif. Dengan menggunakan editor berbasis browser, pengguna dapat dengan mudah membuat alur program dengan berbagai node yang dapat dihubungkan melalui palet. Salah satu fitur unggulan Node-RED adalah kemampuannya sebagai backend server untuk Internet of Things (IoT). Alat ini menggunakan JavaScript sebagai bahasa pemrogramannya. Setelah diinstal pada perangkat seperti komputer, Raspberry Pi, atau perangkat lainnya, Node-RED menyediakan serangkaian node default dalam delapan kategori utama, termasuk input, output, fungsi, sosial, penyimpanan, analisis, advanced, dan Raspberry Pi.
</p>

<p align="justify">Jobsheet ini bertujuan untuk dapat memahami dasar pemrograman pada Node-Red dan dapat membuat application server sederhana menggunakan Node-Red.</p>

Sub-job pada jobsheet ini, antara lain:
  1. Basic Flow
  2. Menggunakan Function Node
  3. Menggunakan Switch Node
  4. Menggunakan JSON Parsing

## Alat dan Bahan

Alat dan bahan yang digunakan dalam jobsheet ini, antara lain:
  1. Perangkat terpasang Node-Red

# A. Basic Flow

### a. Langkah Kerja
  1. Pastikan perangkat komputer terpasang Node-Red.
  2. Buatlah Basic Flow seperti pada gambar berikut.

     ![langkah-1](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/5c674116-95c6-4c32-951a-c1f6c8c63a68)
     
  3. Double klik pada node input, kemudian konfigurasi seperti pada gambar di bawah.
     
     ![job5](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/97d915bc-e8ab-4588-9c56-c98a07ded963)
     
  4. Lakukan hal yang sama seperti pada langkah 3 untuk node output / debug node seperti gambar berikut.

     ![job5juga](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/cb1b6dcb-5bc6-4fe9-911d-57fbab7876f9)
     
  5. Klik tombol “Deploy” yang terletak pada pojok kanan atas UI untuk menjalankan program.
  6. Dokumentasikan output dari program tersebut.

### b. Hasil dan Pembahasan
Memastikan bahwa Node-RED telah terpasang pada perangkat komputer. Lalu membuat alur dasar dengan mengonfigurasi node input dan node output. Node-input pada Node-RED merupakan komponen awal dalam alur kerja yang menerima data dari sumber tertentu, sementara node-output merupakan elemen akhir yang mengarahkan data ke destinasi atau melakukan tindakan berdasarkan hasil pemrosesan dalam alur kerja tersebut. Selanjutnya mengklik tombol "Deploy" yang terletak di pojok kanan atas antarmuka pengguna untuk menjalankan program yang telah dibuat. Hasil dari operasi ini akan ditampilkan di Debug Node, memberikan pemahaman tentang keluaran atau hasil dari alur kerja yang telah dijalankan.

![JOB 5 A](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/1a0594fd-5b3a-4b42-8595-928503deada9)

# B. Menggunakan Function Node

### a. Langkah Kerja
  1. Buatlah flow fungsi output tunggal seperti pada gambar berikut
     ![job5b](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/7ada2874-b23d-42f8-a2c6-58a117d6f1ae)
  2. Konfigurasikan node Input1. Isikan payload dengan “Hello World”, dan topic berupa “test1”.
  3. Deploy program dan dokumentasikan hasilnya.
  4. Buatlah flow fungsi output berganda yang berfungsi memisahkan pesan seperti gambar di bawah ini.
     ![langkah-2](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/77990891-a4ad-4bd0-bdbc-dc79ad012823)
  5. Konfigurasikan node Input2. Isikan payload dengan “Expeliarmus”, dan topic berupa “test2”.
  6. Konfigurasikan node fungsi seperti gambar berikut ini.

     ![job5bjuga](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/479dc948-0a22-43ce-af94-8f00bb52b988)

  7. Deploy program dan dokumentasikan hasilnya.
### b. Hasil dan Pembahasan
Pada langkah awal function node melibatkan pembuatan alur dengan output fungsi tunggal. Node input1 dikonfigurasi untuk mengirimkan payload "Hello World" dengan topik "test1". Setelah deploy program, hasilnya akan terlihat pada debug, yaitu "Hello World".

![JOB 5 B 1](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/afe01761-696d-43ea-8e7d-66650e577329)

Dilanjutkan dengan membuat alur fungsi output berganda yang berfungsi memisahkan pesan. Node Input2 dikonfigurasi dengan payload "Expeliarmus" dan topik "test2". Function node pada Node-RED memungkinkan penulisan kode JavaScript khusus untuk memproses dan memanipulasi data yang mengalir dalam alur kerja.

Hasil yang dihasilkan oleh function node adalah sebagai berikut:
- Jika msg.topic adalah "test1", maka node output pertama akan menerima [msg, null]. Ini berarti pesan "Hello World" akan dikirim ke output pertama, sementara output kedua akan tetap kosong (null).
- Jika msg.topic adalah "test2", maka node output kedua akan menerima [msg, null]. Ini berarti pesan "Expeliarmus" akan dikirim ke output kedua, sementara output pertama akan tetap kosong (null).

![JOB 5 B 4](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/81649130-35be-401b-970f-d17ede925e27)

# C. Menggunakan Switch Node

### a. Langkah Kerja
  1. Buatlah flow seperti pada gambar berikut
     ![langkah-3](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/ec4262a0-e368-4a1a-9d72-65659b930523)

  2. Konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan angka 30. Kemudian pada Inject Node 2, isikan Payload dengan angka 27.
  3. Konfigurasi Switch Node seperti pada gambar di bawah.
     
     ![job5c](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/ebbf8f0e-ee57-4912-8e61-d3999b69ff6c)
![JOB 5 C](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/8484c65e-c5e6-4e11-8ea4-47dce4ae7a80)

  4. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
Dalam uji coba menggunakan switch node, langkah pertama melibatkan pembuatan alur dan konfigurasi pada Input/Inject Node. Payload pada Inject Node 1 diisi dengan angka 30, sementara pada Inject Node 2 diisi dengan angka 27.

Kemudian switch node dikonfigurasi sesuai dengan petunjuk pada jobsheet. Switch node pada Node-RED berperan sebagai alat untuk memisahkan jalur alur kerja berdasarkan kondisi atau nilai tertentu dalam pesan. Ini memungkinkan untuk mengarahkan pesan ke cabang yang sesuai dengan aturan logika yang ditentukan. Dalam percobaan ini, aturan pada switch node adalah sebagai berikut:
- Input dengan nilai >28 diarahkan ke output pertama, sementara output kedua kosong.
- Input dengan nilai <=28 diarahkan ke output kedua, sementara output pertama kosong.

Sehingga, setelah melakukan deploy, hasil keluaran pada debug node akan mencerminkan pengarahan pesan sesuai dengan kondisi yang telah ditentukan.

![JOB 5 C](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/f7d165c8-7d63-4315-83ca-d742df3f3ffa)

# D. Menggunakan JSON Parsing

### a. Langkah Kerja
  1. Buatlah flow seperti pada gambar di bawah ini.
     
      ![langkah-4](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/c6a727f2-80bf-426c-b1e5-18624bd8f025)

  2. Konfigurasikan Inject Node, JSON Parser Node, dan Function Node seperti gambar berikut ini.

     ![job5d](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/80853a4c-96c6-4d34-886d-a8e6f6ecceff)

  3. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
Pada percobaan kali ini, penggunaan JSON Parsing dimulai dengan membuat alur dan mengonfigurasi Inject Node, JSON Parser Node, dan Function Node. Node JSON Parser pada Node-RED berperan penting dalam mengonversi data JSON yang diterima dalam format string menjadi objek JavaScript. Hal ini memudahkan manipulasi dan ekstraksi informasi dari struktur data JSON dalam alur kerja Node-RED.

Pada tahap percobaan, yang terjadi yaitu:
- Node input menerima pesan dengan properti msg.payload yang berisi data JSON: {"temp":27,"humidity":50}, dan msg.topic dengan nilai /sensor.
- JSON Parser Node berfungsi mengonversi data JSON menjadi objek JavaScript. Dalam konteks ini, properti msg.payload diubah sehingga berisi objek JSON yang dapat diakses oleh node berikutnya.
- Function Node bertugas mengambil nilai suhu (temp) dari objek JSON di dalam msg.payload dan menggantinya sebagai nilai baru untuk msg.payload. Dengan kata lain, hasil akhir pesan adalah msg.payload yang kini hanya berisi nilai suhu (27).

Sehingga, setelah menjalankan alur kerja dan melakukan deploy, hasil keluarannya akan mencerminkan proses tersebut, dan nilai akhir pada msg.payload adalah suhu yang telah diekstraksi, yaitu 27.
![JOB 5 D](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/3e5de5c8-3d89-4a1e-bb3a-fcc61eee0015)

# Tugas

Buatlah arsitektur sistem IoT menggunakan semua fungsi yang ada pada Hands-On. Format data yang dikirim adalah multi-input dengan format data String, Bolean, Number dan JSON (3 data). Setiap input mempunyai ditampilkan dalam Debug Node yang berbeda.

### a. Rangkaian Flow
![langkah-tugas](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/efb05798-7b01-4f97-b66a-bf50170cfbaf)

### b. Konfigurasi Node
  1. Inject Node (Data String)
    
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/1f54c26b-98e3-4d63-9e03-de08bb7193d9)
    
  2. Inject Node (Data Boolean)
     
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/785180a8-d19d-4a8b-a8b7-9f6fb609deaa)

  3. Inject Node (Data Number)
     
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/d6e37e2f-e3f1-434c-9fbf-6dda2d15430d)

  4. Inject Node (Dtaa json)
     
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/ff84f6bf-ccb1-430c-9ae6-6ae4d64e2a31)

  5. Switch Node
      
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/20cd1132-8d8d-4ae5-9e8d-fe6d1dd03d24)

  6. JSON Parser Node
      
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/1cffb795-ce45-4d61-9185-100161968ab5)

  7. Function Node (1, 2, 3)
      
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/bd7649c1-3671-4617-bb51-c84cdf95c74b)
     
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6a88c029-d01d-4300-a92c-0501f0c60653)
     
     ![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/8fe8f92c-791a-4aee-9dad-5c7bf3ec7236)

### c. Hasil
![JOB 5 TUGAS](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/e980d7e6-c73e-4fb7-b47c-53415c2babe4)

