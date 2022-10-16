/*  
 Test the tft.print() viz embedded tft.write() function

 This sketch used font 2, 4, 7
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 Note that yield() or delay(0) must be called in long duration for/while
 loops to stop the ESP8266 watchdog triggering.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
 code color
0x0000  Black
0xFFFF  White
0xBDF7  Light Gray
0x7BEF  Dark Gray
0xF800  Red
0xFFE0  Yellow
0xFBE0  Orange
0x79E0  Brown
0x7E0 Green
0x7FF Cyan
0x1F  Blue
0xF81F  Pink
 */


#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>
#include "tempicon.h"

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

#define TFT_GREY 0x5AEB // New colour
long count = 0; // Loop count
void setup(void) {
 
  tft.init();  
  tft.setRotation(1); //0 แนวตั้ง, 1 แนวนอน 
  tft.fillScreen(TFT_WHITE);
  
  tft.drawRect(0,1, 159, 127, TFT_RED);  
  tft.drawLine(0,63, 159, 63, TFT_RED); // เส้นแนวนอน
  tft.drawLine(100,0, 100, 127, TFT_RED); //เส้นแนวตั้ง

  //tft.setTextSize(3); 
  tft.setTextColor(TFT_BLACK); 
  //องศา
  //tft.drawString("-70", 10, 10, 6);
  tft.drawString(".",84, 35, 2);
  tft.drawString("C",87, 45, 2);
  //ความชื้น
  tft.setTextColor(TFT_BLUE);
  tft.drawString(" 80", 10, 75, 6);
  tft.drawString("%",85, 105, 2);

  tft.setTextColor(TFT_BLACK);
  tft.setTextSize(1);
  tft.drawString("DAY", 118, 4, 2);
  tft.drawString("TIME", 114, 65, 2);
  
  // Swap the colour byte order when rendering
  //tft.setSwapBytes(true);
  // Draw the icons
  //tft.pushImage(5, 45, iconWidth, iconHeight, icon);
  
}

void loop() {
  int number = random(-99, 99);
  String temp = "";
  if(number > -1){
    temp = " "+(String)number; 
  }else{
    temp = (String)number;
  }
  tft.setTextColor(TFT_BLACK); 
  tft.setCursor (10, 10);  
  tft.drawString(temp, 10, 10, 6);
  delay(500);
  //Clear Screen
  tft.setCursor (10, 10);
  tft.setTextColor(TFT_WHITE); //Clear  
  tft.drawString(temp, 10, 10, 6);
  //while(1) yield(); // We must yield() to stop a watchdog timeout.
}
