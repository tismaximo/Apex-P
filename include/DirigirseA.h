#ifndef DIRIGIRSEA_H
#define DIRIGIRSEA_H

#include "Personaje.h"

class DirigirseA
{
public:
    string _nombreEvento;
    string _nombreCamino;
    string _nombreNPC;
    int _tipo;
private:
//setters:
    void setNombreEvento();
    void setNombreCamino();
    void setNombreNPC();

    void Evento(Personaje&);
    void Camino(Personaje&);
    void NPC(Personaje&);
};

#endif // DIRIGIRSEA_H
