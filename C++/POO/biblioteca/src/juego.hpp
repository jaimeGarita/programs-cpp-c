
#ifndef JUEGOS_HPP
#define JUEGOS_HPP

#include <string>
#include <iostream>

using namespace std;

class Juegos{

public:
	protected:
  
    string regla;
    unsigned int njugadores;
    string genero;
    string titulo;
    string descripcion;
    unsigned int pegi;
    string plataforma;
	
	public:

    Juegos(string,string,string,string,unsigned int, unsigned int);

    virtual void ciclo_juego() const = 0;
    virtual void print_genero() const = 0;
    virtual void plataforma_disponible() const = 0;
    
    void setRegla(string value);
    string getRegla();

    void setNjugadores(unsigned int value);
    unsigned int getNjugadores();

    void setGenero(string value);
    string getGenero();

    void setTitulo(string value);
    string getTitulo();

    void setDescripcion(string value);
    string getDescripcion();

    void setPegi(unsigned int value);
    unsigned int getPegi();

    void setPlataforma(string value);
    string getPlataforma();


 
};

#endif // JUEGOS_HPP
