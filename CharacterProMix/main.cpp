#include <iostream>
#include <stdio.h>
#include "sompod_magic.h"
#include <chrono>
#include <thread>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    int d = 2;
    int k = 5 / 2 + 1;
    int m = 1;
    int r = 1;
    int v = 1;
    int w = 5; // value of row
    Sleep(1500);
    for(int i=1 ; i<=2; i++) // this loop for style
    {
        cout << "\t";
        for(int j=1; j<=150; j++)
        {
            cout << "$";
        }
        cout << endl << endl;
    }
    Sleep(1500);
    for(int i=1; i<=5; i++) // this loop for print HAPPY
    {
        cout << "\t\t\t\t\t\t\t";
        gm_H(5,i);
        gm_A(5,i);
        gm_P(5,i);
        gm_P(5,i);
        gm_Y(5,i);
        printf("\n");
    }

    cout<<endl;
    Sleep(1500);
    for(int i=1; i<=5; i++) // this loop for print NEW
    {
        cout << "\t\t\t\t\t\t\t\t  ";
        gm_N(5,i);
        gm_E(5,i);
        w = gm_W(5,i,w);
        printf("\n");
    }

    cout<<endl;
    Sleep(1500);
    for(int i=1; i<=5; i++) // this loop for print year
    {
        cout << "\t\t\t\t\t\t\t      ";
        gm_Y(5,i);
        gm_E(5,i);
        gm_A(5,i);
        r = gm_R(5,i,r);
        printf("\n");
    }
    Sleep(1500);
    cout << endl;
    for(int i=1; i<=5; i++) // this loop for print the 2020
    {
        cout << "\t\t\t\t\t\t\t    ";
        gm_2(5,i);
        gm_0(5,i);
        gm_2(5,i);
        gm_0(5,i);
        printf("\n");
    }
    cout << endl;
    cout << "\t\t\t\t\t\t\t Happy Coding :)" << endl<<endl;
    Sleep(1500);
    for(int i=1 ; i<=2; i++) // this loop for style
    {
        cout << "\t";
        for(int j=1; j<=150; j++)
        {
            cout << "$";
        }
        cout << endl << endl;
    }
    Sleep(1500);
    cout << "\t\t Coder : GM_SOMPOD Date: 01/01/2020"<<endl<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
