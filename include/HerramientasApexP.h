#ifndef HERRAMIENTASAPEXP_H_INCLUDED
#define HERRAMIENTASAPEXP_H_INCLUDED

#include <ctime>

/// Numero aleatorio:
int GenerarNumeroAleatorio(int minimo, int maximo){
srand(time(0));
int numeroAleatorio=minimo+(rand()%(maximo-minimo+1));
return numeroAleatorio;
}

#endif // HERRAMIENTASAPEXP_H_INCLUDED
