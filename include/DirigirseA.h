#ifndef DIRIGIRSEA_H
#define DIRIGIRSEA_H

#include "Personaje.h"

class DirigirseA
{
private:
    string _nombreEvento;
    string _nombreCamino;
    string _nombreNPC;
    int _tipo;
public:
//constructores:
    void PrincesaEnApuros(Personaje&);
    void laFrutaDelOlvido(Personaje&);
//setters:
    void setNombreCamino();
    void setNombreNPC();

    void EventoRandom(Personaje&);
    void Camino(Personaje&);
    void NPC(Personaje&);
};

#endif // DIRIGIRSEA_H
