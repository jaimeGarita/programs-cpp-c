#include "juego.hpp"
#include <iostream>

using namespace std;

Juegos::Juegos(string _regla,string _titulo,string _descripcion,string _plataforma,unsigned int _njugadores, unsigned int _pegi){
    this-> regla = _regla;
    this-> titulo = _titulo;
    this-> descripcion = _descripcion;
    this-> plataforma = _plataforma;
    this-> njugadores = _njugadores;
    this-> pegi = _pegi;
}


void Juegos::setRegla(string value){
    this->regla=value;
}

string Juegos::getRegla(){
    return regla;
}


void Juegos::setNjugadores(unsigned int value){
    this->njugadores=value;
}

unsigned int Juegos::getNjugadores(){
    return this->njugadores;
}

void Juegos::setGenero(string value){
    this->genero=value;
}

string Juegos::getGenero(){
    return this->genero;
}

void Juegos::setTitulo(string value){
    this->titulo=value;
}

string Juegos::getTitulo(){
    return this->titulo;
}

void Juegos::setDescripcion(string value){
    this->descripcion=value;
}

string Juegos::getDescripcion(){
    return this->descripcion;
}

void Juegos::setPegi(unsigned int value){
    this->pegi=value;
}

unsigned int Juegos::getPegi(){
    return this->pegi;
}

void Juegos::setPlataforma(string value){
    this->plataforma=value;
}

string Juegos::getPlataforma(){
    return this->plataforma;
}
