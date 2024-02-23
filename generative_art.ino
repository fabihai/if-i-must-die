// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 1500
#define WIDTH 240
#define HEIGHT 135

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

void setup(void) {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);
  tft.setTextWrap(false);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // tft.setTextSize(3);
}

int32_t y = 0;

int check_y(int y) {
  y = y+26;
  if (y > HEIGHT) {
    y = 0;
  }
  // else {
  //   y = y+26;
  // }
  return y;
}

void loop() {
  // put your main code here, to run repeatedly:

  // Fill screen with grey so we can see the effect of printing with and without 
  // a background colour defined
  tft.fillScreen(TFT_BLACK);

  tft.drawString("If I must die",0,y,4);
  delay(WAIT);

  tft.drawString("you must live",0,26,4);
  delay(WAIT);

  tft.drawString("to tell my story",0,52,4);
  delay(WAIT);

  tft.drawString("to sell my things",0,78,4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  
  tft.drawString("to buy a piece of",0,0,4);
  tft.drawString("cloth",0,26,4);
  delay(WAIT);

  tft.drawString("and some strings, ",0,52,4);
  delay(WAIT);
  
  tft.drawString("(make it white",50,80,2);
  delay(WAIT);
  tft.drawString(" with a long tail)",50,96,2);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  
  tft.drawString("so that a child,",0,0,4);
  delay(WAIT);
  tft.drawString(" somewhere in Gaza",0,26,4);
  delay(WAIT);
  
  tft.drawString("while looking heaven",0,52,4);
  delay(WAIT);
  tft.drawString(" in the eye",0,78,4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  
  tft.drawString("awaiting his dad",0,0,4);
  delay(WAIT);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.drawString(" who left in a blaze--",0,26,4);
  delay(WAIT);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  
  tft.drawString("and bid no one",0,52,4);
  tft.drawString("          farewell",0,78,4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  
  tft.drawString("not even to his flesh",0,0,4);
  delay(WAIT);
  
  tft.drawString("not even ",50,40,4);
  delay(WAIT);
  tft.setTextColor(TFT_DARKGREEN, TFT_BLACK);
  tft.drawString(" to himself",100,80,4);
  delay(2000);

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  
  tft.drawString("sees the kite, ",0,0,4);
  delay(500);
  tft.drawString(" my kite you made,",30,26,4);
  delay(500);
  tft.drawString("flying up above",10,78,4);
  delay(500);
  tft.drawString("                                          ",10,78,4);
  tft.drawString("flying up ",10,78,4);
  delay(50);
  tft.drawString("above", 115, 70, 4);
  delay(500);
  tft.drawString("                                         ",115,70,4);
  tft.drawString("above", 115, 62, 4);
  delay(500);
  tft.drawString("                                         ",115,62,4);
  tft.drawString("above", 115, 56, 4);
  delay(500);
  tft.drawString("                                         ",115,56,4);
  tft.drawString("above", 115, 48, 4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);

  tft.drawString("and thinks for,",0,20,4);
  delay(500);
  tft.drawString(" a moment,",20,40,4);
  delay(WAIT);
  tft.drawString(" an angel is there",40,60,4);
  delay(WAIT);

  tft.drawString("bringing back love",20,80,4);
  delay(2000);

  tft.fillScreen(TFT_BLACK);

  tft.drawString("If I must die",50,60,4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  tft.drawString("let it bring hope",30,60,4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  tft.drawString("let it be a tale",40,60,4);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  tft.drawString("- Refaat Alareer",30,60,4);
  delay(WAIT);
}
