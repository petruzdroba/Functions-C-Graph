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
    line(300,0, 300, getmaxy());
}

void test()
{
    DWORD SW=GetSystemMetrics(SM_CXSCREEN);
    DWORD SH=GetSystemMetrics(SM_CYSCREEN);
    initwindow(SW,SH,"",-3,-3);
    GuideLines();

    double x, y, px=0,py=0;
    int angle=31;
    for(x=0; x<=getmaxx(); x+=3)
    {
        y=50*sin(angle*3.141*90);
        y=getmaxy()-y-getmaxy()/2;
        putpixel(x,y,GREEN);
        setcolor(GREEN);
        if(px && py)
        {
            line(x,y,px,py);
            //line(x+1,y+1,px+1,py+1);
        }
        //delay(2);
        px=x, py=y;
        angle+=5;
    }
    px=0,py=0;
    angle=90;
    for(x=0; x<=getmaxx(); x+=3)
    {
        y=50*cos(angle*3.141*90);
        y=getmaxy()-y-getmaxy()/2;
        putpixel(x,y,BLUE);
        setcolor(RED);
        if(px && py)
        {
            line(x,y,px,py);
            //line(x+1,y+1,px+1,py+1);
        }
        //delay(1);
        px=x, py=y;
        angle+=5;
    }

    getch();
    closegraph();
}

void sinus()
{

    DWORD SW=GetSystemMetrics(SM_CXSCREEN);
    DWORD SH=GetSystemMetrics(SM_CYSCREEN);
    initwindow(SW,SH,"",-3,-3);
    GuideLines();

    double x, y, px=0,py=0;
    int angle=31;
    for(x=0; x<=getmaxx(); x+=3)
    {
        y=50*sin(angle*3.141*90);
        y=getmaxy()-y-getmaxy()/2;
        putpixel(x,y,GREEN);
        setcolor(GREEN);
        if(px && py)
        {
            line(x,y,px,py);
            line(x+1,y,px+1,py);
        }
        delay(2);
        px=x, py=y;
        angle+=5;
    }

    getch();
    closegraph();
}

void cosinus()
{

    DWORD SW=GetSystemMetrics(SM_CXSCREEN);
    DWORD SH=GetSystemMetrics(SM_CYSCREEN);
    initwindow(SW,SH,"",-3,-3);
    GuideLines();

    double x,y, px=0,py=0;
    int angle=90;
    for(x=0; x<=getmaxx(); x+=3)
    {
        y=50*cos(angle*3.141*90);
        y=getmaxy()-y-540;
        putpixel(x,y,BLUE);
        setcolor(RED);
        if(px && py)
        {
            line(x,y,px,py);
            line(x+1,y,px+1,py);
        }
        delay(5);
        px=x, py=y;
        angle+=5;
    }

    getch();
    closegraph();
}
void tangenta()
{
    DWORD SW=GetSystemMetrics(SM_CXSCREEN);
    DWORD SH=GetSystemMetrics(SM_CYSCREEN);
    initwindow(SW,SH,"",-3,-3);
    GuideLines();

    double x,y;
    int angle=36;
    for(x=0; x<=getmaxx(); x+=3)
    {
        y=50*(cos(angle*3.141*90)/sin(angle*3.141*90));
        y=getmaxy()-y-540;
        putpixel(x,y,YELLOW);
        putpixel(x,y+1,YELLOW);
        putpixel(x,y+2,YELLOW);
        delay(3);
        angle+=2;
    }

    getch();
    closegraph();
}

void cotangenta()
{
    DWORD SW=GetSystemMetrics(SM_CXSCREEN);
    DWORD SH=GetSystemMetrics(SM_CYSCREEN);
    initwindow(SW,SH,"",-3,-3);
    GuideLines();

    double x,y;
    int angle=36;
    for(x=0; x<=getmaxx(); x+=3)
    {
        y=50*tan(angle*3.141*90);
        y=getmaxy()-y-540;
        putpixel(x,y,YELLOW);
        putpixel(x,y+1,YELLOW);
        putpixel(x,y+2,YELLOW);
        delay(3);
        angle+=2;
    }

    getch();
    closegraph();
}
