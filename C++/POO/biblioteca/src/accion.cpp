#include "general.h"

using namespace std;

Accion::Accion(string _regla, string _titulo, string _descripcion, string _plataforma, unsigned int _njugadores, unsigned int _pegi, string _habilidades, short _cantidad_armas): Juegos(_regla, _titulo, _descripcion, _plataforma, _njugadores, _pegi){

this-> habilidades = _habilidades;
this-> cantidad_armas = _cantidad_armas;
this-> genero = "Accion";
}

string Accion::getHabilidades(){ return this -> habilidades;}
void Accion::setHabilidades(string value){this -> habilidades = value;}

short Accion::getCantidad_armas(){return this-> cantidad_armas;}
void Accion:: setCantidad_armas(short value){ this-> cantidad_armas =value;}

/*VIRTUALES*/

void 
Accion::ciclo_juego ()const{
    cout << "REAPARECER - MATAR - MORIR" << "\n";
}

void 
Accion::print_genero ()const{
    cout << "El genero de los juegos es de " << this->genero << "\n";
}

void 
Accion::plataforma_disponible ()const{
    cout << "El juego " << this->titulo << " esta disponible en " << this->plataforma;
}

