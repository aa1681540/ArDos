// файл gif.c
// должен находиться в папке со скетчем

#include <avr/pgmspace.h>
#ifndef fontdatatype
#define fontdatatype const uint8_t
#endif
const unsigned char PROGMEM gif_chast_1[] =
{ 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00};

const unsigned char PROGMEM gif_chast_2[] =
{ 0x3C, 0x7E, 0xC3, 0xC3, 0xC3, 0xC3, 0x7E, 0x3C};

const unsigned char PROGMEM logo_bat[] =
{ 0x00, 0x00, 0x1C, 0x7F, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x7F};
  
const unsigned char PROGMEM  logo_tr[] =
{ 0x0C, 0x12, 0x21, 0x0C, 0x00, 0x10, 0x28, 0x26, 0x61, 0x61, 0x26, 0x28,
  0x10, 0x00, 0x0C, 0x21, 0x12, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char PROGMEM logo_rag[] =
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xF8, 0xF8,
  0xF8, 0xF8, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8,
  0xF8, 0xF8, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0x98, 0x18,
  0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFE, 0xFF, 0xFF, 0x9F, 0x81,
  0x81, 0x81, 0x9F, 0xFF, 0xFF, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFC, 0x1E, 0x0F, 0x0F, 0x0F, 0x06, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xCF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0xFC, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x36,
  0x78, 0x78, 0x78, 0x36, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0xFF, 0xFC,
  0x00, 0xFC, 0xFE, 0xFF, 0xEF, 0xC7, 0xC7, 0x8F, 0x0F, 0x0E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xC0, 0xFC, 0xFF, 0xFF, 0xFF, 0x1F, 0x07, 0x07, 0x07,
  0x07, 0x07, 0x07, 0x07, 0x3F, 0xFF, 0xFF, 0xFF, 0xF8, 0xC0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x7E, 0x7F, 0x3F, 0x3F,
  0x0F, 0x07, 0x00, 0x01, 0x0F, 0x1E, 0x38, 0x70, 0x60, 0xF0, 0xFE, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0x60, 0x70, 0x38, 0x1F, 0x07, 0x01,
  0x00, 0x79, 0xF9, 0xF1, 0xF3, 0xF7, 0xFF, 0xFF, 0x7F, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,
  0x00, 0x7C, 0x24, 0x24, 0x24, 0x18, 0x00, 0x60, 0x3C, 0x24, 0x3C, 0x60,
  0x00, 0x0C, 0x50, 0x50, 0x50, 0x3C, 0x00, 0x7C, 0x20, 0x10, 0x08, 0x7C,
  0x00, 0x7C, 0x10, 0x10, 0x10, 0x7C, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38,
  0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x60, 0x3E, 0x23, 0x3F, 0x60, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38,
  0x00, 0x28, 0x44, 0x54, 0x54, 0x28, 0x00, 0x7C, 0x20, 0x10, 0x08, 0x7C,
  0x00, 0x7C, 0x08, 0x10, 0x08, 0x7C, 0x00, 0x38, 0x54, 0x54, 0x54, 0x18,
  0x00, 0x04, 0x04, 0x7C, 0x04, 0x04, 0x00, 0x7C, 0x24, 0x24, 0x24, 0x18,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,
  0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00,
  0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00, 0x01, 0x71, 0x09, 0x05, 0x03};


