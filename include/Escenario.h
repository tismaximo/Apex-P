#ifndef ESCENARIO_H
#define ESCENARIO_H

#include "Personaje.h"

class Escenario
{
private:
    string _escenario;
public:
// constructores:
    bool EscenarioMedieval(Personaje&);
// getters:
    string getEscenario();
};

#endif // ESCENARIO_H
