#include<iostream>
#include<ctime>
using namespace std;
#include "rlutil.h"
#include "HerramientasApexP.h"
#include "AnimacionesEventos.h"
#include "Minijuegos.h"
#include "Personaje.h"

#include "DirigirseA.h"

void DirigirseA::EventoRandom(Personaje&jugador){

DirigirseA eventoRandom;

switch(GenerarNumeroAleatorio(1,4)){
case 1 : eventoRandom.PrincesaEnApuros(jugador);break;
case 2 : eventoRandom.laFrutaDelOlvido(jugador);break;
case 3 : eventoRandom.SoldadoDelPaso(jugador);break;
case 4 : eventoRandom.CarreraDeCaballos(jugador);break;
case 5 : _nombreEvento="Evento de justas.";break;
case 6 : _nombreEvento="Merlin o Mierdin?";break;
case 7 : _nombreEvento="El lesionado.";break;
case 8 : _nombreEvento="Harley Quinn.";break;
case 9 : _nombreEvento="Totem en el camino.";break;
case 10: _nombreEvento="Los enamorados.";break;
case 11: _nombreEvento="Lo que tu digas, Doc.";break;

}
}

void DirigirseA::PrincesaEnApuros(Personaje&jugador){

int eleccion;

ANIMACIONESPrincesaEnApuros();

cout<<"1 - si / 2 - no";
cin>>eleccion;
if(GenerarNumeroAleatorio(1, 2)%2!=0){
    switch(eleccion){
        case 1: jugador.addInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas ganado inteligencia!\n";break;
        case 2: jugador.takeInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas perdido inteligencia!\n";break;
}
}
else{
    switch(eleccion){
        case 1: jugador.takeInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas perdido inteligencia!\n";break;
        case 2: jugador.addInteligencia(GenerarNumeroAleatorio(1,3));cout<<"\n\tHas ganado inteligencia!\n";break;
}
}
if (jugador.getInteligencia() < 0) {
    jugador.addInteligencia(abs(jugador.getInteligencia()));
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
        jugador.addChi(GenerarNumeroAleatorio(1,3)); cout<<"\n\t Has ganado Chi!\n";}
        else {jugador.takeChi(1); cout<<"\n\tHas perdido Chi!\n";}break;
case 2:break;
}
if (jugador.getChi() < 0) {
    jugador.addChi(abs(jugador.getChi()));
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
        jugador.addFuerza(GenerarNumeroAleatorio(1,3)); cout<<"\n\t Has ganado Fuerza!\n";}
        else {jugador.takeFuerza(GenerarNumeroAleatorio(1,3)); cout<<"\n\tHas perdido Fuerza!\n";}break;
case 2: jugador.takeStamina(GenerarNumeroAleatorio(1,2)); cout<<"\n\tHas perdido Stamina.\n";break;
}
if (jugador.getFuerza() < 0) {
    jugador.addFuerza(abs(jugador.getFuerza()));
}
if (jugador.getStamina() < 0) {
    jugador.addStamina(abs(jugador.getStamina()));
}
cout<<"CONTINUAR.";
rlutil::anykey();
}
void DirigirseA::CarreraDeCaballos(Personaje&jugador){
    Minijuegos minijuego;
    Personaje jinete;
    jinete.NpcJinete();
    ANIMACIONESCarreraDeCaballos();
    int eleccion;
    cin>>eleccion;
    if (eleccion = 1) {
        int ganador = minijuego.carreraDeCaballos();
        if (ganador = 1) {
            jugador.intercambioFuerza(jinete, jugador, 5);
            cout << "Has ganado fuerza!" << endl;
            jugador.takeInteligencia(GenerarNumeroAleatorio(1,2));
            cout << "Has perdido inteligencia!" << endl;
            cout << "El jinete ha perdido fuerza!" << endl;
        }
        else {
            jugador.intercambioFuerza(jugador, jinete, 5);
            cout << "Has perdido fuerza!" << endl;
            jugador.takeInteligencia(GenerarNumeroAleatorio(1,2));
            cout << "Has perdido inteligencia!" << endl;
            cout << "El jinete ha ganado fuerza!" << endl;
        }
    }
    else {
        jugador.addInteligencia(GenerarNumeroAleatorio(1,2));
        cout << "Has ganado inteligencia!" << endl;
    }
    rlutil::msleep(2500);
    cout<<"CONTINUAR.";
    rlutil::anykey();
}

void DirigirseA::Camino(Personaje&jugador){
}
void DirigirseA::NPC(Personaje&jugador){
}



//setters:

