
#include "TXLib.h"
void drawSky()
{  //����
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 800, 400);
 }

void drawTrava()
{ // ����� � ��������
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 390, 800, 600);
    }

void drawSun()
{ // ������
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x, 60, 50);
    }

void drawClowd()
{ //������
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (280, 160, 640, 230);
    }

void drawDom()
{ //���

    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    txRectangle (460, 320, 760, 570);
}

void drawKrysha()
{ // �����
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    POINT kryha[3] = {{460, 320}, {610, 160}, {760, 320}};
    txPolygon (kryha, 3);
    }



int main()
{
    txCreateWindow (800, 600);

    int xSun = 150;

    while(xSun<800)

    drawSky();
    drawTrava();
    drawSun(xSun);
    drawClowd();
    drawDom();
    drawKrysha();


    txSleep(20);

    xSun = xSun + 1;

}









    txTextCursor (false);
    return 0;
    }

