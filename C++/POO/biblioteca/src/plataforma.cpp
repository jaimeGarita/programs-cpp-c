#include "plataforma.hpp"
#include <iostream>

using namespace std;


Plataforma::Plataforma(string _regla,string _titulo,string _descripcion,string _plataforma,unsigned int _njugadores, unsigned int _pegi, unsigned int _cantidad_plataformas): Juegos(_regla, _titulo, _descripcion, _plataforma, _njugadores, _pegi){

    this-> cantidad_plataformas = _cantidad_plataformas;
    this-> genero = "Plataformas";
}

void 
Plataforma::setCantidad_plataforma(unsigned int value){
    this -> cantidad_plataformas = value;
}

unsigned int 
Plataforma::getCantidad_plataforma(){
    return cantidad_plataformas;
}

/*METODOS VIRTUALES*/

void 
Plataforma::ciclo_juego() const{
    cout << "Inicializacion - Aventura - Fin" << "\n";
}

void 
Plataforma::print_genero() const{
    cout << "El genero de este juego es " << this->genero << "\n";
}

void 
Plataforma::plataforma_disponible() const{
    cout << "El juego " << this->titulo << " esta disponible en las plataformas " << this->plataforma  << "\n";
}
