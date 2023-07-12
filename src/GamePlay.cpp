#include<iostream>
using namespace std;
#include "rlutil.h"

#include "GamePlay.h"
#include "Personaje.h"
#include "Escenario.h"

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
/*
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
*/

/// introduccion:

cout<<"\n\tDespiertas a las afueras de un castillo...\n";


// objeto primer escenario:
Escenario primerEscenario;
// constructor:
while(primerEscenario.EscenarioMedieval(player1));

cout<<"\n\tBANDERA\n";
// objeto de ecenario recibe false o true:
}
