#include "ArduinoBahasa.h"
using namespace ArduinoBahasa;
using namespace ArduinoBahasa::Konstanta;

void konfigurasi_program() {
  // 1. Mengatur MODE pin 13 atau LED_BUILTIN sebagai KELUARAN
  aturPinMode(LED_BUILTIN, KELUARAN);
}

void ulangi_program() {
  // 1. Mengatur pin 13 atau LED_BUILTIN menyala
  aturDigital(LED_BUILTIN, NYALA);
  // 2. Memberikan jeda 1 detik
  tunda(1000);
  // 3. Mengatur pin 13 atau LED_BUILTIN mati
  aturDigital(LED_BUILTIN, MATI);
  // 4. Memberikan jeda 1 detik
  tunda(1000);
}