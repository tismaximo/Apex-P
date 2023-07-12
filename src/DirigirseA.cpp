#include<iostream>
#include<ctime>
using namespace std;
#include "rlutil.h"
#include "HerramientasApexP.h"
#include "Personaje.h"

#include "DirigirseA.h"

void DirigirseA::EventoRandom(Personaje&jugador){

DirigirseA eventoRandom;

switch(GenerarNumeroAleatorio(1,1)){
case 1 : eventoRandom.PrincesaEnApuros(jugador);
case 2 : _nombreEvento="la fruta del olvido.";
case 3 : _nombreEvento="Soldado del paso.";
case 4 : _nombreEvento="Evento de justas.";
case 5 : _nombreEvento="Merlin o Mierdin?";
case 6 : _nombreEvento="El lesionado.";
case 7 : _nombreEvento="Harley Quinn.";
case 8 : _nombreEvento="Totem en el camino.";
case 9 : _nombreEvento="Los enamorados.";
case 10: _nombreEvento="Lo que tu digas, Doc.";
}
}

void DirigirseA::PrincesaEnApuros(Personaje&jugador){

int eleccion;

system("cls");

cout<<"\n\t\tPrincesa en apuros!\n";

cout<<"                 __ \n";
cout<<"                /__`. \n";
cout<<"               / \\ `\\\\ \n";
cout<<"              /   \\  `\\ \n";
cout<<"             /     \\   \\ \n";
cout<<"            /_______\\  /\\ \n";
cout<<"            (((( )))) \n";
cout<<"           (((' . '))) \n";
cout<<"           (((\\_-_/))) \n";
cout<<"           (((_) (_))) \n";
cout<<"          /((( \\ / )))\\ \n";
cout<<"         / (((  ^  ))) \\ \n";
cout<<"        / / ((  ^  )) \\ \\ \n";
cout<<"       ( (   \\  ^  /   ) ) \n";
cout<<"        \\ \\   )www(   / / \n";
cout<<"         `\\\\ /     \\ //' \n";
cout<<"           /'       `\\ \n";
cout<<"          /           \\ \n";
cout<<"         /             \\ \n";
cout<<"        /               \\ \n";
cout<<"       /                 \\ \n";



cout<<"Un principe que por las noches de luna llena\n";
cout<<"se convierte en una bella princesa\n";
cout<<"te pide que le hagas compania.\n";
cout<<"\tAceptas la solicitud?\t";
cout<<"1 - si / 2 - no";
cin>>eleccion;

switch(eleccion){
case 1: jugador.setInteligencia(GenerarNumeroAleatorio(1,3));break;
case 2: jugador.takeInteligencia(GenerarNumeroAleatorio(1,3));break;
}
}

void DirigirseA::laFrutaDelOlvido(Personaje&jugador){

}


void DirigirseA::Camino(Personaje&jugador){
}
void DirigirseA::NPC(Personaje&jugador){
}



//setters:

