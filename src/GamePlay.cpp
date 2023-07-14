#include<iostream>
using namespace std;
#include "rlutil.h"

#include "GamePlay.h"
#include "Personaje.h"
#include "Escenario.h"

bool GamePlay::GameLoop(){

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

player1.addNombre(nombreJugador);

/// introduccion:

cout<<"\n\tDespiertas a las afueras de un castillo...\n";


// objeto primer escenario:
Escenario primerEscenario;
// constructor:
while(primerEscenario.EscenarioMedieval(player1));

cout<<"\n\tBANDERA\n";
// objeto de ecenario recibe false o true:
}
