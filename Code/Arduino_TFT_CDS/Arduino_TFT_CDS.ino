//20240601  PM6:06
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <Adafruit_ST7789.h>
#include <Fonts/FreeSerif12pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSans9pt7b.h>
#include <SPI.h>
#include <time.h>
#include <ADCTouch.h>
#include "ImageDisplay.h"
#define TFT_CS  10 // TFT CS PIN
#define TFT_DC   8 // TFT DC(A0、RS) 
#define TFT_RST  9 // TFT Reset

int walk=0,Gift_X,Gift_Y,time_sun_moon; 
int CDS_A,CDS_B,CDS_C,CDS_Time=0 ,TFT_sleep=75; //CDS
int TOUCH_A0;     //reference values to remove offset
bool Gift_bool = false , sun_moon=false , TFT_sleep_bool=true;   //true,false

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);


void setup(void) {

  // 1.8" TFT:
  tft.initR(INITR_BLACKTAB);      // Init ST7735S chip, black tab

  // 1.44" TFT:
  //tft.initR(INITR_144GREENTAB); // Init ST7735R chip, green tab


  srand( time(NULL) );
  TOUCH_A0 = ADCTouch.read(A0, 200);
  tft.setRotation(1);  //螢幕轉向 screen orientation
  tft.fillScreen(ST77XX_BLACK);  //填滿黑色
  tft.fillRect(0, 0, 160, 87,0x6358); //Sky
  tft.fillRect(0, 87, 160, 41,0x0568); //floor
  pinMode(3,OUTPUT); //TFT BLK on/off
}

void loop() {
  int value0 = ADCTouch.read(A0);   //no second parameter
  value0 -= TOUCH_A0;       //remove offset
  CDS_A = analogRead(A1);CDS_B = analogRead(A2);CDS_C = analogRead(A3);

  if (TFT_sleep_bool==false || CDS_A>TFT_sleep || CDS_B>TFT_sleep || CDS_C>TFT_sleep)
  {
  sun_moon_display();
  Quokka_BOBO_display();

  if(value0 > 40 && Gift_bool == true ) //Touch A0
  {
  Gift_display();
  }
  if(CDS_A<=TFT_sleep && CDS_B<=TFT_sleep && CDS_C<=TFT_sleep)
  {
    CDS_Time = CDS_Time+1;
    if(CDS_Time>5)
    {
      TFT_sleep_bool=true;
      CDS_Time=0;
    }} 
    else
    {
      CDS_Time=0;
      TFT_sleep_bool=false;
    } 
    digitalWrite(3,HIGH);
    }
  else if (TFT_sleep_bool==true && CDS_A<=TFT_sleep && CDS_B<=TFT_sleep && CDS_C<=TFT_sleep)
  {
    digitalWrite(3,LOW);
  }}




void Quokka_BOBO_display(void)
{
  if(walk>160) 
  {
    walk=-68;
    Gift_bool = true;
    Gift_X= rand()%(143 - 1 + 1) + 1; // (max - min + 1) + min
    Gift_Y= rand()%(31 - 1 + 1) + 1; // (max - min + 1) + min
    tft.drawRGBBitmap(Gift_X, Gift_Y+88,Gift, 16, 7);
    //tft.drawRGBBitmap(0, 0,Gift, 16, 7);
    //tft.fillRect(0, 0, 18, 9,ST77XX_GREEN);
  }

  tft.fillRect(walk+0, 39, 11, 48,0x6358);
  tft.drawRGBBitmap(walk+0, 40,BB, 32, 31);
  //tft.drawRGBBitmap(walk+11, 71,BC, 26, 16);//x,y,png,xx,yy
  tft.drawRGBBitmap(walk+11, 71,BD, 26, 16);

  tft.fillRect(walk+31, 59, 10, 13,0x6358);
  tft.drawRGBBitmap(walk+36, 60,DB, 20, 13);
  //tft.drawRGBBitmap(walk+37, 71,DC, 18, 14);
  tft.drawRGBBitmap(walk+37, 73,DD, 18, 14);
  delay(230);

/*tft.drawRGBBitmap(walk+11, 71,BD, 26, 16);
  tft.drawRGBBitmap(walk+37, 71,DD, 18, 14);*/
  tft.drawRGBBitmap(walk+11, 71,BC, 26, 16);
  tft.drawRGBBitmap(walk+37, 73,DC, 18, 14);
  delay(230);
  tft.fillRect(walk+0, 39, 11, 48,0x6358);
  walk=walk+8;
  //tft.fillRect(walk+31, 58, 10, 13,ST77XX_BLACK);
}


