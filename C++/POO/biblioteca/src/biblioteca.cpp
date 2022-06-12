#include "biblioteca.hpp"
#include <iostream>

using namespace std;



const char *menu_opt[] = {
" 1.- Juegos de plataforma",
" 2.- Juegos de Simulacion",
" 3.- Juegos de lucha",
" 4.- Juegos de accion",
" 5.- Información general de los juegos",
" 6.- SALIR",
nullptr
};

Biblioteca::Biblioteca(){
this -> cantidad_juegos = Biblioteca::njuegos++;
}

void
Biblioteca::setCantidad_juegos(unsigned int value){
    this ->cantidad_juegos = value;
}

unsigned int
Biblioteca::getCantidad_juegos(){
    return this->cantidad_juegos;
}

void 
Biblioteca::title(){
    system("clear");
    system("figlet BIBLIOTECA");
}

void
Biblioteca::menu(){
    for(int i = 0; menu_opt[i]!=nullptr; i++){
        cout << menu_opt[i] << "\n" ;
    	}
}
void 
Biblioteca::print_games(Juegos *j[]){
        cout << "TIPO DE GENERO "; (*j)->getGenero();
        cout << "\n";
        cout << "TIPO DE CICLO DE JUEGO ";(*j)->ciclo_juego();
        (*j)->print_genero();
        (*j)->plataforma_disponible();
        cout << "\n\n\n\n";

}
