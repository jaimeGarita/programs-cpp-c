#ifndef SIMULACION_HPP
#define SIMULACION_HPP

using namespace std;

#include "juego.hpp"

class Simulacion : public Juegos{

    private:
       string modo_conduccion;
       string tipo_simulacion;
       public:

       Simulacion(string, string, string, string, unsigned int, unsigned int, string, string);

       void setModo_conduccion(string value);
       string getModo_conduccion();

       void setTipo_simulacion(string value);
       string getTipo_simulacion();

        virtual void ciclo_juego() const;
        virtual void print_genero() const;
        virtual void plataforma_disponible() const;


};

#endif
