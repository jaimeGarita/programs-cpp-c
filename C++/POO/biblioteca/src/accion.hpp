#ifndef ACCION_HPP
#define ACCION_HPP

using namespace std;

#include "general.h"

class Accion : public Juegos{
    private:

        string habilidades;
        short cantidad_armas;

    public:
       
        Accion(string,string,string,string,unsigned int, unsigned int, string, short);

        string getHabilidades();
        void setHabilidades(string value);

        short getCantidad_armas();
        void setCantidad_armas(short value);

        virtual void ciclo_juego() const;
        virtual void print_genero() const;
        virtual void plataforma_disponible() const;


};

#endif
