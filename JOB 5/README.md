# JOBSHEET 5 - PEMROGRAMAN DASAR NODE-RED

## Abstrak
<p align="justify">
Node-RED merupakan alat pemrograman berbasis grafis yang memungkinkan pengguna untuk menyatukan perangkat keras, API, dan layanan online secara intuitif. 
  Dengan menggunakan editor berbasis browser, pengguna dapat dengan mudah membuat flow program dengan berbagai node yang dapat dihubungkan melalui palet. 
  Node-RED memiliki berbagai fitur, salah satunya dapat berfungsi sebagai backend server untuk Internet of Things (IoT). Alat ini menggunakan bahasa pemrograman 
  JavaScript. Setelah terpasang pada perangkat seperti komputer, Raspberry Pi, atau perangkat lainnya, Node-RED menyediakan satu set default node untuk memulai 
  pemrograman, termasuk node dalam delapan kategori utama: input, output, fungsi, sosial, penyimpanan, analisis, advanced, dan Raspberry Pi.
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
Basic flow dimulai dengan memastikan perangkat komputer terpasang node-red kemudian membuat basic flow dan mengonfigurasi node input dan node output.
Node-input pada Node-RED adalah elemen awal dalam alur kerja yang menerima data dari sumber tertentu, sedangkan node-output adalah elemen akhir yang 
mengarahkan data ke destinasi atau tindakan sesuai dengan hasil pemrosesan dalam alur kerja tersebut.
Selanjutnya Klik tombol “Deploy” yang terletak pada pojok kanan atas UI untuk menjalankan program. 
Hasil dari operasi tersebut akan ditampilkan di Debug Node.

![hasil-1](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/5a6b0faf-fd91-4e76-8e08-c3af1fdea6e3)

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
     
  8. Deploy program dan dokumentasikan hasilnya.
### b. Hasil dan Pembahasan
Pada percobaan pertama, function node dimulai dengan membuat flow fungsi output tunggal dan menkonfigurasi node input1 lalu mengisi payload dengan ”Hello World” dan topik berupa ”test1”. Deploy program dan hasil akan muncul pada debug, yaitu "Hello World"

![hasil-2-1](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/c0c74118-8f01-4281-9c20-9c1ebb244c6f)


Kemudian dilanjutkan dengan membuat flow fungsi output berganda yang berfungsi memisahkan pesan lalu konfigurasikan node Input2. Isikan payload dengan “Expeliarmus”, dan topic berupa “test2”. 
Function node pada Node-RED adalah elemen yang memungkinkan penulisan kode JavaScript khusus untuk memproses dan memanipulasi data yang mengalir melalui alur kerja. Dengan function node, hasil yang muncul adalah
- Jika msg.topic adalah "test1", maka node output pertama akan menerima [msg, null], yang berarti pesan "Hello World" akan dikirim ke output pertama, sedangkan output kedua akan tetap kosong (null).
- Jika msg.topic adalah "test2", maka node output kedua akan menerima [msg, null], yang berarti pesan "Expeliarmus" akan dikirim ke output kedua, sedangkan output pertama akan tetap kosong (null).

![hasil-2-2](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/d1073605-391d-4f6e-a007-8dea1b14c577)

# C. Menggunakan Switch Node

### a. Langkah Kerja
  1. Buatlah flow seperti pada gambar berikut
     ![langkah-3](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/ec4262a0-e368-4a1a-9d72-65659b930523)

  2. Konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan angka 30. Kemudian pada Inject Node 2, isikan Payload dengan angka 27.
  3. Konfigurasi Switch Node seperti pada gambar di bawah.
     
     ![job5c](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/ebbf8f0e-ee57-4912-8e61-d3999b69ff6c)

  4. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
Pada percobaan menggunakan switch node dimulai dengan membuat flow dan konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan angka 30. Kemudian pada Inject Node 2, isikan Payload dengan angka 27.
Kemudian mengkonfigurasi switch node seperti pada jobsheet. Switch Node pada Node-RED berfungsi sebagai alat untuk memisahkan jalur alur kerja berdasarkan kondisi atau nilai tertentu dalam pesan, memungkinkan kita untuk 
mengarahkan pesan ke cabang yang sesuai dengan aturan logika yang ditentukan. Pada percobaan ini, yang terjadi pada switch node adalah:
- input dengan nilai >28 diarahkan ke output pertama, sedangkan output kedua kosong
- input dengan nilai <=28 diarahkan ke output kedua, sedangkan output pertama kosong

Sehingga hasil keluaran pada debug node setelah deploy adalah seperti berikut

![hasil-3](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/0df147e7-577a-4cf5-a49d-65aa5d151437)
# D. Menggunakan JSON Parsing

### a. Langkah Kerja
  1. Buatlah flow seperti pada gambar di bawah ini.
     
      ![langkah-4](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/c6a727f2-80bf-426c-b1e5-18624bd8f025)

  2. Konfigurasikan Inject Node, JSON Parser Node, dan Function Node seperti gambar berikut ini.

     ![job5d](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/80853a4c-96c6-4d34-886d-a8e6f6ecceff)

  3. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
Pada percobaan ini, menggunakan JSON Parsing dimulai dengan membuat flow dan mengkonfigurasi inject node, JSON Parser Node, dan Function Node. 
Node JSON Parser pada Node-RED digunakan untuk mengonversi data JSON yang diterima dalam format string menjadi objek JavaScript yang dapat diproses lebih lanjut 
dalam alur kerja, menyederhanakan manipulasi dan ekstraksi informasi dari struktur data JSON. Node ini memfasilitasi pengolahan data JSON dengan cara yang lebih mudah dan terintegrasi dalam alur kerja Node-RED.

Pada percobaan ini, yang terjadi adalah
- Node input menerima pesan (message) dengan properti msg.payload yang berisi data JSON: {"temp":27,"humidity":50} dan msg.topic dengan nilai /sensor.
- JSON Parser Node mengonversi data JSON menjadi objek JavaScript. Dalam hal ini, properti msg.payload diatur ulang sehingga berisi objek JSON yang sekarang dapat diakses oleh node berikutnya.
- Function Node mengambil nilai suhu (temp) dari objek JSON yang ada di dalam msg.payload dan menggantinya sebagai nilai baru untuk msg.payload. Dengan kata lain, hasil akhir pesan adalah msg.payload yang sekarang hanya berisi nilai suhu (27).

Sehingga, hasil keluarannya adalah seperti berikut

![hasil-4](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/6f4fbd35-96a2-4f0d-84c1-6b1b0a484a1c)
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
![hasil-tugas](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/c03aab51-4320-4046-9073-246ca8d3b00a)

