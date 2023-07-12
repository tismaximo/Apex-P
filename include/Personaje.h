#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
using namespace std;

class Personaje
{
private:
    string _nombre;
    string _clase;
    int _vida;
    int _stamina;
    int _fuerza;
    int _agilidad;
    int _inteligencia;
    int _mana;
    int _chi;
public:
//Constructores:
    void PersonajeAldeano();
    void PersonajeFuerza();
    void PersonajeMagia();
    void PersonajeComerciante();
    void PersonajeLadron();
    void PersonajeElfo();
//Setters:
    void setNombre(string);
    void setVida(int);
    void setFuerza(int);
    void setAgilidad(int);
    void setInteligencia(int);
    void setMana(int);
    void setChi(int);
//Getters:
    string getNombre();
    string getClase();
    int getVida();
    int getStamina();
    int getFuerza();
    int getAgilidad();
    int getInteligencia();
    int getMana();
    int getChi();
};

#endif // PERSONAJE_H
