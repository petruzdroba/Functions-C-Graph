#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <dos.h>

using namespace std;

void GuideLines()
{
    line(0,getmaxy()/2, getmaxx(), getmaxy()/2);
    line(290,0, 290, getmaxy());
}

void Window()
{
    DWORD SW=GetSystemMetrics(SM_CXSCREEN);
    DWORD SH=GetSystemMetrics(SM_CYSCREEN);
    initwindow(SW,SH,"",-3,-3);
}

void Close()
{
    getch();
    closegraph();
}

void SectorLines()
{
    GuideLines();
    setcolor(DARKGRAY);
    for(int i=0; i<=getmaxy(); i+=50)
    {
        line(0,-10+i,getmaxx(),-10+i);
    }
    for(int i=0; i<=getmaxx(); i+=50)
    {
        line(-10+i,0,-10+i,getmaxy());
    }
    setcolor(WHITE);
    GuideLines();
}

void sinus()
{
    setcolor(WHITE);
        GuideLines();
    double x, y, px=0,py=0;
    int angle=45;
    for(x=0; x<=getmaxx() && !kbhit(); x+=6)
    {
        y=50*sin(angle*3.141*90);
        y=getmaxy()-y-getmaxy()/2;
        putpixel(x,y,GREEN);
        setcolor(GREEN);
        setlinestyle(SOLID_LINE,0,2);
        if(px && py)
        {
            line(x,y,px,py);
        }
        delay(5);
        px=x, py=y;
        angle+=10;
    }
}

void cosinus()
{
        GuideLines();
    double x,y, px=0,py=0;
    int angle=100;
    for(x=0; x<=getmaxx()&& !kbhit(); x+=6)
    {
        y=50*cos(angle*3.141*90);
        y=getmaxy()-y-540;
        putpixel(x,y,BLUE);
        setcolor(RED);
        setlinestyle(SOLID_LINE,0,2);
        if(px && py)
        {
            line(x,y,px,py);
        }
        delay(5);
        px=x, py=y;
        angle+=10;
    }
}
void tangenta()
{
        GuideLines();
    double x,y,px, py=getmaxy()/2;
    int angle=90;
    for(x=0; x<=getmaxx()&& !kbhit(); x+=2.5)
    {
        y=50*(cos(angle*3.141*90)/sin(angle*3.141*90));
        y=getmaxy()-y-540;
        putpixel(x,y,YELLOW);
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE,0,2);
        if(px && py && !(y>=getmaxy()/2 && py<=getmaxy()/2))
        {
            line(x,y,px,py);
            line(x+1,y,px+1,py);
        }
        delay(1);
        px=x;
        py=y;
        angle+=1;
    }
}

void cotangenta()
{
        GuideLines();
    double x,y,px=0,py=getmaxy()/2;
    int angle=90;
    for(x=0; x<=getmaxx() && !kbhit(); x+=2.5)
    {
        y=50*tan(angle*3.141*90);
        y=getmaxy()-y-540;
        putpixel(x,y,YELLOW);
        setcolor(9);
        setlinestyle(SOLID_LINE,0,2);
        if(px && py && !(y<=getmaxy()/2 && py>=getmaxy()/2))
        {
            line(x,y,px,py);
            line(x+1,y,px+1,py);
        }
        delay(1);
        px=x;
        py=y;
        angle+=1;
    }
}


