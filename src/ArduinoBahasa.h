/**
 * @file ArduinoBahasaCore.h
 * @brief Header untuk library wrapper Arduino dalam Bahasa Indonesia.
 *
 * Library ini menyediakan fungsi-fungsi dasar Arduino dengan nama-nama dalam
 * Bahasa Indonesia untuk mempermudah pemrograman bagi penutur Bahasa Indonesia.
 */
#ifndef ARDUINO_BAHASA_H
#define ARDUINO_BAHASA_H

#include <Arduino.h>

namespace ArduinoBahasa {  // Wrap all functions in a namespace

/**
 * @brief Menunda eksekusi program selama waktu tertentu.
 *
 * Fungsi ini membungkus fungsi `delay()` standar Arduino.
 *
 * @param ms Durasi tunda dalam milidetik.
 */
void tunda(unsigned long ms);

/**
 * @brief Mengatur mode pin digital (MASUKAN, KELUARAN, atau
 * MASUKAN_TARIK_ATAS).
 *
 * Fungsi ini membungkus fungsi `pinMode()` standar Arduino
 * dengan nama yang dilokalisasi.
 *
 * @param pin Nomor pin digital yang akan diatur modenya.
 * @param mode Mode yang akan diterapkan pada pin:
 * - `KELUARAN` (Output)
 * - `MASUKAN` (Input)
 * - `MASUKAN_TARIK_ATAS` (Input Pullup)
 */
void aturPinMode(uint8_t pin, uint8_t mode);

/**
 * @brief Menulis nilai HIGH atau LOW ke pin digital.
 *
 * Fungsi ini membungkus fungsi `digitalWrite()` standar Arduino.
 *
 * @param pin Nomor pin digital yang akan diatur nilainya.
 * @param nilai Nilai yang akan ditulis ke pin:
 * - `NYALA` (HIGH)
 * - `MATI` (LOW)
 */
void aturDigital(uint8_t pin, uint8_t nilai);

/**
 * @brief Membaca nilai dari pin digital.
 *
 * Fungsi ini membungkus fungsi `digitalRead()` standar Arduino.
 *
 * @param pin Nomor pin digital yang akan dibaca nilainya.
 * @return Nilai digital yang dibaca (HIGH atau LOW).
 */
int bacaDigital(uint8_t pin);

void aturAnalog(uint8_t pin, uint8_t nilai);
int bacaAnalog(uint8_t pin);
void mulaiSerial(long kecepatan);
int cetakSerial(int nilai);
int cetakSerialln(int nilai);

// Konstant
namespace Konstanta {

/**
 * @brief Mode pin: Pin ini akan bertindak sebagai masukan.
 */
const uint8_t MASUKAN = INPUT;

/**
 * @brief Mode pin: Pin ini akan bertindak sebagai keluaran.
 */
const uint8_t KELUARAN = OUTPUT;

/**
 * @brief Nilai digital: Tinggi (sekitar 5V atau 3.3V, tergantung papan).
 */
const uint8_t NYALA = HIGH;

/**
 * @brief Nilai digital: Rendah (0V).
 */
const uint8_t MATI = LOW;
}  // namespace Konstanta
}  // namespace ArduinoBahasa

#endif