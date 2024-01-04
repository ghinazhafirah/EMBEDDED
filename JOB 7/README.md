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

![JOB 7 A BAGIAN 1](https://github.com/fikarock/Laporan_Embedded/assets/110397697/b30ccf94-7ed8-49ec-8a3b-7fbb4be50fa4)

![JOB 7 A BAGIAN 2](https://github.com/fikarock/Laporan_Embedded/assets/110397697/63334199-9aa3-473d-8d8f-2b9d46856806)

![JOB 7 A BAGIAN 3](https://github.com/fikarock/Laporan_Embedded/assets/110397697/5e340b7a-30cc-4dbc-9827-a22338f9da23)

Dalam percobaan ini, kami melakukan pemasangan SQL Server menggunakan terminal pada sistem operasi Ubuntu. MySQL, sebagai sistem manajemen basis data relasional (RDBMS), menyimpan data dalam tabel yang terstruktur berdasarkan hubungan. Dengan mengikuti model relasional, konsep tabel, baris, dan kolom digunakan untuk mengorganisir data. Hasil dari proses ini adalah pembentukan tabel dalam basis data yang memuat parameter monitoring seperti waktu, suhu, kelembaban, dan lain-lain.
