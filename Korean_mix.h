#ifndef _KOREAN_MIX_H
#define _KOREAN_MIX_H

#include "Arduino.h"
#include "LiquidCrystal.h"

void korean_mix(LiquidCrystal &lcd, int a, int b, int c, int x)
{
  float a_i=1;
  float b_i=1;
  float c_i=1;
    if(a==1)
    {
        a_i=1.1;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00001,
            B00001,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==2)
    {
        a_i=1.2;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00101,
            B00101,
            B00101,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==3)
    {
        a_i=1.3;
        byte a_1[8] = {
            B00000,
            B00000,
            B10000,
            B10000,
            B10000,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==4)
    {
        a_i=1.4;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B10000,
            B10000,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==5)
    {
        a_i=1.5;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B10100,
            B10100,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==6)
    {
        a_i=1.6;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B11111,
            B10000,
            B11111,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==7)
    {
        a_i=1.7;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B10001,
            B10001,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==8)
    {
        a_i=1.8;
        byte a_1[8] = {
            B00000,
            B00000,
            B10001,
            B11111,
            B10001,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==9)
    {
        a_i=1.9;
        byte a_1[8] = {
            B00000,
            B00000,
            B10101,
            B11111,
            B10101,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==10)
    {
        a_i=2;
        byte a_1[8] = {
            B00000,
            B00000,
            B00100,
            B00100,
            B01010,
            B10001,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==11) // 확인하기
    {
        a_i=2.1;
        byte a_1[8] = {
            B00000,
            B00000,
            B00000,
            B01010,
            B10101,
            B00000,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==12)
    {
        a_i=2.2;
        byte a_1[8] = {
            B00000,
            B00000,
            B00000,
            B01110,
            B10001,
            B01110,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==13)
    {
        a_i=2.3;
        byte a_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B00100,
            B01010,
            B10001,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==14)
    {
        a_i=2.4;
        byte a_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B01010,
            B10101,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==15)
    {
        a_i=2.6;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B11111,
            B00001,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==16)
    {
        a_i=2.7;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B10000,
            B11111,
            B10000,
            B11111,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==17)
    {
        a_i=2.8;
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B01010,
            B01010,
            B11111,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    else if(a==18)
    {
        a_i=2.9;
        byte a_1[8] = {
            B00000,
            B00100,
            B11111,
            B01110,
            B10001,
            B01110,
            B00000,
            B00000,
        };
        lcd.createChar(a_i, a_1);
        lcd.setCursor(x - 1, 0);
        lcd.write(byte(a_i));
    }
    if(b==1)
    {
        b_i=3;
        byte b_1[8] = {
            B000,
            B100,
            B100,
            B100,
            B111,
            B100,
            B100,
            B100,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==2)
    {
        b_i=3.1;
        byte b_1[8] = {
            B000,
            B101,
            B101,
            B101,
            B111,
            B101,
            B101,
            B101,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==3)
    {
        b_i=3.2;
        byte b_1[8] = {
            B000,
            B100,
            B100,
            B111,
            B100,
            B111,
            B100,
            B100,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==4)
    {
        b_i=3.3;
        byte b_1[8] = {
            B000,
            B101,
            B101,
            B111,
            B101,
            B111,
            B101,
            B101,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==5)
    {
        b_i=3.4;
        byte b_1[8] = {
            B000,
            B001,
            B001,
            B001,
            B111,
            B001,
            B001,
            B001,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==6)
    {
        b_i=3.5;
        byte b_1[8] = {
            B0000,
            B0101,
            B0101,
            B0101,
            B1101,
            B0101,
            B0101,
            B0101,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==7)
    {
        b_i=3.6;
        byte b_1[8] = {
            B000,
            B001,
            B001,
            B111,
            B001,
            B111,
            B001,
            B001,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==8)
    {
        b_i=3.7;
        byte b_1[8] = {
            B0000,
            B0101,
            B0101,
            B1101,
            B0101,
            B1101,
            B0101,
            B0101,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(b==9)
    {
        b_i=3.7;
        byte b_1[8] = {
            B0,
            B1,
            B1,
            B1,
            B1,
            B1,
            B1,
            B1,
        };
        lcd.createChar(b_i, b_1);
        lcd.setCursor(x, 0);
        lcd.write(byte(b_i));
    }
    if(c==1)
    {
        c_i=6;
        byte c_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00001,
            B00001,
            B00001,
            B00001,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==2)
    {
        c_i=6.1;
        byte c_1[8] = {
            B00000,
            B00000,
            B00000,
            B10000,
            B10000,
            B10000,
            B10000,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==3)
    {
        c_i=6.2;
        byte c_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B10000,
            B10000,
            B10000,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==4)
    {
        c_i=6.3;
        byte c_1[8] = {
            B00000,
            B11111,
            B00001,
            B00001,
            B11111,
            B10000,
            B10000,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==5)
    {
        c_i=6.4;
        byte c_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B10001,
            B10001,
            B10001,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==6)
    {
        c_i=6.5;
        byte c_1[8] = {
            B00000,
            B00000,
            B10001,
            B10001,
            B11111,
            B10001,
            B10001,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==7)
    {
        c_i=6.6;
        byte c_1[8] = {
            B00000,
            B00000,
            B00100,
            B00100,
            B01010,
            B01010,
            B10001,
            B10001,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==8)
    {
        c_i=6.7;
        byte c_1[8] = {
            B00000,
            B00000,
            B00000,
            B01110,
            B10001,
            B10001,
            B10001,
            B01110,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==9)
    {
        c_i=6.8;
        byte c_1[8] = {
            B00000,
            B00000,
            B11111,
            B00100,
            B00100,
            B01010,
            B10001,
            B10001,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==10)
    {
        c_i=6.9;
        byte c_1[8] = {
            B00000,
            B00100,
            B11111,
            B00100,
            B00100,
            B01010,
            B10001,
            B10001,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==11)
    {
        c_i=7;
        byte c_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B00001,
            B11111,
            B00001,
            B00001,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==12)
    {
        c_i=7.1;
        byte c_1[8] = {
            B00000,
            B11111,
            B10000,
            B10000,
            B11111,
            B10000,
            B10000,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==13)
    {
        c_i=7.2;
        byte c_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B01010,
            B01010,
            B01010,
            B11111,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
    if(c==14)
    {
        c_i=7.2;
        byte c_1[8] = {
            B00100,
            B11111,
            B00000,
            B01110,
            B10001,
            B10001,
            B10001,
            B01110,
        };
        lcd.createChar(c_i, c_1);
        lcd.setCursor(x, 1);
        lcd.write(byte(c_i));
    }
}

#endif
