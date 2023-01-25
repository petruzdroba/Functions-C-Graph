#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <dos.h> //pt delay
#include "wave.h"

using namespace std;

void Menu()
{
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
    {
        cout<<"1";
        sinus();
        Menu();
        break;
    }
    case 2:
    {
        cout<<"2";
        cosinus();
        Menu();
        break;
    }
    case 3:
    {
        cout<<"3";
        tangenta();
        break;
    }
    case 4:
    {
        cout<<"4";
        cotangenta();
        break;
    }
    case 5:
    {
        cout<<"5";
        break;
    }
    default:
    {
        cout<<"6";
        break;
    }
    }
}

int main()
{
    Menu();
    return 0;
}
