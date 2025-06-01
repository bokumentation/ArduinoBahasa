#include "ArduinoBahasa.h"

namespace ArduinoBahasa {
void tunda(unsigned long ms) { delay(ms); }
void aturPinMode(uint8_t pin, uint8_t mode) { pinMode(pin, mode); }
void aturDigital(uint8_t pin, uint8_t nilai) { digitalWrite(pin, nilai); }
int bacaDigital(uint8_t pin) { return digitalRead(pin); }

void aturAnalog(uint8_t pin, uint8_t nilai) { analogWrite(pin, nilai); }
int bacaAnalog(uint8_t pin) { return analogRead(pin); }
void mulaiSerial(long kecepatan) { Serial.begin(kecepatan); }
int cetakSerial(int nilai) { return Serial.print(nilai); }
int cetakSerialln(int nilai) { return Serial.println(nilai); }

}  // namespace ArduinoBahasa