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
//Constructores de npcs:
    void NpcPrincesa();
    void NpcJinete();

//Setters takkers y intercambios:
    void addNombre(string);
    void addVida(int);
    void intercambioVida(Personaje&, Personaje&, int);
    void takeVida(int);
    void addStamina(int);
    void intercambioStamina(Personaje&, Personaje&, int);
    void takeStamina(int);
    void addFuerza(int);
    void intercambioFuerza(Personaje&, Personaje&, int);
    void takeFuerza(int);
    void addAgilidad(int);
    void intercambioAgilidad(Personaje&, Personaje&, int);
    void takeAgilidad(int);
    void addInteligencia(int);
    void intercambioInteligencia(Personaje&, Personaje&, int);
    void takeInteligencia(int);
    void addMana(int);
    void intercambioMana(Personaje&, Personaje&, int);
    void takeMana(int);
    void addChi(int);
    void intercambioChi(Personaje&, Personaje&, int);
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
