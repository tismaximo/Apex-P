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
//Setters y takkers:
    void setNombre(string);
    void setVida(int);
    void takeVida(int);
    void setStamina(int);
    void takeStamnia(int);
    void setFuerza(int);
    void takeFuerza(int);
    void setAgilidad(int);
    void takeAgilidad(int);
    void setInteligencia(int);
    void takeInteligencia(int);
    void setMana(int);
    void takeMana(int);
    void setChi(int);
    void takeChi(int);
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
