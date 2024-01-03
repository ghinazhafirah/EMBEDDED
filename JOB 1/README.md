# JOBSHEET 1 - DASAR PEMROGRAMAN ESP32 UNTUK PEMROSESAN DATA INPUT/OUTPUT ANALOG DAN DIGITAL

## Abstrak
<p align="justify">Jobsheet ini bertujuan untuk memahami bagaimana cara mengoperasikan GPIO pada ESP32, memahami dan melakukan pengolahan data untuk input/output analog dan digital, dan melakukan optimalisasi pembacaan sensor analog menggunakan metode regresi linear.</p>

**Sub-job** pada jobsheet ini, antara lain:
1. GPIO
2. PWM
3. ADC dan DAC
4. Regresi Linier

## Alat dan Bahan
**Alat dan bahan** yang digunakan dalam jobsheet ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm (1)
5) LED (5) dan Push Button (3)
6) Resistor 330,1K, 10K Ohm (@3)
7) Sensor Capacitive Soil Moisture
8) Three-Way Meter

## Instalasi

1. Susun komponen sesuai dengan rangkaian
2. Buka Arduino IDE dan instal ESP32
    - Masuk ke **Preferences**
    - Isikan board url dengan link : https://dl.espressif.com/dl/package_esp32_index.json dan simpan
    - Buka **Tools** > **Board** > **Boards Manager**
    - Cari ESP32, by Espressif. Kemudian instal
    - Pilih flash mode DIO/QIU menyesuaikan
3. Jalankan program .ino
4. Jika terdapat error saat uploading, tekan dan tahan tombol _Boot_ pada ESP32 saat upload, hingga _Connecting_ selesai

## Project 1 - GPIO

### Rangkaian

1. Led menyala saat button ditekan

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/fbcfd1fc-ed43-40e2-b5b3-836685f54b66" width="480px">

2. Led menyala dan _blink_ saat button ditekan

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/64456b45-3d2a-4fa7-ac9f-d6d55e8c27ca" width="480px">

3. Led menyala, _blink_, dan berjalan saat button ditekan

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/991c3846-6606-4b5b-bba4-f014b7da6a0f" width="480px">

### Hasil

1. Led menyala saat button ditekan

https://github.com/JeffriPS/Embedded/assets/94127988/5ad67d0c-3b53-4e1f-9226-77f8c7b0fe47

2. Led menyala dan _blink_ saat button ditekan

https://github.com/JeffriPS/Embedded/assets/94127988/9a5401ee-c8fb-49f8-8fca-d3abc94fadcf

3. Led menyala, _blink_, dan berjalan saat button ditekan

https://github.com/JeffriPS/Embedded/assets/94127988/abaaff78-c4e1-4227-aa7b-359e8c38c276

## Project 2 - PWM

### Rangkaian

1. Satu LED _breathing_

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/12ebe147-2802-4d9d-b5fa-376b1d30901e" width="480px">

2. Tiga LED _breathing_

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/b4e3a5e1-f575-43a1-b8c2-e9e756b8b247" width="480px">

### Hasil

1. Satu LED _breathing_

https://github.com/JeffriPS/Embedded/assets/94127988/4f8e8415-2d07-47a2-bbcf-1e0e4c5081ce

2. Tiga LED _breathing_

https://github.com/JeffriPS/Embedded/assets/94127988/068ce46c-5de8-4f4f-b119-6c39fb59d1c4

## Project 3 - ADC

### Rangkaian

1. Keluaran potensio pada serial monitor

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/5e6df142-ced5-4620-ac4a-987d972b485f" width="480px">

2. Potensio terhadap cahaya LED

<img src="https://github.com/JeffriPS/Embedded/assets/94127988/63a0a5fc-4518-4a25-87ba-a2ff954d04c4" width="480px">

### Hasil

1. Keluaran potensio pada serial monitor

https://github.com/JeffriPS/Embedded/assets/94127988/877b44a9-766a-430d-b54a-5d09f6f830bd

2. Potensio terhadap cahaya LED

https://github.com/JeffriPS/Embedded/assets/94127988/298065dd-e981-4a54-bf4f-44efd82d1169

## Project 4 - Agresi Linier

### Hasil

https://github.com/JeffriPS/Embedded/assets/94127988/0af1a624-7cac-48e7-8073-87121965496b
