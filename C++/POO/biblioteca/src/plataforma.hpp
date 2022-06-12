#ifndef PLATAFORMA_HPP
#define PLATAFORMA_HPP

using namespace std;

#include "juego.hpp"

class Plataforma: public Juegos{
    private:
        unsigned int cantidad_plataformas;
    public:
        
        Plataforma(string,string,string,string,unsigned int, unsigned int, unsigned int);
        
        void setCantidad_plataforma(unsigned int value);
        unsigned int getCantidad_plataforma();
        

        virtual void ciclo_juego() const;
        virtual void print_genero() const;
        virtual void plataforma_disponible() const;
};

#endif
