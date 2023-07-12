#include<iostream>
#include<ctime>
using namespace std;
#include "rlutil.h"
#include "HerramientasApexP.h"
#include "AnimacionesEventos.h"

#include "Personaje.h"

#include "DirigirseA.h"

void DirigirseA::EventoRandom(Personaje&jugador){

DirigirseA eventoRandom;

switch(GenerarNumeroAleatorio(1,3)){
case 1 : eventoRandom.PrincesaEnApuros(jugador);break;
case 2 : eventoRandom.laFrutaDelOlvido(jugador);break;
case 3 : eventoRandom.SoldadoDelPaso(jugador);break;
case 4 : _nombreEvento="Evento de justas.";break;
case 5 : _nombreEvento="Merlin o Mierdin?";break;
case 6 : _nombreEvento="El lesionado.";break;
case 7 : _nombreEvento="Harley Quinn.";break;
case 8 : _nombreEvento="Totem en el camino.";break;
case 9 : _nombreEvento="Los enamorados.";break;
case 10: _nombreEvento="Lo que tu digas, Doc.";break;
}
}

void DirigirseA::PrincesaEnApuros(Personaje&jugador){

int eleccion;

ANIMACIONESPrincesaEnApuros();

cout<<"1 - si / 2 - no";
cin>>eleccion;

if(GenerarNumeroAleatorio(1,2)%2!=0){
    switch(eleccion){
        case 1: jugador.setInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas ganado inteligencia!\n";break;
        case 2: jugador.takeInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas perdido inteligencia!\n";break;
}
}
else{
    switch(eleccion){
        case 1: jugador.takeInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas perdido inteligencia!\n";break;
        case 2: jugador.setInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas ganado inteligencia!\n";break;
}
}
cout<<"CONTINUAR";
rlutil::anykey();
}

void DirigirseA::laFrutaDelOlvido(Personaje&jugador){

int eleccion;

ANIMACIONESLaFrutaDelOlvido();

cout<<"aceptas? (si - 1 / no - 2)";
cin>>eleccion;
switch(eleccion){
case 1: if(GenerarNumeroAleatorio(1,10)%2!=0){
        jugador.setChi(GenerarNumeroAleatorio(1,3)); cout<<"\n\t Has ganado Chi!\n";}
        else {jugador.takeChi(1); cout<<"\n\tHas perdido Chi!\n";}break;
case 2:break;
}
cout<<"CONTINUAR.";
rlutil::anykey();
}

void DirigirseA::SoldadoDelPaso(Personaje&jugador){

int eleccion;

ANIMACIONESSoldadoDelPaso();

cout<<"aceptas? (si - 1 / no - 2)";
cin>>eleccion;
switch(eleccion){
case 1: if(GenerarNumeroAleatorio(1,10)%2!=0){
        jugador.setFuerza(GenerarNumeroAleatorio(1,3)); cout<<"\n\t Has ganado Fuerza!\n";}
        else {jugador.takeFuerza(GenerarNumeroAleatorio(1,3)); cout<<"\n\tHas perdido Fuerza!\n";}break;
case 2: jugador.takeStamnia(GenerarNumeroAleatorio(1,2)); cout<<"\n\tHas perdido Stamina.\n";break;
}
cout<<"CONTINUAR.";
rlutil::anykey();
}

void DirigirseA::Camino(Personaje&jugador){
}
void DirigirseA::NPC(Personaje&jugador){
}



//setters:

