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
    void addNombre(string);
    void addVida(int);
    void takeVida(int);
    void addStamina(int);
    void takeStamnia(int);
    void addFuerza(int);
    void takeFuerza(int);
    void addAgilidad(int);
    void takeAgilidad(int);
    void addInteligencia(int);
    void takeInteligencia(int);
    void addMana(int);
    void takeMana(int);
    void addChi(int);
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
