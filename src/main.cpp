#include "KodeArduino.cpp"

void setup() { konfigurasi_program(); }

void loop() {}

int main(void) {
  init();
  setup();

  while (true) {
    loop();
  }

  return 0;
}