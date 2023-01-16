#include <iostream>
#include <dos.h>
#include "wave.h"
#include "menu.h"

using namespace std;

void Menu()
{

    cout<<"1.Sinus"<<endl<<"2.Cosinus"<<endl<<"3.Tangenta"<<endl<<"4.Cotangenta"<<endl<<"5.Comparatii"<<endl<<"6.Iesire"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
    {
        cout<<"1";
        Window();
        sinus();
        Close();
        system("CLS");
        Menu();
        break;
    }
    case 2:
    {
        cout<<"2";
        Window();
        cosinus();
        Close();
        system("CLS");
        Menu();
        break;
    }
    case 3:
    {
        cout<<"3";
        Window();
        tangenta();
        Close();
        system("CLS");
        Menu();
        break;
    }
    case 4:
    {
        cout<<"4";
        Window();
        cotangenta();
        Close();
        system("CLS");
        Menu();
        break;
    }
    case 5:
    {
        cout<<"5";
        system("CLS");
        Menu2();
        system("CLS");
        Menu();
        break;
    }
    case 7:
        {
            system("CLS");
            FuncPick();
            Close;
            system("CLS");
            Menu();
            break;
        }
    default:
    {
        cout<<"6";
        Window();
        SectorLines();
        Close();
        system("CLS");
        break;
    }
    }
}

int main()
{
    Menu();
    return 0;
}
