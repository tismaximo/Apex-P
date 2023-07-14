#include<iostream>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "Minijuegos.h"
#include<ctime>

int Minijuegos::carreraDeCaballos() {
    system("cls");
    gotoxy(10, 9);
    cout << "______________________________________________________" << endl;
    gotoxy(10, 10);
    cout << "| |                                               |0 |" << endl;
    gotoxy(10, 11);
    cout << "| |                                               | 0|" << endl;
    gotoxy(10, 12);
    cout << "| | ______________________________________________|0 |" << endl;
    gotoxy(10, 13);
    cout << "| |                                               | 0|" << endl;
    gotoxy(10, 14);
    cout << "| |                                               |0 |" << endl;
    gotoxy(10, 15);
    cout << "| | ______________________________________________| 0|" << endl;
    gotoxy(10, 16);
    cout << "| |                                               |0 |" << endl;
    gotoxy(10, 17);
    cout << "| |                                               | 0|" << endl;
    gotoxy(10, 18);
    cout << "------------------------------------------------------" << endl;
    int xJugador = 14;
    int xOponente = 14;
    gotoxy(xJugador, 12);
    cout << "1";
    gotoxy(xOponente, 15);
    cout << "2";
    gotoxy(2, 2);
    int tecla;
    int clicks = 0;
    cout << "3..." << endl;
    msleep(1000);
    gotoxy(2, 3);
    cout << "2..." << endl;
    msleep(1000);
    gotoxy(2, 4);
    cout << "1..." << endl;
    msleep(1000);
    gotoxy(2, 5);
    cout << "YA!" << endl;
    int tiempo = time(NULL);
    while (xJugador < 60 && xOponente < 60) {
        gotoxy(xJugador, 12);
        cout << "1";
        gotoxy(xOponente, 15);
        cout << "2";
        tecla = nb_getch();
        if (tecla != 0) {
            clicks++;
            if (clicks > 6) {
                gotoxy(xJugador, 12);
                cout << "_";
                xJugador += 3;
                clicks = -1;
            }
            tecla = 0;
        }
        if (time(NULL) > tiempo) {
            tiempo = time(NULL);
            gotoxy(xOponente, 15);
            cout << "_";
            xOponente += 3;
        }

    }
    gotoxy(30, 30);
    if (xJugador > xOponente) {
        cout << "Felicidades! Ganaste la carrera!" << endl;
        return 1;
    }
    else {
        cout << "Tu oponente ganó la carrera." << endl;
        return 2;
    }


}
