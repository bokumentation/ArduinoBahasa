#include "ArduinoBahasa.h"

namespace ArduinoBahasa {
void tunda(unsigned long ms) { delay(ms); }
void aturPinMode(uint8_t pin, uint8_t mode) { pinMode(pin, mode); }
void aturDigital(uint8_t pin, uint8_t nilai) { digitalWrite(pin, nilai); }
int bacaDigital(uint8_t pin) { return digitalRead(pin); }
void konfigurasi_program() { /*...*/ }
void ulangi_program() { /*...*/ }
}  // namespace ArduinoBahasa