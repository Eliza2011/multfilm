
#include "TXLib.h"
void drawSky()
{  //небо
    txSetColor (TX_LIGHTCYAN);
    txSetFillColor (TX_LIGHTCYAN);
    txRectangle (0, 0, 800, 400);
 }

void drawTrava()
{ // трава и горизонт
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 390, 800, 600);
    }

void drawSun(int x)
{ //солнце
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x, 60, 50);
    }

void drawClowd()
{ //облако
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (280, 160, 640, 230);
    }

void drawDom()
{ //дом
    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    txRectangle (460, 320, 760, 570);
    }

void drawWindow()
{//окно
    txSetColor (TX_LIGHTBLUE);
    txSetFillColor (TX_LIGHTBLUE);
    txRectangle (560, 390, 670, 500);
    }

void drawKrysha()
{ // крыша
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    POINT kryha[3] = {{460, 320}, {610, 160}, {760, 320}};
    txPolygon (kryha, 3);
    }



int main()
{
txCreateWindow (800, 600);

    int xSun = 150;

    while(xSun<800)

    {

    drawSky();
    drawTrava();
    drawSun(xSun);
    drawClowd();
    drawDom();
    drawWindow();
    drawKrysha();



    txSleep(10);

    xSun = xSun + 1;
    }








    txTextCursor (false);
    return 0;
}

