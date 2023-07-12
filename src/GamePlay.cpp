#include<iostream>
using namespace std;
#include "rlutil.h"

#include "GamePlay.h"
#include "Personaje.h"

bool GamePlay::GameLoop(){
/*
    bool _gameLoop;
    int _cmd;
    int _update;
    int _draw;
*/

string nombreJugador;
int tipoHeroe;

cout<<"\nNombre: ";
cin>>nombreJugador;
cout<<"\nTipo de Apex:\n";
cout<<"\n1 - Aldeano.\n2 - Guerrero.\n3 - Mago.\n4 - Comerciante.\n5 - Ladron.\n6 - Elfo.\n";
cin>>tipoHeroe;



Personaje player1;

switch(tipoHeroe){
case 1:player1.PersonajeAldeano();break;
case 2:player1.PersonajeFuerza();break;
case 3:player1.PersonajeMagia();break;
case 4:player1.PersonajeComerciante();break;
case 5:player1.PersonajeLadron();break;
case 6:player1.PersonajeElfo();break;
}

player1.setNombre(nombreJugador);

// Funcion de stats:

cout<<"\n\tSTATS:\n";

cout<<"\n\tNombre: "<<player1.getNombre();
cout<<"\n\tClase: "<<player1.getClase();
cout<<"\n\tVida: "<<player1.getVida();
cout<<"\n\tStamina: "<<player1.getStamina();
cout<<"\n\tFuerza: "<<player1.getFuerza();
cout<<"\n\tAgilidad: "<<player1.getAgilidad();
cout<<"\n\tInteligencia: "<<player1.getInteligencia();
cout<<"\n\tMana: "<<player1.getMana();
cout<<"\n\tMana: "<<player1.getMana();

rlutil::anykey();


/// introduccion:

cout<<"\n\tDespiertas a las afueras de un castillo...\n";


/// Eventos o personajes:
//  cmd:
int camino;

while(true){

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

switch(camino){
case 1:cout<<"\nACA VA UN CAMINO";break;
case 2:cout<<"\nACA VA UN EVENTO";break;
case 3:cout<<"\nACA VA UN CAMINO";break;
case 4:cout<<"\nACA VA UN NPC";break;
}
}
return false;
}
