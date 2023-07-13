#include<iostream>
using namespace std;

#include "Menu.h"
#include "rlutil.h"

void AnimacionMenuPrincipal(){

    rlutil::hidecursor();

/*
 █████╗ ██████╗ ███████╗██╗  ██╗     ██████╗
██╔══██╗██╔══██╗██╔════╝╚██╗██╔╝     ██╔══██╗
███████║██████╔╝█████╗   ╚███╔╝█████╗██████╔╝
██╔══██║██╔═══╝ ██╔══╝   ██╔██╗╚════╝██╔═══╝
██║  ██║██║     ███████╗██╔╝ ██╗     ██║
╚═╝  ╚═╝╚═╝     ╚══════╝╚═╝  ╚═╝     ╚═╝
*/
int columnaX=15;
int filaY=3;
int velocidad=50;

//cout<<(char)219;

gotoxy(columnaX, filaY); rlutil::msleep(velocidad);
printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);filaY++;
gotoxy(columnaX, filaY); rlutil::msleep(velocidad);
printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",188);printf("%c",200);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",188);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",219);printf("%c",219);printf("%c",187);filaY++;
gotoxy(columnaX, filaY); rlutil::msleep(velocidad);
printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",186);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",188);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",200);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",188);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",188);filaY++;
gotoxy(columnaX, filaY); rlutil::msleep(velocidad);
printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",219);printf("%c",219);printf("%c",186);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",188);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",188);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",200);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",188);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",188);filaY++;
gotoxy(columnaX, filaY); rlutil::msleep(velocidad);
printf("%c",219);printf("%c",219);printf("%c",186);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",186);printf("%c",219);printf("%c",219);printf("%c",186);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",219);printf("%c",219);printf("%c",201);printf("%c",188);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",187);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",219);printf("%c",219);printf("%c",186);filaY++;
gotoxy(columnaX, filaY); rlutil::msleep(velocidad);
printf("%c",200);printf("%c",205);printf("%c",188);printf("%c",32);printf("%c",32);printf("%c",200);printf("%c",205);printf("%c",188);printf("%c",200);printf("%c",205);printf("%c",188);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",200);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",205);printf("%c",188);printf("%c",200);printf("%c",205);printf("%c",188);printf("%c",32);printf("%c",32);printf("%c",200);printf("%c",205);printf("%c",188);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",32);printf("%c",200);printf("%c",205);printf("%c",188);filaY++;

cout<<endl;
cout<<"                                            |                                   \n";
cout<<"                              |>>>      _  _|_  _         |>>>                  \n";
cout<<"                              |        |;| |;| |;|        |                     \n";
cout<<"                          _  _|_  _    \\\\.    .  /    _  _|_  _               \n";
cout<<"                         |;|_|;|_|;|    \\\\:. ,  /    |;|_|;|_|;|              \n";
cout<<"                         \\\\..      /    ||;   . |    \\\\.    .  /            \n";
cout<<"                          \\\\.  ,  /     ||:  .  |     \\\\:  .  /             \n";
cout<<"                           ||:   |_   _ ||_ . _ | _   _||:   |                  \n";
cout<<"                           ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |                  \n";
cout<<"                           ||:   ||.    .     .      . ||:  .|                  \n";
cout<<"                           ||: . || .     . .   .  ,   ||:   |                  \n";
cout<<"                           ||:   ||:  ,  _______   .   ||: , |                  \n";
cout<<"                           ||:   || .   /+++++++\\    . ||:   |                 \n";
cout<<"                           ||:   ||.    |+++++++| .    ||: . |                  \n";
cout<<"               ___________ ||: . ||: ,  |+++++++|.  . _||_   |                  \n";
cout<<"     ____------     -`~    '--~~__|.    |+++++__|----~    ~`---,    ___       __\n";
cout<<"-~--~                             ~---__|,--~'                  ~~----_____-~'  \n";

    columnaX=10;
    filaY=10;
    velocidad=100;

for(int i=1; i<10; i++){
    gotoxy(columnaX, filaY);
    cout<<" \\,/ ";
    rlutil::msleep(velocidad);
    gotoxy(columnaX, filaY);
    cout<<" /`\\ ";
    rlutil::msleep(velocidad);
    gotoxy(columnaX, filaY);
    cout<<"      ";
    filaY++;
}

columnaX=1;
filaY=10;
gotoxy(columnaX, filaY);
cout<<"             _/|    _   |\\_\n";
cout<<"           _/_ |   _|\\\\ | _\\\n";
cout<<"         _/_/| /  /   \\|\\ |\\_\\_\n";
cout<<"       _/_/  |/  /  _  \\/\\|  \\_\\_\n";
cout<<"     _/_/    ||  | | \\o/ ||    \\_\\_\n";
cout<<"    /_/  | | |\\  | \\_ V  /| | |  \\_\\\n";
cout<<"   //    ||| | \\_/   \\__/ | |||    \\\\\n";
cout<<"  // __| ||\\  \\          /  /|| |__ \\\\\n";
cout<<" //_/ \\|||| \\/\\\\        //\\/ ||||/|\\_\\\\\n";
cout<<"///    \\\\/    /         \\  \\//// ||  \\\\\\\n";
cout<<"|/      \\/    |    |    |  ||\\/  ||   \\|\n";
cout<<"              /_|  | |_  \\\n";
cout<<"             ///_| |_||\\_ \\\n";
cout<<"             |//||/||\\/||\\|\n";
cout<<"     ____---- \\/\\/|||/||/\\/\n";
cout<<"-~--~          \\/|/\\| \\/\n";

columnaX=33;
filaY=27;
velocidad=50;
gotoxy(columnaX, filaY);

char CartelMenuPrincipal[15]="Menu principal";
for(int i=0; i<15; i++){cout<<CartelMenuPrincipal[i];rlutil::msleep(velocidad);}
filaY++;
gotoxy(columnaX, filaY);
for(int i=0; i<15; i++){printf("%c",196);gotoxy(columnaX,filaY);columnaX++;rlutil::msleep(velocidad);}

columnaX=36;
filaY+=3;
velocidad=10;
gotoxy(columnaX, filaY);
char iniciarPartida[8]="Partida";
for(int i=0; i<8; i++){cout<<iniciarPartida[i];rlutil::msleep(velocidad);}

filaY+=2;
gotoxy(columnaX, filaY);
char opciones[9]="Opciones";
for(int i=0; i<9; i++){cout<<opciones[i];rlutil::msleep(velocidad);}

filaY+=2;
gotoxy(columnaX, filaY);
char creditos[9]="Creditos";
for(int i=0; i<9; i++){cout<<creditos[i];rlutil::msleep(velocidad);}

filaY+=2;
gotoxy(columnaX, filaY);
char lore[5]="Lore";
for(int i=0; i<5; i++){cout<<lore[i];rlutil::msleep(velocidad);}

filaY+=2;
gotoxy(columnaX, filaY);
char salir[6]="Salir";
for(int i=0; i<6; i++){cout<<salir[i];rlutil::msleep(velocidad);}


filaY+=2;
gotoxy(columnaX, filaY);
char debug[6]="Debug";
for(int i=0; i<6; i++){cout<<debug[i];rlutil::msleep(velocidad);}
}


