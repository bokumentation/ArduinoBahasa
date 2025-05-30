#include "ArduinoBahasa.h"
using namespace ArduinoBahasa;
using namespace ArduinoBahasa::Konstanta;

void konfigurasi_program() {
  aturPinMode(13, KELUARAN);
  aturPinMode(8, MASUKAN);
}

void ulangi_program() {
  aturDigital(13, NYALA);
  tunda(1000);
  aturDigital(13, MATI);
  tunda(1000);
}