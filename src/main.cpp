#include "KodeArduino.cpp"

void setup() { pengaturan(); }

void loop() {}

int main(void) {
  init();
  setup();

  while (true) {
    loop();
  }

  return 0;
}