#include <iostream>
#include <fstream>

using namespace std;

void Menu2()
{
    system("CLS");
    cout<<"1.Sinus & Cosinus"<<endl<<"2.Tangenta & Cotangenta"<<endl<<"3.Return"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
        Window();
        sinus();
        setcolor(WHITE);
        cosinus();
        Close();
        system("CLS");
        Menu2();
        break;
    }
    case 2:
    {
        Window();
        tangenta();
        setcolor(WHITE);
        cotangenta();
        Close();
        system("CLS");
        Menu2();
        break;
    }
    default:
    {
        system("CLS");
        break;
    }
    }
}

void TransformareX(int &x)
{
    ifstream in("ValX.in");
    int valTR[21];
    for(int i=0; i<21; i++)
        in>>valTR[i];
    if(x>=0)
        x=valTR[x];
    else x=valTR[(-1*x)+10];
}

void TransformareY(int &y)
{
    ifstream in("ValY.in");
    int valTR[21];
    for(int i=0; i<21; i++)
        in>>valTR[i];
    if(y>=0)
        y=valTR[y];
    else y=valTR[(-1*y)+15];
}

void FuncPick()
{
    system("CLS");
    cout<<"Cate puncte vreti sa reprezentati?"<<endl;
    int nrpuncte;
    cin>>nrpuncte;
    system("CLS");
    cout<<"Introduceti x(-5,15) si y(-10,10) pt cele "<<nrpuncte<<"puncte alese"<<endl;
    int puncte[nrpuncte*2+1];
    for(int i=1; i<=nrpuncte*2; i++)
        cin>>puncte[i];
    Window();
    SectorLines();
    for(int i=1; i<=nrpuncte*nrpuncte; i+=2)
    {
        TransformareY(puncte[i]);
        TransformareX(puncte[i+1]);
        putpixel(puncte[i],puncte[i+1],9);
        setcolor(LIGHTRED);
        setlinestyle( DASHED_LINE,0,2);
        line(0,puncte[i+1],puncte[i],puncte[i+1]);
        line(puncte[i],puncte[i+1],puncte[i],getmaxy());
        setcolor(GREEN);
        rectangle(puncte[i]-5,puncte[i+1]-5,puncte[i]+5,puncte[i+1]+5);
        delay(4);
        if(i-2>0)
        {
            setcolor(9);
            setlinestyle(SOLID_LINE,0,2);
            line(puncte[i],puncte[i+1],puncte[i-2],puncte[i-1]);
        }
    }
    delay(1000);
}

void Logo()
{
    Window();
    readimagefile("1.jpg",690,190,1090,540);
    setcolor(RED);
    settextstyle( BOLD_FONT, HORIZ_DIR, 10);
    outtextxy(740,540,"WAVE");
    delay(3000);
    closegraph();
}
