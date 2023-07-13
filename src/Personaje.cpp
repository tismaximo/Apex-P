#include "Personaje.h"

//Constructores:
void Personaje::PersonajeAldeano(){
    _clase="Aldeano";
    _vida=20;
    _stamina=5;
    _fuerza=10;
    _agilidad=10;
    _inteligencia=5;
    _mana=10;
    _chi=2;
}
void Personaje::PersonajeFuerza(){
    _clase="Guerrero";
    _vida=20;
    _stamina=10;
    _fuerza=16;
    _agilidad=7;
    _inteligencia=4;
    _mana=2;
    _chi=1;
}
void Personaje::PersonajeMagia(){
    _clase="Mago";
    _vida=10;
    _stamina=5;
    _fuerza=5;
    _agilidad=5;
    _inteligencia=14;
    _mana=15;
    _chi=6;

}
void Personaje::PersonajeComerciante(){
    _clase="Comerciante";
    _vida=15;
    _stamina=1;
    _fuerza=10;
    _agilidad=5;
    _inteligencia=13;
    _mana=9;
    _chi=7;
}
void Personaje::PersonajeLadron(){
    _clase="Ladron";
    _vida=15;
    _stamina=6;
    _fuerza=7;
    _agilidad=20;
    _inteligencia=5;
    _mana=2;
    _chi=6;
}
void Personaje::PersonajeElfo(){
    _clase="Elfo";
    _vida=10;
    _stamina=5;
    _fuerza=8;
    _agilidad=15;
    _inteligencia=10;
    _mana=10;
    _chi=2;
}
//Adders:
void Personaje::addNombre(string nombre){
    _nombre+=nombre;
}
void Personaje::addVida(int vida){
    _vida+=vida;
}
void Personaje::addStamina(int stamina){
    _stamina+=stamina;
}
void Personaje::addFuerza(int fuerza){
    _fuerza+=fuerza;
}
void Personaje::addAgilidad(int agilidad){
    _agilidad+=agilidad;
}
void Personaje::addInteligencia(int inteligencia){
    _inteligencia+=inteligencia;
}
void Personaje::addMana(int mana){
    _mana+=mana;
}
void Personaje::addChi(int chi){
    _chi+=chi;
}
//takkers:
void Personaje::takeVida(int vida){
    _vida-=vida;
}
void Personaje::takeStamnia(int stamina){
    _stamina-=stamina;
}
void Personaje::takeFuerza(int fuerza){
    _fuerza-=fuerza;
}
void Personaje::takeAgilidad(int agilidad){
    _agilidad-=agilidad;
}
void Personaje::takeInteligencia(int inteligencia){
    _inteligencia-=inteligencia;
}
void Personaje::takeMana(int mana){
    _mana-=mana;
}
void Personaje::takeChi(int chi){
    _chi-=chi;
}
//Getters:
string Personaje::getNombre(){
    return _nombre;
}
string Personaje::getClase(){
    return _clase;
}
int Personaje::getVida(){
    return _vida;
}
int Personaje::getStamina(){
    return _stamina;
}
int Personaje::getFuerza(){
    return _fuerza;
}
int Personaje::getAgilidad(){
    return _agilidad;
}
int Personaje::getInteligencia(){
    return _inteligencia;
}
int Personaje::getMana(){
    return _mana;
}
int Personaje::getChi(){
    return _chi;
}