// заставка БЕТА режима первая
const unsigned char PROGMEM beta_prev_1[] =
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x05,
  0x02, 0x00, 0x1F, 0x15, 0x11, 0x00, 0x1B, 0x1F, 0x1B, 0x00, 0x1F, 0x0C,
  0x1F, 0x00, 0x1F, 0x07, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x05,
  0x02, 0x00, 0x1E, 0x05, 0x1E, 0x00, 0x11, 0x15, 0x0A, 0x00, 0x1F, 0x04,
  0x1F, 0x00, 0x0E, 0x11, 0x0E, 0x00, 0x0E, 0x11, 0x0A, 0x00, 0x01, 0x1F,
  0x01, 0x00, 0x1F, 0x04, 0x1F, 0x00, 0x0E, 0x11, 0x0E, 0x00, 0x1F, 0x01,
  0x01, 0x00, 0x0E, 0x11, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x15, 0x0A, 0x00,
  0x1E, 0x05, 0x1E, 0x00, 0x1F, 0x07, 0x1F, 0x00, 0x1F, 0x15, 0x11, 0x00,
  0x1F, 0x05, 0x02, 0x00, 0x1E, 0x05, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x71, 0x41,
  0xF1, 0x01, 0xE1, 0x11, 0xA1, 0x01, 0x11, 0xF1, 0x11, 0x01, 0xE1, 0x51,
  0xE1, 0x01, 0xF1, 0x41, 0xF1, 0x01, 0xE1, 0x11, 0xE1, 0x01, 0xF1, 0x51,
  0xA1, 0x01, 0xF1, 0xC1, 0xF1, 0x01, 0x11, 0xF1, 0x11, 0x01, 0xF1, 0x51,
  0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0xF1, 0x11, 0xF1, 0x01, 0xF1, 0x51,
  0x21, 0x01, 0xF1, 0xC1, 0xF1, 0x01, 0xF1, 0x51, 0x91, 0x01, 0xE1, 0x11,
  0xE1, 0x01, 0xF1, 0x51, 0x21, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x40, 0xF1, 0x01,
  0xE0, 0x50, 0xE0, 0x01, 0x00, 0x00, 0xF0, 0x11, 0xF0, 0x00, 0x71, 0x40,
  0xF1, 0x00, 0xE1, 0x10, 0xA1, 0x00, 0x10, 0xF1, 0x10, 0x00, 0x71, 0x41,
  0xF0, 0x00, 0xF1, 0xE0, 0x11, 0xE0, 0x00, 0x01, 0x00, 0xF0, 0x41, 0x91,
  0x01, 0xF0, 0xE0, 0x10, 0xE0, 0x00, 0xF1, 0x50, 0xA1, 0x00, 0xF1, 0x50,
  0x10, 0x00, 0x11, 0xF0, 0x11, 0x00, 0x71, 0x41, 0xF0, 0x00, 0x00, 0x01,
  0xF0, 0xC0, 0xF1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
  0x01, 0xF0, 0x81, 0x80, 0x80, 0xF0, 0x01, 0xC0, 0x21, 0x10, 0x21, 0xC1,
  0x00, 0x70, 0x80, 0xE1, 0x80, 0x70, 0x00, 0xF1, 0x20, 0xC0, 0x21, 0xF1,
  0x00, 0xF0, 0x01, 0x80, 0x61, 0xF0, 0x00, 0x10, 0x10, 0xF1, 0x10, 0x11,
  0x00, 0xF1, 0x90, 0x91, 0x90, 0x10, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
  0x01, 0xE0, 0x10, 0x11, 0x10, 0xE0, 0x01, 0xF1, 0x80, 0x40, 0x20, 0x10,
  0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x01, 0x01, 0x01, 0x07,
  0x00, 0x07, 0x00, 0x03, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
  0x00, 0x07, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
  0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x04, 0x04, 0x04, 0x03, 0x00, 0x07, 0x00, 0x01, 0x02, 0x04,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  
// заставка БЕТА режима вторая
const unsigned char PROGMEM beta_prev_2[] =

  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x15, 0x0A, 0x00, 0x1E, 0x05, 0x1E, 0x00,
  0x1F, 0x07, 0x1F, 0x00, 0x1F, 0x15, 0x11, 0x00, 0x1F, 0x05, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0E, 0x11, 0x0E, 0x00, 0x1F, 0x15, 0x1D, 0x00,
  0x1F, 0x05, 0x02, 0x00, 0x1E, 0x05, 0x1E, 0x00, 0x11, 0x15, 0x0A, 0x00,
  0x1F, 0x10, 0x1F, 0x30, 0x1E, 0x05, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x51,
  0xA1, 0x01, 0xE1, 0x51, 0xE1, 0x01, 0xF1, 0x11, 0xF1, 0x01, 0xE1, 0x11,
  0xE1, 0x01, 0xE1, 0x11, 0xF1, 0x01, 0xF1, 0x41, 0xF1, 0x01, 0xF1, 0xC1,
  0xF1, 0x01, 0x11, 0xF1, 0x11, 0x01, 0xF1, 0x51, 0x11, 0x01, 0x01, 0x01,
  0x01, 0x01, 0xF1, 0x41, 0x91, 0x01, 0xF1, 0xE1, 0x11, 0xE1, 0x01, 0xF1,
  0x51, 0xA1, 0x01, 0xF1, 0x51, 0x11, 0x01, 0x11, 0xF1, 0x11, 0x01, 0x71,
  0x41, 0xF1, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
  0x00, 0x00, 0xF0, 0xC0, 0xF0, 0x00, 0x10, 0x50, 0xA0, 0x00, 0xF1, 0x71,
  0xF0, 0x00, 0xF1, 0x50, 0x11, 0x00, 0xF1, 0x50, 0x21, 0x00, 0xA0, 0x51,
  0xF0, 0x00, 0xF1, 0x50, 0x11, 0x00, 0xF1, 0x70, 0xF1, 0x00, 0xF1, 0x40,
  0x81, 0xF0, 0x00, 0xF1, 0x70, 0xF0, 0x01, 0x01, 0x01, 0x00, 0xF0, 0x50,
  0xA0, 0x00, 0xF1, 0x50, 0x11, 0x00, 0xF1, 0xC0, 0xF1, 0x00, 0xF0, 0x51,
  0x11, 0x00, 0xE0, 0x11, 0xA1, 0x01, 0x10, 0xF0, 0x11, 0x00, 0xF0, 0x51,
  0xA1, 0x00, 0xE0, 0x10, 0xE0, 0x00, 0xF0, 0x70, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x71, 0x41, 0xF0, 0x00, 0xE1, 0x10,
  0xA1, 0x00, 0x11, 0xF1, 0x11, 0x00, 0xE1, 0x50, 0xE0, 0x00, 0xF1, 0x40,
  0xF1, 0x00, 0xE1, 0x11, 0xE1, 0x00, 0xF1, 0x50, 0xA1, 0x00, 0xF1, 0xC1,
  0xF0, 0x01, 0x10, 0xF1, 0x10, 0x01, 0xF0, 0x50, 0x10, 0x00, 0x01, 0x01,
  0x00, 0x00, 0xF1, 0x11, 0xF1, 0x00, 0xF1, 0x51, 0x23, 0x00, 0xF1, 0xC1,
  0xF1, 0x00, 0xF0, 0x51, 0xD0, 0x00, 0xE0, 0x11, 0xE0, 0x00, 0xF1, 0x51,
  0x20, 0x00, 0x00, 0x01, 0x00, 0x00, 0xF1, 0xC0, 0xF1, 0x00, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
  0x00, 0xF0, 0x80, 0x81, 0x80, 0xF0, 0x01, 0xC0, 0x21, 0x10, 0x21, 0xC0,
  0x01, 0x70, 0x80, 0xE1, 0x80, 0x70, 0x01, 0xF1, 0x20, 0xC0, 0x21, 0xF0,
  0x01, 0xF0, 0x00, 0x81, 0x60, 0xF0, 0x01, 0x11, 0x11, 0xF0, 0x10, 0x10,
  0x00, 0xF0, 0x91, 0x90, 0x91, 0x10, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
  0x01, 0xE0, 0x11, 0x11, 0x11, 0xE0, 0x00, 0xF1, 0x80, 0x40, 0x21, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x01, 0x01, 0x01, 0x07,
  0x00, 0x07, 0x00, 0x03, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
  0x00, 0x07, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
  0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x04, 0x04, 0x04, 0x03, 0x00, 0x07, 0x00, 0x01, 0x02, 0x04,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};


