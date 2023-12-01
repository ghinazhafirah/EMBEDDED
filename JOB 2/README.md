# JOBSHEET 2 - PROTOKOL KOMUNIKASI DAN SENSOR

## Abstrak
<p align="justify">Praktikum Protokol Komunikikasi dan Sensor ini bertujuan untuk memperkenalkan mahasiswa pada konsep dasar protokol komunikasi dan penggunaan sensor dengan menggunakan mikrokontroler ESP32. ESP32 merupakan salah satu jenis mikrokontroler yang memiliki kemampuan WiFi dan Bluetooth yang dapat digunakan untuk berbagai proyek Internet of Things (IoT). Praktikum ini akan membahas konsep dasar protokol komunikasi seperti Serial Communication, I2C, SPI, serta penerapannya dalam penggunaan sensor. Pada tahap awal praktikum, mahasiswa akan diperkenalkan dengan ESP32 dan lingkungan pengembangan perangkat lunak (IDE) yang umum digunakan untuk memprogram ESP32, seperti Arduino IDE atau PlatformIO. Setelah memahami dasar-dasar pemrograman ESP32, mahasiswa akan belajar tentang berbagai protokol komunikasi yang umum digunakan dalam mikrokontroler. Setelah memahami konsep dasar komunikasi, mahasiswa akan diperkenalkan dengan penggunaan sensor pada ESP32. Mereka akan belajar tentang berbagai jenis sensor seperti sensor suhu, sensor kelembaban, sensor gerak, atau sensor jarak dan bagaimana mengintegrasikan sensor-sensor tersebut dengan ESP32. Selanjutnya, mahasiswa akan diberikan praktikum untuk mengimplementasikan pengetahuan yang didapat dengan membuat proyek sederhana menggunakan ESP32, seperti membaca data dari sensor suhu dan menampilkan informasi tersebut melalui koneksi serial atau mengirim data sensor ke server menggunakan koneksi WiFi.</p>

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

## A. ESP32 Capacitive Touch Sensor

### Rangkaian
1. LED menyala saat sensor disentuh

    <img src="" width="480px">

   Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/1.%20ESP32%20TOUCH%20TEST/Percobaan1_Step2.ino)

   Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/2.%20LED%20nyala%20ketika%20disentuh%20mati%20ketika%20tidak%20disentuh/percobaan2_step6.ino)
   
3. LED Blink saat sensor disentuh
   
   <img src="" width="480px">

   Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/3.%20LED%20BLINK%20KETIKA%20SENSOR%20DISENTUH/Percobaan2.ino)
   
4. Saat sensor disentuh LED menyala dan serial monitor menampilkan angka yang bertambah

   <img src="" width="480px">

    Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/4.%20sensor%20disentuh%2C%20led%20menyala%2C%20angka%20bertambah/percobaan2_step8.ino)
   
5. LED menyala menjadi running LED saat sensor disentuh
   
   <img src="" width="480px">

   Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/5.%20RUNNING%20LED%20SECARA%20KONTINYU/percobaan2_step9.ino)
   
### Hasil
1. LED menyala saat sensor disentuh

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/5376c9d2-ea28-4341-a9b3-89dacbedb6c4

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/5cec3073-04af-4645-86ce-297e6880a355

2. LED Blink saat sensor disentuh

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/99ed4e1f-4f40-4f05-81ca-35bb43bb238d

3. Saat sensor disentuh LED menyala dan serial monitor menampilkan angka yang bertambah

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/178f4d8a-53b5-41c4-92c2-60ae40fb56b9
 
4. LED menyala menjadi running LED saat sensor disentuh

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/2ae6a7fc-b90f-4b6d-a976-de2e7fa2d598


## B. Mengakses Sensor DHT 11 (Single Wire / BUS)

### Rangkaian
1. Akses Sensor DHT 11 (Single wire/Bus)

   <img src="" width="480px">

   Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/B.%20%20Mengakses%20Sensor%20DHT%2011%20(Single%20Wire%20-%20BUS)/1.%20AKSES%20SENSOR%20DHT%2011/sensor_dht_step3.ino)
   
2. Kontrol Buzzer menggunakan Sensor Suhu

   <img src="" width="480px">

   Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/B.%20%20Mengakses%20Sensor%20DHT%2011%20(Single%20Wire%20-%20BUS)/2.%20KONTROL%20BUZZER%20MENGGUNAKAN%20SENSOR%20SUHU/sensor_dht11_dan_buzzer.ino)

### Hasil
1. Akses Sensor DHT 11 (Single wire/Bus)

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/caeff801-2416-458a-a408-a709d2800a59
   
2. Kontrol Buzzer menggunakan Sensor Suhu

   

## C. Mengakses Sensor RFID (SPI Communication)

### Rangkaian
1. Tag RFID ke RFID Reader

   <img src="" width="480px">

    Script program dapat dilihat [disini](https://github.com/ghinazhafirah/EMBEDDED/blob/main/JOB%202/C.%20%20Mengakses%20Sensor%20RFID%20(SPI%20Communication)/Tag%20RFID%20ke%20RFID%20Reader/percobaan1_step3.ino)
   
2. Tag RFID untuk hak akses

   <img src="" width="480px">

    Script program dapat dilihat [disini](url)

### Hasil
1. Tag RFID ke RFID Reader

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/360ce1d2-648f-447d-be34-1ee27b1af538

2. Tag RFID untuk hak akses

https://github.com/ghinazhafirah/EMBEDDED/assets/151806874/481e38e1-92d4-4846-a6b4-50e91f425b8c
 
