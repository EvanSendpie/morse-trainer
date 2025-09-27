# Push Button + Buzzer + LED (Arduino)

Proyek ini adalah rangkaian sederhana menggunakan **Arduino** untuk menyalakan **buzzer** dan **LED** saat tombol ditekan.  
Menggunakan fitur **internal pull-up resistor** dari Arduino sehingga rangkaian menjadi lebih sederhana tanpa resistor eksternal untuk tombol.

---

## Komponen yang Dibutuhkan
- 1x Arduino Uno / Nano
- 1x Push Button (4 kaki)
- 1x Buzzer (aktif)
- 1x LED
- 1x Resistor 220Ω (untuk LED)
- Beberapa kabel jumper
- Breadboard

---

## Rangkaian
- **Push Button:**  
  - Satu kaki → Pin `D2`  
  - Kaki pasangan lainnya → `GND`  

- **Buzzer:**  
  - Kaki + → Pin `D8`  
  - Kaki – → `GND`

- **LED:**  
  - Kaki panjang (+) → Pin `D10`  
  - Kaki pendek (–) → Resistor 220Ω → `GND`

**Notes:**  
Pastikan tombol 4 kaki dipasang melintang di celah tengah breadboard agar tidak selalu terhubung.

---