void sun_moon_display(void)
{
  tft.fillRect(time_sun_moon*2.7-2, 0, 22, 30,0x6358); //Reset sun_moon track
  time_sun_moon=time_sun_moon+1; //sun_moon time
  
  

  if(time_sun_moon>60)
  {
    time_sun_moon=1;
    if(sun_moon == false)
    {
      sun_moon = true;
      tft.fillRect(0, 0, 160, 30,0x6358);
    }
    else
    {
      sun_moon = false;
    }
  }
  
  
  
  if(sun_moon == false)
  {
    Gift_X= rand()%(160 - 1 + 1) + 1; // (max - min + 1) + min
    Gift_Y= rand()%(28 - 1 + 1) + 1; // (max - min + 1) + min
    //tft.drawRGBBitmap(Gift_X, Gift_Y+88,Gift, 16, 7);
    tft.fillCircle(Gift_X, Gift_Y, 1, ST77XX_WHITE); 
    //tft.drawRGBBitmap(time_sun_moon*2.7-10, 3,sun_moon_B, 11, 22);
    tft.drawRGBBitmap(time_sun_moon*2.7+0, 3,sun_moon_B, 22, 22);
  }
  else
  {
    //tft.fillRect(0, 3, 160, 24,0x6358);
    tft.drawRGBBitmap(time_sun_moon*2.7+0, 3,sun_moon_A, 22, 22);
  }
}


void Gift_display(void)
{
    //tft.drawRGBBitmap(0, 0,Gift, 16, 7);
  Gift_bool = false;
  tft.fillScreen(ST77XX_BLACK);
    //tft.fillRect(0, 87, 160, 41,0x0568);
  tft.fillRect(10, 25, 140, 30,0xfe41);
  tft.fillRect(10, 55, 140, 48,0xe8e4);
  tft.fillRect(65, 25, 30, 78,0xbbca);
    //tft.fillRect(10, 20, 140, 98,ST77XX_YELLOW);
  delay(1000);
  tft.fillRect(10, 25, 140, 30,ST77XX_BLACK);
  tft.fillRect(10, 5, 140, 30,0xfe41);
  delay(1500);
    //tft.fillScreen(ST77XX_BLACK);
  tft.fillScreen(0x6358);
  tft.setCursor(50, 40);  //設定文字游標點
  tft.setTextColor(ST77XX_WHITE);  //設定文字顏色
  tft.setFont(&FreeSerif12pt7b);  //字型
  tft.print("Happy");  //顯示文字
  tft.setCursor(40, 70);  //設定文字游標點
  tft.print("Birthday !");  //顯示文字

  tft.drawRGBBitmap(50, 77,BB, 32, 31);
  tft.drawRGBBitmap(61, 108,BD, 26, 16);

  tft.drawRGBBitmap(86, 97,DB, 20, 13);
  tft.drawRGBBitmap(87, 110,DD, 18, 14);
  delay(2000);
  tft.drawRGBBitmap(61, 108,BC, 26, 16);
  tft.drawRGBBitmap(87, 110,DC, 18, 14);
  delay(2000);

    //tft.fillScreen(ST77XX_BLACK);
  tft.fillScreen(0x6358);
  tft.fillRect(0, 87, 160, 41,0x0568);
}