//----------------------------------------------------------------------
// Секция шрифтов


// Font size    : 6x8 pixels
fontdatatype SmallFontRus[] PROGMEM={
0x06,0x08,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x2F,0x00,0x00,  // !
0x00,0x00,0x07,0x00,0x07,0x00,  // "
0x00,0x14,0x7F,0x14,0x7F,0x14,  // #
0x00,0x24,0x2A,0x7F,0x2A,0x12,  // $
0x00,0x23,0x13,0x08,0x64,0x62,  // %
0x00,0x36,0x49,0x55,0x22,0x50,  // &
0x00,0x00,0x05,0x03,0x00,0x00,  // '
0x00,0x00,0x1C,0x22,0x41,0x00,  // (
0x00,0x00,0x41,0x22,0x1C,0x00,  // )
0x00,0x14,0x08,0x3E,0x08,0x14,  // *
0x00,0x08,0x08,0x3E,0x08,0x08,  // +
0x00,0x00,0x00,0xA0,0x60,0x00,  // ,
0x00,0x08,0x08,0x08,0x08,0x08,  // -
0x00,0x00,0x60,0x60,0x00,0x00,  // .
0x00,0x20,0x10,0x08,0x04,0x02,  // /

0x00,0x3E,0x51,0x49,0x45,0x3E,  // 0
0x00,0x00,0x42,0x7F,0x40,0x00,  // 1
0x00,0x42,0x61,0x51,0x49,0x46,  // 2
0x00,0x21,0x41,0x45,0x4B,0x31,  // 3
0x00,0x18,0x14,0x12,0x7F,0x10,  // 4
0x00,0x27,0x45,0x45,0x45,0x39,  // 5
0x00,0x3C,0x4A,0x49,0x49,0x30,  // 6
0x00,0x01,0x71,0x09,0x05,0x03,  // 7
0x00,0x36,0x49,0x49,0x49,0x36,  // 8
0x00,0x06,0x49,0x49,0x29,0x1E,  // 9
0x00,0x00,0x36,0x36,0x00,0x00,  // :
0x00,0x00,0x56,0x36,0x00,0x00,  // ;
0x00,0x08,0x14,0x22,0x41,0x00,  // <
0x00,0x14,0x14,0x14,0x14,0x14,  // =
0x00,0x00,0x41,0x22,0x14,0x08,  // >
0x00,0x02,0x01,0x51,0x09,0x06,  // ?

0x00,0x32,0x49,0x59,0x51,0x3E,  // @
0x00,0x7C,0x12,0x11,0x12,0x7C,  // A
0x00,0x7F,0x49,0x49,0x49,0x36,  // B
0x00,0x3E,0x41,0x41,0x41,0x22,  // C
0x00,0x7F,0x41,0x41,0x22,0x1C,  // D
0x00,0x7F,0x49,0x49,0x49,0x41,  // E
0x00,0x7F,0x09,0x09,0x09,0x01,  // F
0x00,0x3E,0x41,0x49,0x49,0x7A,  // G
0x00,0x7F,0x08,0x08,0x08,0x7F,  // H
0x00,0x00,0x41,0x7F,0x41,0x00,  // I
0x00,0x20,0x40,0x41,0x3F,0x01,  // J
0x00,0x7F,0x08,0x14,0x22,0x41,  // K
0x00,0x7F,0x40,0x40,0x40,0x40,  // L
0x00,0x7F,0x02,0x0C,0x02,0x7F,  // M
0x00,0x7F,0x04,0x08,0x10,0x7F,  // N
0x00,0x3E,0x41,0x41,0x41,0x3E,  // O

0x00,0x7F,0x09,0x09,0x09,0x06,  // P
0x00,0x3E,0x41,0x51,0x21,0x5E,  // Q
0x00,0x7F,0x09,0x19,0x29,0x46,  // R
0x00,0x46,0x49,0x49,0x49,0x31,  // S
0x00,0x01,0x01,0x7F,0x01,0x01,  // T
0x00,0x3F,0x40,0x40,0x40,0x3F,  // U
0x00,0x1F,0x20,0x40,0x20,0x1F,  // V
0x00,0x3F,0x40,0x38,0x40,0x3F,  // W
0x00,0x63,0x14,0x08,0x14,0x63,  // X
0x00,0x07,0x08,0x70,0x08,0x07,  // Y
0x00,0x61,0x51,0x49,0x45,0x43,  // Z
0x00,0x00,0x7F,0x41,0x41,0x00,  // [
0xAA,0x55,0xAA,0x55,0xAA,0x55,  // <backslash>
0x00,0x00,0x41,0x41,0x7F,0x00,  // ]
0x00,0x04,0x02,0x01,0x02,0x04,  // ^
0x00,0x40,0x40,0x40,0x40,0x40,  // _

0x00,0x00,0x03,0x05,0x00,0x00,  // `
0x00,0x7C,0x12,0x11,0x12,0x7C,  // a
0x00,0x7F,0x49,0x49,0x49,0x36,  // b
0x00,0x7F,0x49,0x49,0x49,0x36,  // c
0x00,0x7F,0x01,0x01,0x01,0x01,  // d
0x00,0x60,0x3E,0x23,0x3F,0x60,  // e
0x00,0x7F,0x49,0x49,0x49,0x41,  // f
0x00,0x77,0x08,0x3E,0x08,0x77,  // g
0x00,0x22,0x49,0x49,0x5D,0x36,  // h
0x00,0x00,0x44,0x7D,0x40,0x00,  // i
0x00,0x40,0x80,0x84,0x7D,0x00,  // j
0x00,0x7F,0x10,0x28,0x44,0x00,  // k
0x00,0x00,0x41,0x7F,0x40,0x00,  // l
0x00,0x7C,0x04,0x18,0x04,0x78,  // m
0x00,0x7C,0x08,0x04,0x04,0x78,  // n
0x00,0x38,0x44,0x44,0x44,0x38,  // o

0x00,0xFC,0x24,0x24,0x24,0x18,  // p
0x00,0x18,0x24,0x24,0x18,0xFC,  // q
0x00,0x7C,0x08,0x04,0x04,0x08,  // r
0x00,0x48,0x54,0x54,0x54,0x20,  // s
0x00,0x04,0x3F,0x44,0x40,0x20,  // t
0x00,0x3C,0x40,0x40,0x20,0x7C,  // u
0x00,0x1C,0x20,0x40,0x20,0x1C,  // v
0x00,0x3C,0x40,0x30,0x40,0x3C,  // w
0x00,0x44,0x28,0x10,0x28,0x44,  // x
0x00,0x1C,0xA0,0xA0,0xA0,0x7C,  // y
0x00,0x44,0x64,0x54,0x4C,0x44,  // z
0x00,0x00,0x10,0x7C,0x82,0x00,  // {
0x00,0x00,0x00,0xFF,0x00,0x00,  // |
0x00,0x00,0x82,0x7C,0x10,0x00,  // }
0x00,0x00,0x06,0x09,0x09,0x06,  // ~
//-----------------------------------
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  //
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 

0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 

0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x7E,0x4B,0x4A,0x4B,0x42,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 

0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  //
0x00,0x00,0x00,0x00,0x00,0x20,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x38,0x55,0x54,0x55,0x58,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  //
0x00,0x00,0x00,0x00,0x00,0x00,  //
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 
0x00,0x00,0x00,0x00,0x00,0x00,  // 

0x00,0x00,0x03,0x05,0x00,0x00,  // 
0x00,0x7C,0x12,0x11,0x12,0x7C,  // 
0x00,0x7F,0x49,0x49,0x49,0x30,  // 
0x00,0x7F,0x49,0x49,0x49,0x36,  // 
0x00,0x7F,0x01,0x01,0x01,0x01,  // 
0x00,0x60,0x3E,0x23,0x3F,0x60,  // 
0x00,0x7F,0x49,0x49,0x49,0x41,  //
0x00,0x77,0x08,0x3E,0x08,0x77,  // 
0x00,0x22,0x49,0x49,0x5D,0x36,  // 
0x00,0x7F,0x30,0x08,0x06,0x7F,  // 
0x00,0x7F,0x30,0x19,0x0C,0x7F,  // 
0x00,0x7F,0x08,0x08,0x14,0x63,  // 
0x00,0x40,0x7E,0x01,0x01,0x7F,  // 
0x00,0x7F,0x02,0x0C,0x02,0x7F,  // 
0x00,0x7F,0x08,0x08,0x08,0x7F,  // 
0x00,0x3E,0x41,0x41,0x41,0x3E,  // 

0x00,0x7F,0x01,0x01,0x01,0x7F,  // 
0x00,0x7F,0x09,0x09,0x09,0x06,  // 
0x00,0x3E,0x41,0x41,0x41,0x22,  // 
0x00,0x01,0x01,0x7F,0x01,0x01,  // 
0x00,0x07,0x48,0x48,0x48,0x3F,  // 
0x00,0x0E,0x11,0x7F,0x11,0x0E,  // 
0x00,0x63,0x14,0x08,0x14,0x63,  // 
0x00,0x3F,0x20,0x20,0x3F,0x60,  // 
0x00,0x07,0x08,0x08,0x08,0x7F,  // 
0x00,0x7F,0x40,0x7E,0x40,0x7F,  // 
0x00,0x3F,0x20,0x3F,0x20,0x7F,  // 
0x40,0x01,0x7F,0x48,0x48,0x30,  // 
0x00,0x7F,0x48,0x30,0x00,0x7F,  // 
0x00,0x7F,0x48,0x48,0x30,0x00,  // 
0x41,0x49,0x49,0x49,0x3E,0x00,  // 
0x00,0x7F,0x08,0x3E,0x41,0x3E,
0x00,0x46,0x29,0x19,0x09,0x7F,
//-----------------------------------
//0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x7C,0x10,0x7C,0x44,0x7C,
0x00,0x20,0x54,0x54,0x54,0x78,  // 
0x00,0x3C,0x4A,0x4A,0x4A,0x30,  // 
0x00,0x7C,0x54,0x54,0x54,0x28,  // 
0x00,0x7C,0x04,0x04,0x04,0x00,  // 
0x00,0x60,0x3C,0x24,0x3C,0x60,  // 
0x00,0x38,0x54,0x54,0x54,0x18,  // 
0x00,0x6C,0x10,0x7C,0x10,0x6C,  // 
0x00,0x28,0x44,0x54,0x54,0x28,  // 
0x00,0x7C,0x20,0x10,0x08,0x7C,  // 
0x00,0x7C,0x20,0x12,0x08,0x7C,  // 
0x00,0x7C,0x10,0x10,0x28,0x44,  // 
0x00,0x40,0x7C,0x04,0x04,0x7C,  // 
0x00,0x7C,0x08,0x10,0x08,0x7C,  // 
0x00,0x7C,0x10,0x10,0x10,0x7C,  // 
0x00,0x38,0x44,0x44,0x44,0x38,  // 

0x00,0x7C,0x04,0x04,0x04,0x7C,  // 
0x00,0x7C,0x24,0x24,0x24,0x18,  // 
0x00,0x38,0x44,0x44,0x44,0x28,  // 
0x00,0x04,0x04,0x7C,0x04,0x04,  // 
0x00,0x0C,0x50,0x50,0x50,0x3C,  // 
0x00,0x18,0x24,0x7C,0x24,0x18,  // 
0x00,0x44,0x28,0x10,0x28,0x44,  // 
0x00,0x3C,0x20,0x20,0x3C,0x60,  // 
0x00,0x1C,0x20,0x20,0x7C,0x00,  // 
0x00,0x7C,0x40,0x78,0x40,0x7C,  // 
0x00,0x3C,0x20,0x3C,0x20,0x7C,  // 
0x40,0x04,0x7C,0x50,0x50,0x20,  //
0x00,0x7C,0x50,0x70,0x00,0x7C,  // 
0x00,0x7C,0x50,0x50,0x20,0x00,  // 
0x44,0x54,0x54,0x54,0x38,0x00,  // 
0x00,0x7C,0x10,0x7C,0x44,0x7C,
0x00,0x48,0x54,0x34,0x14,0x7C,
};

