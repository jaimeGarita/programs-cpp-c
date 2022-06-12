#include "simulacion.hpp"
#include "juego.hpp"
#include <iostream>

using namespace std;

Simulacion::Simulacion(string _regla, string _titulo, string _descripcion, string _plataforma, unsigned int _njugadores, unsigned int _pegi,  string _modo_conduccion, string _tipo_simulacion) : Juegos(_regla, _titulo, _descripcion, _plataforma, _njugadores, _pegi){

    this-> modo_conduccion = _modo_conduccion;
    this-> tipo_simulacion = _tipo_simulacion;
    this-> genero = "Simulacion";

}

void
Simulacion::setModo_conduccion(string value){
    this-> modo_conduccion = value;
}

string
Simulacion::getModo_conduccion(){
    return this-> modo_conduccion;
}

void 
Simulacion::setTipo_simulacion(string value){
    this-> tipo_simulacion = value;
}

string 
Simulacion::getTipo_simulacion(){
    return this-> tipo_simulacion;
}

/*METODOS VIRTUALES*/

void
Simulacion::ciclo_juego() const{
    cout << " Conducir - Chocarse - Repetir  " << "\n";
}

void
Simulacion::print_genero() const{
    cout << "El genero es de " << genero << "\n";
}

void
Simulacion::plataforma_disponible() const{
    cout << "La plataforma disponible es " << plataforma << "\n";
}
