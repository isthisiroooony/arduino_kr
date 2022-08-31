#ifndef _KOREAN_C_H
#define _KOREAN_C_H

#include "Arduino.h"
#include "LiquidCrystal.h"

void korean(LiquidCrystal &lcd, int i, int n)
{
    if (i == 1) //1!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B11010,
            B01011,
            B01010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 2) //2!
    {
        byte a_1[8] = {
            B00000,
            B00010,
            B11011,
            B01010,
            B01010,
            B00000,
            B11110,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 3) //3!
    {
        byte a_1[8] = {
            B00000,
            B11010,
            B01011,
            B01010,
            B00010,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 4) //4!
    {
        byte a_1[8] = {
            B00000,
            B11010,
            B01011,
            B01010,
            B00000,
            B11110,
            B10010,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 5) //5!
    {
        byte a_1[8] = {
            B00000,
            B11010,
            B01011,
            B01010,
            B00010,
            B01100,
            B10010,
            B01100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 6) //6!
    {
        byte a_1[8] = {
            B11010,
            B01011,
            B00000,
            B11110,
            B10000,
            B11110,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 7) //7!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B11011,
            B01011,
            B01011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 8) //8!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B11010,
            B01110,
            B01010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 9) //9!
    {
        byte a_1[8] = {
            B00000,
            B11001,
            B01011,
            B01001,
            B00000,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 10) //10!
    {
        byte a_1[8] = {
            B00000,
            B11001,
            B01011,
            B01001,
            B00000,
            B00100,
            B01010,
            B10001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 11) //11!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B11011,
            B01111,
            B01011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 12) //12!
    {
        byte a_1[8] = {
            B00000,
            B00001,
            B11011,
            B01001,
            B01011,
            B00000,
            B01111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 13) //13!
    {
        byte a_1[8] = {
            B11011,
            B01011,
            B00001,
            B11111,
            B00001,
            B11111,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 14) //14!
    {
        byte a_1[8] = {
            B00001,
            B11011,
            B01001,
            B01011,
            B00000,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 15) //15!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B00011,
            B11111,
            B01011,
            B01111,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 16) //16!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00001,
            B00100,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 17) //17!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B00100,
            B01110,
            B00000,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 18) //18!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11010,
            B01010,
            B10011,
            B11110,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 19) //19!
    {
        byte a_1[8] = {
            B11010,
            B01010,
            B00011,
            B01010,
            B11100,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 20) //20! start
    {
        byte a_1[8] = {
            B11010,
            B01011,
            B10010,
            B11100,
            B00000,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 21) //21!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00001,
            B01010,
            B01010,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 22) //22!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00001,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 23) //23!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B00000,
            B11111,
            B00100,
            B00000,
            B01110,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 24) //24!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B00000,
            B11111,
            B00100,
            B00000,
            B01000,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 25) //25!
    {
        byte a_1[8] = {
            B11100,
            B00100,
            B00001,
            B11101,
            B01011,
            B00001,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 26) //26!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00000,
            B00000,
            B11111,
            B01010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 27) //27!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B00001,
            B00000,
            B00000,
            B11111,
            B00000,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 28) //28!
    {
        byte a_1[8] = {
            B00000,
            B11110,
            B00010,
            B00000,
            B11110,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 29) //29!
    {
        byte a_1[8] = {
            B11110,
            B00010,
            B00000,
            B11110,
            B00000,
            B11110,
            B10010,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 30) //30!
    {
        byte a_1[8] = {
            B11110,
            B00010,
            B00000,
            B11110,
            B00000,
            B10010,
            B11110,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 31) //31!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B01101,
            B00101,
            B00101,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 32) //32!
    {
        byte a_1[8] = {
            B00010,
            B11010,
            B01010,
            B01010,
            B00000,
            B11110,
            B10010,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 33) //33!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B10010,
            B10011,
            B11010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 34) //34!
    {
        byte a_1[8] = {
            B00000,
            B10010,
            B10011,
            B11010,
            B00010,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 35) //35!
    {
        byte a_1[8] = {
            B10010,
            B11011,
            B00000,
            B00111,
            B00001,
            B00111,
            B00100,
            B00111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 36) //36!
    {
        byte a_1[8] = {
            B10010,
            B10011,
            B11010,
            B00010,
            B00000,
            B11110,
            B10010,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 37) //37!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B10011,
            B10011,
            B11011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 38) //38!
    {
        byte a_1[8] = {
            B00001,
            B10011,
            B10001,
            B11011,
            B00001,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 39) //39!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B10000,
            B11111,
            B00000,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 40) //40!
    {
        byte a_1[8] = {
            B00000,
            B10000,
            B11110,
            B00000,
            B11110,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 41) //41!
    {
        byte a_1[8] = {
            B10000,
            B11110,
            B00000,
            B11110,
            B00000,
            B01100,
            B10010,
            B01100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 42) //42!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B10010,
            B10010,
            B11010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 43) //43!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B11010,
            B10011,
            B11010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 44) //44!
    {
        byte a_1[8] = {
            B00010,
            B11010,
            B10011,
            B11010,
            B00010,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 45) //45!
    {
        byte a_1[8] = {
            B11010,
            B10011,
            B11000,
            B00111,
            B00001,
            B00111,
            B00100,
            B00111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 46) //46!
    {
        byte a_1[8] = {
            B00010,
            B11010,
            B10011,
            B11010,
            B00010,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 47) //47!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B11011,
            B10011,
            B11011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 48) //48!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B11010,
            B10110,
            B11010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 49) //49!
    {
        byte a_1[8] = {
            B00000,
            B00010,
            B11010,
            B10110,
            B11010,
            B00010,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 50) //50!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B11011,
            B10111,
            B11011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 51) //51!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B01000,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 52) //52!
    {
        byte a_1[8] = {
            B01110,
            B01000,
            B01110,
            B00100,
            B11111,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 53) //53!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11101,
            B10001,
            B11101,
            B01001,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 54) //54!
    {
        byte a_1[8] = {
            B11101,
            B10001,
            B11101,
            B01001,
            B11111,
            B00001,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    
    else if (i == 55) //55!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11111,
            B10000,
            B11111,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 56) //56!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00000,
            B11111,
            B10000,
            B11111,
            B00000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 57) //57!
    {
        byte a_1[8] = {
            B01110,
            B01000,
            B01110,
            B11111,
            B00000,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 58) //58!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11110,
            B10100,
            B11110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 59) //59!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11010,
            B01010,
            B11011,
            B10010,
            B11010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 60) //60!
    {
        byte a_1[8] = {
            B11010,
            B01010,
            B11011,
            B10010,
            B11010,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 61) //61!
    {
        byte a_1[8] = {
            B11010,
            B01010,
            B11011,
            B10010,
            B11010,
            B00000,
            B11110,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 62) //62!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11011,
            B01011,
            B11011,
            B10011,
            B11011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 63) //63!
    {
        byte a_1[8] = {
            B11010,
            B01011,
            B11010,
            B10011,
            B11010,
            B01100,
            B10010,
            B01100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 64) //64!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11001,
            B01001,
            B11011,
            B10001,
            B11001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 65) //65!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11011,
            B01011,
            B11111,
            B10011,
            B11011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 66) //66!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11001,
            B01011,
            B11001,
            B10011,
            B11001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 67) //67!
    {
        byte a_1[8] = {
            B11001,
            B01011,
            B11001,
            B10011,
            B11001,
            B00000,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 68) //68!
    {
        byte a_1[8] = {
            B11001,
            B01011,
            B11001,
            B10011,
            B11001,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 69) //69!
    {
        byte a_1[8] = {
            B11001,
            B01011,
            B11001,
            B10011,
            B11001,
            B00110,
            B01001,
            B00110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 70) //70!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B01110,
            B01000,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 71) //71!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B01110,
            B01000,
            B01110,
            B00000,
            B01010,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 72) //72!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B01110,
            B01000,
            B01110,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 73) //73!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B01110,
            B01000,
            B01110,
            B00000,
            B11111,
            B01010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 74) //74!
    {
        byte a_1[8] = {
            B01110,
            B00010,
            B01110,
            B01000,
            B01110,
            B00000,
            B11111,
            B00000,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 75) //75!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01101,
            B00101,
            B01101,
            B01001,
            B01101,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 76) //76!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B11010,
            B11011,
            B00010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 77) //77!
    {
        byte a_1[8] = {
            B00000,
            B00010,
            B11010,
            B11011,
            B00010,
            B00010,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 78) //78!
    {
        byte a_1[8] = {
            B11010,
            B11011,
            B00000,
            B00111,
            B00001,
            B00111,
            B00100,
            B00111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 79) //79!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B00011,
            B11011,
            B11011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 80) //80!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B00011,
            B11001,
            B11011,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 81) //81!
    {
        byte a_1[8] = {
            B00001,
            B00011,
            B11001,
            B11011,
            B00001,
            B00001,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 82) //82!
    {
        byte a_1[8] = {
            B00001,
            B11011,
            B11001,
            B00011,
            B00001,
            B01100,
            B10010,
            B01100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 83) //83!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B01010,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 84) //84!
    {
        byte a_1[8] = {
            B01110,
            B01010,
            B01110,
            B00100,
            B01110,
            B00000,
            B01110,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 85) //85!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B01010,
            B01110,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 86) //86!
    {
        byte a_1[8] = {
            B01110,
            B01010,
            B01110,
            B00000,
            B11111,
            B00100,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 87) //87!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B00010,
            B11010,
            B11010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 88) //88!
    {
        byte a_1[8] = {
            B00000,
            B00010,
            B11010,
            B11010,
            B00010,
            B00010,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 89) //89!
    {
        byte a_1[8] = {
            B00010,
            B11010,
            B11010,
            B00000,
            B00100,
            B01110,
            B00100,
            B01010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 90) //90!
    {
        byte a_1[8] = {
            B00000,
            B01010,
            B01110,
            B01010,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 91) //91!
    {
        byte a_1[8] = {
            B00000,
            B01010,
            B01110,
            B01010,
            B01110,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 92) //92!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B10101,
            B11101,
            B10101,
            B11101,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 93) //93!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B01010,
            B01011,
            B10110,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 94) //94!
    {
        byte a_1[8] = {
            B00000,
            B01010,
            B01011,
            B10110,
            B00010,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 95) //95!
    {
        byte a_1[8] = {
            B00000,
            B01010,
            B01011,
            B10110,
            B00010,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 96) //96!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B01011,
            B01011,
            B10111,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 97) //97!
    {
        byte a_1[8] = {
            B00011,
            B01011,
            B01011,
            B10111,
            B00000,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 98) //98!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B01001,
            B01011,
            B10101,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 99) //99!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B01011,
            B10101,
            B00001,
            B00000,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 100) //100!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B01011,
            B10101,
            B00001,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 101) //101!
    {
        byte a_1[8] = {
            B01001,
            B01011,
            B10100,
            B00111,
            B00001,
            B00111,
            B00100,
            B00111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 102) //102!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B01011,
            B10101,
            B00001,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 103) //103!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00100,
            B00100,
            B01010,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 104) //104!
    {
        byte a_1[8] = {
            B00100,
            B00100,
            B01010,
            B00100,
            B11111,
            B00000,
            B01111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 105) //105!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00100,
            B00100,
            B01010,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 106) //106!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00000,
            B00100,
            B00100,
            B01010,
            B00000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 107) //107!
    {
        byte a_1[8] = {
            B00100,
            B01010,
            B00000,
            B11111,
            B01010,
            B01110,
            B01010,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 108) //108!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B01001,
            B01001,
            B10101,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 109) //109!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B01001,
            B10101,
            B00001,
            B00000,
            B01111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 110) //110!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B01001,
            B10101,
            B00001,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 111) //111!
    {
        byte a_1[8] = {
            B01001,
            B10101,
            B00000,
            B00111,
            B00001,
            B00111,
            B00100,
            B00111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 112) //112!
    {
        byte a_1[8] = {
            B01001,
            B01001,
            B10101,
            B00001,
            B00000,
            B11111,
            B10001,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 113) //113!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B01010,
            B10111,
            B01010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 114) //114!
    {
        byte a_1[8] = {
            B00010,
            B01010,
            B10111,
            B01010,
            B00010,
            B00000,
            B10000,
            B11110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 115) //115!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00010,
            B01011,
            B10110,
            B01011,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 116) //116!
    {
        byte a_1[8] = {
            B00010,
            B01011,
            B10110,
            B01011,
            B00010,
            B00000,
            B11110,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 117) //117!
    {
        byte a_1[8] = {
            B00010,
            B01011,
            B10110,
            B01011,
            B00010,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 118) //118!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B01001,
            B10111,
            B01001,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 119) //119!
    {
        byte a_1[8] = {
            B01001,
            B10111,
            B01001,
            B00001,
            B01010,
            B01110,
            B01010,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 120) //120!
    {
        byte a_1[8] = {
            B01001,
            B10111,
            B01001,
            B00001,
            B00000,
            B00000,
            B01010,
            B10101,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 121) //121!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B01011,
            B10101,
            B01011,
            B00001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 122) //122!
    {
        byte a_1[8] = {
            B00001,
            B01011,
            B10101,
            B01011,
            B00001,
            B00000,
            B01111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 123) //123!
    {
        byte a_1[8] = {
            B00001,
            B01011,
            B10101,
            B01011,
            B00001,
            B00000,
            B01000,
            B01111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 124) //124!
    {
        byte a_1[8] = {
            B00001,
            B01011,
            B10101,
            B01011,
            B00001,
            B00000,
            B01010,
            B10101,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 125) //125!
    {
        byte a_1[8] = {
            B00001,
            B01011,
            B10101,
            B01011,
            B00001,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 126) //126!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B10001,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 127) //127!
    {
        byte a_1[8] = {
            B01110,
            B10001,
            B01110,
            B00100,
            B11111,
            B00000,
            B10000,
            B11111
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 128) //128!
    {
        byte a_1[8] = {
            B00000,
            B01000,
            B10101,
            B01001,
            B00001,
            B01001,
            B11111,
            B00001
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 129) //129!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B10001,
            B01110,
            B00000,
            B01010,
            B11111
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 130) //130!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B10001,
            B01110,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 131) //131!
    {
        byte a_1[8] = {
            B01110,
            B10001,
            B01110,
            B00000,
            B11111,
            B00100,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 132) //132!
    {
        byte a_1[8] = {
            B01000,
            B10100,
            B01001,
            B00001,
            B11101,
            B01011,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 133) //133!
    {
        byte a_1[8] = {
            B00000,
            B01000,
            B10101,
            B01001,
            B00001,
            B11111,
            B01001,
            B01001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 134) //134!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B10001,
            B01110,
            B00000,
            B11111,
            B01010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 135) //135!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01110,
            B10001,
            B01110,
            B00000,
            B00000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 136) //136!
    {
        byte a_1[8] = {
            B01110,
            B10001,
            B01110,
            B00000,
            B11111,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 137) //137!
    {
        byte a_1[8] = {
            B01110,
            B10001,
            B01110,
            B00000,
            B11111,
            B00000,
            B01110,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 138) //138!
    {
        byte a_1[8] = {
            B01110,
            B10001,
            B01110,
            B00000,
            B11111,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 139) //139!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01001,
            B10101,
            B01001,
            B00001,
            B11111,
            B00001
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 140) //140!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B01001,
            B10101,
            B10101,
            B01001,
            B00001
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 141) //141!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B10101,
            B01001,
            B00001,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 142) //142!
    {
        byte a_1[8] = {
            B01001,
            B10101,
            B01000,
            B00111,
            B00001,
            B00111,
            B00100,
            B00111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 143) //143!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B10101,
            B01001,
            B00000,
            B11111,
            B10001,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 144) //144!
    {
        byte a_1[8] = {
            B01001,
            B10101,
            B01001,
            B00001,
            B01010,
            B01110,
            B01010,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 145) //145!
    {
        byte a_1[8] = {
            B00001,
            B01001,
            B10101,
            B01001,
            B00000,
            B00000,
            B01010,
            B10101,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 146) //146!
    {
        byte a_1[8] = {
            B00000,
            B11100,
            B01010,
            B01011,
            B10110,
            B00010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 147) //147!
    {
        byte a_1[8] = {
            B00000,
            B11100,
            B01010,
            B01011,
            B10110,
            B00000,
            B01111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 148) //148!
    {
        byte a_1[8] = {
            B11100,
            B01010,
            B01011,
            B10110,
            B00000,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 149) //149!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00011,
            B11111,
            B01011,
            B01011,
            B10111,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 150) //150!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B00001,
            B11101,
            B01011,
            B01001,
            B10101,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 151) //151!
    {
        byte a_1[8] = {
            B00001,
            B11101,
            B01011,
            B01001,
            B10101,
            B00000,
            B01111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 152) //152!
    {
        byte a_1[8] = {
            B00001,
            B11101,
            B01011,
            B01001,
            B10101,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 153) //153!
    {
        byte a_1[8] = {
            B11101,
            B01011,
            B01001,
            B10101,
            B00000,
            B11111,
            B10001,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 154) //154!
    {
        byte a_1[8] = {
            B11101,
            B01011,
            B01001,
            B10101,
            B00000,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 155) //155!
    {
        byte a_1[8] = {
            B00000,
            B01110,
            B00100,
            B00100,
            B01010,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 156) //156!
    {
        byte a_1[8] = {
            B01110,
            B00100,
            B01010,
            B00100,
            B11111,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 157) //157!
    {
        byte a_1[8] = {
            B00000,
            B01110,
            B00100,
            B00100,
            B01010,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 158) //158!
    {
        byte a_1[8] = {
            B01110,
            B00100,
            B01010,
            B00000,
            B11111,
            B00100,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 159) //159!
    {
        byte a_1[8] = {
            B01110,
            B00100,
            B01010,
            B11111,
            B00100,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 160) //160!
    {
        byte a_1[8] = {
            B01110,
            B00100,
            B01010,
            B00000,
            B11111,
            B01110,
            B10001,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 161) //161!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B11101,
            B01001,
            B01001,
            B10101,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 162) //162!
    {
        byte a_1[8] = {
            B11101,
            B01001,
            B01001,
            B10101,
            B00000,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 163) //163!
    {
        byte a_1[8] = {
            B11101,
            B01001,
            B01001,
            B10101,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 164) //164!
    {
        byte a_1[8] = {
            B11101,
            B01001,
            B10101,
            B01010,
            B01110,
            B01010,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 165) //165!
    {
        byte a_1[8] = {
            B01000,
            B11100,
            B01010,
            B01011,
            B10110,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 166) //166!
    {
        byte a_1[8] = {
            B01011,
            B11111,
            B01011,
            B10111,
            B00000,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 167) //167!
    {
        byte a_1[8] = {
            B00000,
            B01000,
            B11101,
            B01001,
            B01011,
            B10101,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 168) //168!
    {
        byte a_1[8] = {
            B01000,
            B11101,
            B01011,
            B10101,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 169) //169!
    {
        byte a_1[8] = {
            B00100,
            B01110,
            B00100,
            B01010,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 170) //170!
    {
        byte a_1[8] = {
            B01000,
            B11100,
            B01001,
            B10101,
            B01001,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 171) //171!
    {
        byte a_1[8] = {
            B00100,  
            B01110, 
            B00100,
            B01010,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 172) //172!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01001,
            B11101,
            B01001,
            B10101,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 173) //173!
    {
        byte a_1[8] = {
            B00000,  
            B01110, 
            B00010,
            B01110,
            B00010,
            B00000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 174) //174!
    {
        byte a_1[8] = {
            B00000,
            B00000,  
            B11101, 
            B00101,
            B11101,
            B00101,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 175) //175!
    {
        byte a_1[8] = {
            B00000,
            B00010,  
            B11010, 
            B10010,
            B11011,
            B10010,
            B11010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 176) //176!
    {
        byte a_1[8] = {
            B00000,
            B00011,  
            B11011, 
            B10011,
            B11011,
            B10011,
            B11011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 177) //177!
    {
        byte a_1[8] = {
            B00000,
            B00001,  
            B11001, 
            B10001,
            B11011,
            B10001,
            B11001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 178) //178!
    {
        byte a_1[8] = {
            B01110, 
            B01000,
            B01110,
            B01000,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 179) //179!
    {
        byte a_1[8] = {
            B01110, 
            B01000,
            B01110,
            B01000,
            B01110,
            B00000,
            B00000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 180) //180!
    {
        byte a_1[8] = {
            B00000, 
            B11111,
            B01010,
            B01010,
            B11111,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 181) //181!
    {
        byte a_1[8] = {
            B00000, 
            B11111,
            B01010,
            B01010,
            B11111,
            B00000,
            B01010,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 182) //182!
    {
        byte a_1[8] = {
            B11111,
            B01010,
            B11111,
            B00000,
            B11111,
            B00100,
            B01110,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 183) //183!
    {
        byte a_1[8] = {
            B00000, 
            B11111,
            B01010,
            B01010,
            B11111,
            B00000,
            B00000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 184) //184!
    {
        byte a_1[8] = {
            B00000, 
            B01010,
            B11110,
            B01011,
            B10110,
            B01010,
            B00010,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 185) //185!
    {
        byte a_1[8] = {
            B01000,
            B11110,
            B01011,
            B10110,
            B01010,
            B00000,
            B11111,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 186) //186!
    {
        byte a_1[8] = {
            B01000,
            B11110,
            B01011,
            B10110,
            B01010,
            B00000,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 187) //187!
    {
        byte a_1[8] = {
            B01000,
            B11110,
            B01011,
            B10110,
            B01010,
            B00000,
            B01110,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 188) //188!
    {
        byte a_1[8] = {
            B00000,
            B01000,
            B11100,
            B01011,
            B10111,
            B01011,
            B00011,
            B00011,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 189) //189!
    {
        byte a_1[8] = {
            B01000,
            B11100,
            B01011,
            B10111,
            B01011,
            B00100,
            B01010,
            B00100,
            
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 190) //190!
    {
        byte a_1[8] = {
            B01000,
            B11100,
            B01011,
            B10110,
            B01011,
            B00100,
            B01010,
            B00100,
            
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 191) //191!
    {
        byte a_1[8] = {
            B01001,
            B11101,
            B01011,
            B10101,
            B01001,
            B00000,
            B01110,
            B01110,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 192) //192!
    {
        byte a_1[8] = {
            B01001,
            B11101,
            B01011,
            B10101,
            B01011,
            B00001,
            B10000,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 193) //193!
    {
        byte a_1[8] = {
            B01000,
            B11101,
            B01011,
            B10101,
            B01011,
            B00100,
            B01010,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 194) //194!
    {
        byte a_1[8] = {
            B00100,
            B11111,
            B01110,
            B10001,
            B01110,
            B00000,
            B00100,
            B11111,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 195) //195!
    {
        byte a_1[8] = {
            B01000,
            B11100,
            B01010,
            B10110,
            B01011,
            B01010,
            B11110,
            B00010,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 196) //196!
    {
        byte a_1[8] = {
            B00100,
            B01110,
            B00100,
            B01010,
            B00100,
            B00000,
            B11111,
            B00100,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
    else if (i == 197) //197!
    {
        byte a_1[8] = {
            B00000,
            B00000,
            B01001,
            B11101,
            B01001,
            B10101,
            B01001,
            B00001,
        };
        lcd.createChar(n, a_1);
        lcd.setCursor(n - 1, 0);
        lcd.write(byte(n));
    }
}

#endif