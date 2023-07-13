#include<iostream>
using namespace std;

#include "Menu.h"
#include "rlutil.h"
#include "Minijuegos.h"
#include "GamePlay.h"

int MenuPrincipal(){

Minijuegos minijuego;

rlutil::hidecursor();

AnimacionMenuPrincipal();

int columnaX=33;
int filaY=29;
int velocidad=10;
GamePlay iniciarPartida;

bool eleccion=true;
while(eleccion){
gotoxy(columnaX, filaY);
cout<<" ";
gotoxy(columnaX, filaY+2);
cout<<(char)175;
gotoxy(columnaX, filaY+4);
cout<<" ";

gotoxy(46, filaY);
cout<<" ";
gotoxy(46, filaY+2);
cout<<(char)174;
gotoxy(46, filaY+4);
cout<<" ";

switch(rlutil::getkey()){
case 14: filaY-=2;if(filaY<29)filaY=29;break;
case 15: filaY+=2;if(filaY>39)filaY=39;break;
case 0 : system("cls");eleccion=false;break;
case 1 : switch(filaY){
case 29: system("cls");iniciarPartida.GameLoop();break;/*Iniciar partida*/
case 31: system("cls");break;/*Opciones*/
case 33: system("cls");

         break;
         /*Creditos*/
case 35: system("cls");break;/*Lore*/
case 37: system("cls");eleccion=false;break;/*Salir*/
case 39:
        system("cls");
        minijuego.carreraDeCaballos();
        break;
            }
        }
    }
}
