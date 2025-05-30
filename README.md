# Library Wrapper Arduino.h Berbahasa Indonesia

## On Progress .. 

## Struktur Proyek
```
ArduinoAVR/
├── CMakeLists.txt              # File konfigurasi utama CMake
├── src/                        # Sumber kode utama proyek
│   ├── main.cpp                # File utama aplikasi (misalnya, loop() dan setup())
│   ├── ArduinoBahasa.h         # Header untuk pustaka kustom Anda
│   └── ArduinoBahasa.cpp       # Implementasi pustaka kustom Anda
├── examples/                   # Contoh penggunaan pustaka atau fitur
│   └── KodeArduino.cpp         # Contoh kode spesifik untuk Arduino
└── build/                      # Direktori untuk file build (dibuat oleh CMake, biasanya kosong awalnya)

```

## Cara build menggunakan CMake:
### Bahan:
- **CMake**: (versi 3.12 atau lebih tinggi)
- **Arduino IDE** (untuk mendapatkan file core AVR dan toolchain avr-gcc, avr-objcopy, dll.)
- Path Variable **ARDUINO_AVR_PATH**
  ```BASH
  set ARDUINO_AVR_PATH="C:\Program Files (x86)\Arduino"
  ```
