//P10 ESP8266 working code

#include <DMDESP.h>
#include <fonts/ElektronMart6x12.h>
#include <Wire.h>


// SETUP DMD
#define DISPLAYS_WIDE 2  // Column
#define DISPLAYS_HIGH 1  // Row

// Number of P10 Panels used (COLUMN, ROW)
DMDESP Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);

void setup() {
  Serial.begin(9600);  // Start serial communication
  Disp.start();
  Disp.setBrightness(255);
  Disp.setFont(ElektronMart6x12);
}

void loop() {
  Disp.loop();  // Run Disp loop to refresh LED

  TeksJalan(0, 30);  // y position, speed;
}

// SCROLLING TEKS
static char *teks[] = { "SurinLearningLab.com    090-912-7265     BUILD + CODE + CREATE  Learn Coding in English at Surin Learning Lab!" };

void TeksJalan(int y, uint8_t kecepatan) {
  static uint32_t pM;
  static uint32_t x;
  int width = Disp.width();
  int height = Disp.height();

  Disp.setFont(ElektronMart6x12);  //
  int textWidth = Disp.textWidth(teks[0]);

  if ((millis() - pM) > kecepatan) {
    pM = millis();
    if (x < textWidth + width) {
      ++x;
    } else {
      x = 0;
      return;
    }
    Disp.drawText(width - x, (height / 2) - 6, teks[0]);  // Center the text vertically
  }
}
