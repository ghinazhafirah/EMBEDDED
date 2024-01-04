# JOBSHEET 7 - TRANSMISI DATA MENGGUNAKAN HYPER TEXT TRANSFER PROTOCOL (HTTP)

## Abstrak
<p align="justify">Protokol Transfer Hiperteks (HTTP) merupakan suatu protokol jaringan pada lapisan aplikasi yang digunakan untuk sistem informasi terdistribusi, kolaboratif, dan menggunakan hipermedia. Protokol ini pertama kali diperkenalkan pada tahun 1990 oleh Tim Berners-Lee dalam pembentukan World Wide Web. HTTP memiliki dua versi utama, yakni HTTP/1.0 dan HTTP/1.1. Versi HTTP/1.0 menggunakan koneksi terpisah untuk setiap dokumen, sedangkan HTTP/1.1 memungkinkan penggunaan koneksi yang sama untuk transaksi, meningkatkan efisiensi dengan menghindari pembuatan koneksi berulang-ulang.</p>

<p align="justify">Pengembangan standar HTTP melibatkan Konsorsium World Wide Web (W3C) dan Internet Engineering Task Force (IETF). Pada Juni 1999, RFC 2616 diterbitkan untuk mendefinisikan HTTP/1.1. HTTP berperan sebagai protokol permintaan dan jawaban antara klien, seperti web browser, dan server, dengan klien yang dikenal sebagai agen pengguna. Tujuan dari jobsheet ini adalah untuk memahami alur kerja, kegunaan, serta manfaat protokol HTTP. Selain itu, jobsheet ini bertujuan untuk memahami dan mengimplementasikan protokol HTTP pada sistem IoT guna keperluan monitoring dan kendali.
</p>

**Sub-job** pada jobsheet ini, antara lain:
1. Instalasi SQL
2. Basic Flow Transmisi HTTP
3. Mengirim Data JSON ke Server dan Menyimpannya ke Database

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1) Komputer terpasang Node Red
2) Postman

# A. Instalasi SQL Server (MySQL)

## Hasil dan Pembahasan 

![JOB 7 A BAGIAN 1](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/85c55ae6-6b8a-4d46-a53f-b901670ff365)

![JOB 7 A BAGIAN 2](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/45a2a2b6-1e70-4f70-a4de-b29287fa7b34)

![JOB 7 A BAGIAN 3](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/572d630a-bfd4-4a35-ba64-ff576f87ba32)

Dalam percobaan ini, kami melakukan pemasangan SQL Server menggunakan terminal pada sistem operasi Ubuntu. MySQL, sebagai sistem manajemen basis data relasional (RDBMS), menyimpan data dalam tabel yang terstruktur berdasarkan hubungan. Dengan mengikuti model relasional, konsep tabel, baris, dan kolom digunakan untuk mengorganisir data. Hasil dari proses ini adalah pembentukan tabel dalam basis data yang memuat parameter monitoring seperti waktu, suhu, kelembaban, dan lain-lain.

# B. Basic Flow Transmisi Data Menggunakan Protokol HTTP 

## 1. Keterangan Singkat (Abstrak)
<p align="justify">Dalam percobaan ini, Basic Flow atau alur dasar transmisi data melibatkan serangkaian langkah yang terjadi ketika klien dan server berinteraksi menggunakan protokol Hypertext Transfer Protocol (HTTP). Langkah-langkah ini merinci proses komunikasi antara klien dan server saat mereka mentransfer data melalui protokol HTTP.

## 2. Alat dan Bahan
1. Node Red
2. Postman
   
## 3. Hasil Percobaan

1. Hasil Basic flow transmisi data menggunakan protokol HTTP
![JOB 7 B 2](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/9f12657d-c9af-4129-bd26-42d9fdd99e6f)

2. Hasil Flow program transmisi data pada protokol HTTP dengan respons OK
![JOB 7 B 9](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/6432365a-c557-4449-83a7-892c2bb0946e)

3. Hasil Flow program transmisi data pada protokol HTTP dengan respons BAD
![JOB 7 ERROR](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/52fcbc41-0613-4715-a222-1acd2f440fff)

4. Hasil Flow program untuk parsing data JSON
![JOB 7 B 6](https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/222aa8ae-1a65-4462-a9ec-d19640e83ad8)

