#include<iostream>
using namespace std;
#include "rlutil.h"

#include "Escenario.h"
#include "DirigirseA.h"

// constructores:
bool Escenario::EscenarioMedieval(Personaje&player1){


/// Eventos o personajes:
//  cmd:
int camino;

bool nivel=true;
while(nivel){

cout<<"\n\tSTATS:\n";

cout<<"\n\tNombre: "<<player1.getNombre();
cout<<"\n\tClase: "<<player1.getClase();
cout<<"\n\tVida: "<<player1.getVida();
cout<<"\n\tStamina: "<<player1.getStamina();
cout<<"\n\tFuerza: "<<player1.getFuerza();
cout<<"\n\tAgilidad: "<<player1.getAgilidad();
cout<<"\n\tInteligencia: "<<player1.getInteligencia();
cout<<"\n\tMana: "<<player1.getMana();
cout<<"\n\tChi: "<<player1.getChi();



// objeto de escenario recibe true:


cout<<"\n\tESCENARIO: Afueras del castillo.\n";

cout<<"1 - Camino 1\n";
cout<<"2 - Camino 2\n";
cout<<"3 - Camino 3\n";
cout<<"4 - Camino 4\n";

cin>>camino;
//  update:

//las opciones deben ser random.
//Nuevos eventos.

//  draw:

DirigirseA Evento;


switch(camino){
case 1:cout<<"\nACA VA UN CAMINO";break;        //Metodos random.
case 2:cout<<"\nACA VA UN EVENTO\n";Evento.EventoRandom(player1);break;
case 3:cout<<"\nACA VA UN CAMINO";break;
case 4:cout<<"\nACA VA UN NPC";break;
case 5:nivel=false;break;
default:break;
}
system("cls");
}

cout<<"\n\tFELICIDADES ERES EL APEX DE ESTA ERA!\n\t...AHORA SOLO DEBES DESCANZAR.\n";

int eleccion;
cout<<"\n1 - Guardar partida y salir.\n2 - Continuar.";
cin>>eleccion;

switch(eleccion){
case 1: return false;
case 2: return true;
}
}
// getters:
string Escenario::getEscenario(){
    return _escenario;
}