/*
fontdatatype rus_4x6[] PROGMEM =
{
0x04, 0x08, 0xC0, 0x20,
0x00, 0x3c, 0x12, 0x3c,                        // Code for char А
0x00, 0x3E, 0x2A, 0x12,                        // Code for char Б
0x00, 0x3E, 0x2A, 0x14,                        // Code for char В
0x00, 0x3E, 0x02, 0x02,                        // Code for char Г
0x00, 0x30, 0x1E, 0x30,                        // Code for char Д
0x00, 0x3E, 0x2A, 0x22,                        // Code for char Е
0x00, 0x36, 0x3E, 0x36,                        // Code for char Ж
0x00, 0x22, 0x2A, 0x14,                        // Code for char З
0x00, 0x3E, 0x18, 0x3E,                        // Code for char И
0x00, 0x3E, 0x19, 0x3E,                        // Code for char Й
0x00, 0x3E, 0x08, 0x22,                        // Code for char К
0x00, 0x3C, 0x02, 0x3E,                        // Code for char Л
0x00, 0x3E, 0x0E, 0x3E,                        // Code for char М
0x00, 0x3E, 0x08, 0x3E,                        // Code for char Н
0x00, 0x1C, 0x22, 0x1C,                        // Code for char О
0x00, 0x3E, 0x02, 0x3E,                        // Code for char П
0x00, 0x3E, 0x0A, 0x04,                        // Code for char Р
0x00, 0x1C, 0x22, 0x14,                        // Code for char С
0x00, 0x02, 0x3E, 0x02,                        // Code for char Т
0x00, 0x06, 0x28, 0x1E,                        // Code for char У
0x00, 0x1C, 0x3E, 0x1C,                        // Code for char Ф
0x00, 0x36, 0x08, 0x36,                        // Code for char Х
0x00, 0x1E, 0x10, 0x2E,                        // Code for char Ц
0x00, 0x0E, 0x08, 0x3E,                        // Code for char Ч
0x00, 0x3E, 0x38, 0x3E,                        // Code for char Ш
0x00, 0x1E, 0x1C, 0x3E,                        // Code for char Щ
0x00, 0x3E, 0x28, 0x10,                        // Code for char Ъ
0x3E, 0x30, 0x00, 0x3E,                        // Code for char Ы
0x00, 0x3E, 0x28, 0x10,                        // Code for char Ь
0x00, 0x14, 0x2A, 0x1C,                        // Code for char Э
0x3E, 0x08, 0x3E, 0x3E,                        // Code for char Ю
0x00, 0x34, 0x0A, 0x3E,                        // Code for char Я
};
*/

