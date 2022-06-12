#include "general.h"

using namespace std;

Lucha::Lucha(string _regla, string _titulo, string _descripcion, string _plataforma, unsigned int _njugadores, unsigned int _pegi, unsigned int _nluchadores, string _modo_combate):Juegos(_regla, _titulo, _descripcion, _plataforma, _njugadores, _pegi){
this -> genero = "Lucha";
this -> nluchadores = _nluchadores;
this -> modo_combate = _modo_combate;
}
/*VIRTUAL*/
void 
Lucha::ciclo_juego() const{
cout << "Seleccion de personaje - Luchar - Fin \n";
}

void 
Lucha::print_genero() const{
cout << "El genero de " << this->titulo << " es de " << this->genero << "\n";
}

void 
Lucha::plataforma_disponible() const{
cout << "El " << titulo << " esta en " << plataforma << " disponibles" << "\n";
}