fontdatatype TinyFontRus[] PROGMEM =
{
0x04, 0x06, 0x20, 0x5f,
0x00, 0x00, 0x00, 0x03, 0xa0, 0x00, 0xc0, 0x0c, 0x00, 0xf9, 0x4f, 0x80, 0x6b, 0xeb, 0x00, 0x98, 0x8c, 0x80, 0x52, 0xa5, 0x80, 0x03, 0x00, 0x00,  // Space, !"#$%&'
0x01, 0xc8, 0x80, 0x89, 0xc0, 0x00, 0x50, 0x85, 0x00, 0x21, 0xc2, 0x00, 0x08, 0x40, 0x00, 0x20, 0x82, 0x00, 0x00, 0x20, 0x00, 0x18, 0x8c, 0x00,  // ()*+,-./
0xfa, 0x2f, 0x80, 0x4b, 0xe0, 0x80, 0x5a, 0x66, 0x80, 0x8a, 0xa5, 0x00, 0xe0, 0x8f, 0x80, 0xea, 0xab, 0x00, 0x72, 0xa9, 0x00, 0x9a, 0x8c, 0x00,  // 01234567
0xfa, 0xaf, 0x80, 0x4a, 0xa7, 0x00, 0x01, 0x40, 0x00, 0x09, 0x40, 0x00, 0x21, 0x48, 0x80, 0x51, 0x45, 0x00, 0x89, 0x42, 0x00, 0x42, 0x66, 0x00,  // 89:;<=>?
0x72, 0xa6, 0x80, 0x7a, 0x87, 0x80, 0xfa, 0xa5, 0x00, 0x72, 0x25, 0x00, 0xfa, 0x27, 0x00, 0xfa, 0xa8, 0x80, 0xfa, 0x88, 0x00, 0x72, 0x2b, 0x00,  // @ABCDEFG
0xf8, 0x8f, 0x80, 0x8b, 0xe8, 0x80, 0x8b, 0xe8, 0x00, 0xf8, 0x8d, 0x80, 0xf8, 0x20, 0x80, 0xf9, 0x0f, 0x80, 0xf9, 0xcf, 0x80, 0x72, 0x27, 0x00,  // HIJKLMNO
0xfa, 0x84, 0x00, 0x72, 0x27, 0x40, 0xfa, 0x85, 0x80, 0x4a, 0xa9, 0x00, 0x83, 0xe8, 0x00, 0xf0, 0x2f, 0x00, 0xe0, 0x6e, 0x00, 0xf0, 0xef, 0x00,  // PQRSTUVW
0xd8, 0x8d, 0x80, 0xc0, 0xec, 0x00, 0x9a, 0xac, 0x80, 0x03, 0xe8, 0x80, 0xc0, 0x81, 0x80, 0x8b, 0xe0, 0x00, 0x42, 0x04, 0x00, 0x08, 0x20, 0x80,  // XYZ[\]^_
0x02, 0x04, 0x00, 0x31, 0x23, 0x80, 0xf9, 0x23, 0x00, 0x31, 0x24, 0x80, 0x31, 0x2f, 0x80, 0x31, 0x62, 0x80, 0x23, 0xea, 0x00, 0x25, 0x53, 0x80,  // `abcdefg
0xf9, 0x03, 0x80, 0x02, 0xe0, 0x00, 0x06, 0xe0, 0x00, 0xf8, 0x42, 0x80, 0x03, 0xe0, 0x00, 0x79, 0x87, 0x80, 0x39, 0x03, 0x80, 0x31, 0x23, 0x00,  // hijklmno
0x7d, 0x23, 0x00, 0x31, 0x27, 0xc0, 0x78, 0x84, 0x00, 0x29, 0x40, 0x00, 0x43, 0xe4, 0x00, 0x70, 0x27, 0x00, 0x60, 0x66, 0x00, 0x70, 0x67, 0x00,  // pqrstuvw
0x48, 0xc4, 0x80, 0x74, 0x57, 0x80, 0x59, 0xe6, 0x80, 0x23, 0xe8, 0x80, 0x03, 0x60, 0x00, 0x8b, 0xe2, 0x00, 0x61, 0x0c, 0x00,                     // zyx{|}~
0x00, 0x00, 0x1E, // Index: 95 (0x005F)  Character: 0x007F ('')
0x01, 0x07, 0x96, // Index: 96 (0x0060)  Character: 0x0080 ('?')
0x00, 0x07, 0x90, // Index: 97 (0x0061)  Character: 0x0081 ('?')
0x00, 0x30, 0x00, // Index: 98 (0x0062)  Character: 0x0082 ('?')
0x00, 0x00, 0x00, // Index: 99 (0x0063)  Character: 0x0083 ('?')
0x0C, 0x00, 0x00, // Index: 100 (0x0064)  Character: 0x0084 ('?')
0x00, 0x00, 0x00, // Index: 101 (0x0065)  Character: 0x0085 ('?')
0x00, 0x00, 0x00, // Index: 102 (0x0066)  Character: 0x0086 ('?')
0x00, 0x00, 0x00, // Index: 103 (0x0067)  Character: 0x0087 ('?')
0x00, 0x00, 0x00, // Index: 104 (0x0068)  Character: 0x0088 ('?')
0x00, 0x00, 0x00, // Index: 105 (0x0069)  Character: 0x0089 ('?')
0x00, 0x00, 0x00, // Index: 106 (0x006A)  Character: 0x008A ('?')
0x00, 0x01, 0x0A, // Index: 107 (0x006B)  Character: 0x008B ('?')
0x00, 0x00, 0x00, // Index: 108 (0x006C)  Character: 0x008C ('?')
0x01, 0xE3, 0x12, // Index: 109 (0x006D)  Character: 0x008D ('?')
0x01, 0x07, 0x96, // Index: 110 (0x006E)  Character: 0x008E ('?')
0x01, 0xE0, 0xDE, // Index: 111 (0x006F)  Character: 0x008F ('?')
0x01, 0xE1, 0x80, // Index: 112 (0x0070)  Character: 0x0090 ('?')
0x01, 0x00, 0x00, // Index: 113 (0x0071)  Character: 0x0091 ('?')
0x01, 0x00, 0x00, // Index: 114 (0x0072)  Character: 0x0092 ('?')
0x40, 0x00, 0x00, // Index: 115 (0x0073)  Character: 0x0093 ('?')
0x00, 0x00, 0x00, // Index: 116 (0x0074)  Character: 0x0094 ('?')
0x00, 0x00, 0x00, // Index: 117 (0x0075)  Character: 0x0095 ('?')
0x00, 0x00, 0x00, // Index: 118 (0x0076)  Character: 0x0096 ('?')
0x00, 0x00, 0x00, // Index: 119 (0x0077)  Character: 0x0097 ('?')
0x00, 0x00, 0x00, // Index: 120 (0x0078)  Character: 0x0098 ('')
0x00, 0x00, 0x00, // Index: 121 (0x0079)  Character: 0x0099 ('?')
0x00, 0x00, 0x00, // Index: 122 (0x007A)  Character: 0x009A ('?')
0x00, 0x02, 0x84, // Index: 123 (0x007B)  Character: 0x009B ('?')
0x00, 0x00, 0x00, // Index: 124 (0x007C)  Character: 0x009C ('?')
0x00, 0x00, 0x00, // Index: 125 (0x007D)  Character: 0x009D ('?')
0x00, 0x00, 0x00, // Index: 126 (0x007E)  Character: 0x009E ('?')
0x00, 0x00, 0x00, // Index: 127 (0x007F)  Character: 0x009F ('?')
0x00, 0x00, 0x00, // Index: 128 (0x0080)  Character: 0x00A0 (' ')
0x00, 0x00, 0x00, // Index: 129 (0x0081)  Character: 0x00A1 ('?')
0x00, 0x00, 0x00, // Index: 130 (0x0082)  Character: 0x00A2 ('?')
0x00, 0x00, 0x9C, // Index: 131 (0x0083)  Character: 0x00A3 ('?')
0x00, 0x00, 0x00, // Index: 132 (0x0084)  Character: 0x00A4 ('¤')
0x00, 0x00, 0x00, // Index: 133 (0x0085)  Character: 0x00A5 ('?')
0x00, 0x00, 0x00, // Index: 134 (0x0086)  Character: 0x00A6 ('¦')
0x00, 0x00, 0x00, // 0xA7  
0x03, 0xFF, 0xFF, // 0xA8   |||
0x00, 0x0F, 0xFF, // 0xA9    ||
0x00, 0x00, 0x3F, // 0xAA     |
0x82, 0x08, 0x20, // 0xAB 1-
0xC3, 0x0C, 0x30, // 0xAC 2-
0xE3, 0x8E, 0x38, // 0xAD 3-
0xF3, 0xCF, 0x3C, // 0xAE 4-
0xFB, 0xEF, 0xBE, // 0xAF 5-
0x3C, 0xF3, 0xCF, // 0xB0 5_
0x3C, 0xF3, 0xCF, // 0xB1 4_
0x1C, 0x71, 0xC7, // 0xB2 3_
0x0C, 0x30, 0xC3, // 0xB3 2_
0x04, 0x10, 0x41, // 0xB4 1_
0xFF, 0xFF, 0xFF, // 0xB5 ||||
0xFF, 0xFF, 0xC0, // 0xB6 |||
0xFF, 0xF0, 0x00, // 0xB7 ||
0xFC, 0x00, 0x00, // 0xB8 |
0x38, 0xA2, 0x80, // 0xB9 с
0x30, 0x43, 0x80, // 0xBA ч
0x18, 0xC1, 0x80, // 0xBB д 
0x38, 0xC3, 0x80, // 0xBC м
0x38, 0x42, 0x80, // 0xBD к
0xFA, 0x84, 0x8C, // 0xBE Р/
0x40, 0xC1, 0x0E, // 0xBF /ч
0x7A, 0x87, 0x80, // А
0xFA, 0xAB, 0x80, // Б
0xFA, 0xA5, 0x00, // В
0xFA, 0x08, 0x00, // Г
0x1B, 0xC1, 0x80, // Д
0xFA, 0xA8, 0x80, // Е
0xDB, 0xED, 0x80, // Ж
0x8A, 0xA5, 0x00, // З
0xF8, 0xCF, 0x80, // И
0x7A, 0xC7, 0x80, // Й
0xF8, 0x89, 0x80, // К
0x7A, 0x0F, 0x80, // Л
0xFB, 0x8F, 0x80, // М
0xF8, 0x8F, 0x80, // Н
0x72, 0x27, 0x00, // О
0xFA, 0x0F, 0x80, // П
0xFA, 0x84, 0x00, // Р
0x72, 0x28, 0x80, // С
0x83, 0xE8, 0x00, // Т
0xE8, 0xAF, 0x00, // У
0x73, 0xE7, 0x00, // Ф
0x89, 0xC8, 0x80, // Х
0xF8, 0x2F, 0x83, // Ц
0xE0, 0x8F, 0x80, // Ч
0xF8, 0xEF, 0x80, // Ш
0xF8, 0xEF, 0xC0, // Щ
0x83, 0xE2, 0x84, // Ъ
0xF8, 0xA1, 0x3E, // Ы
0xF8, 0xA1, 0x00, // Ь
0x8A, 0xA7, 0x00, // Э
0xF9, 0xC8, 0x9C, // Ю
0x5A, 0x8F, 0x80, // Я
};

