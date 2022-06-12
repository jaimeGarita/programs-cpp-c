#ifndef LUCHA_H
#define LUCHA_H

#include "general.h"

using namespace std;


class Lucha: public Juegos{
    private:
        unsigned int nluchadores;
        string modo_combate;
    public:
        Lucha(string,string,string,string,unsigned int, unsigned int, unsigned int, string);

        unsigned int getNluchadores(){return this->nluchadores;};
        string getModo_combate(){return this->modo_combate;};

        virtual void ciclo_juego() const;
        virtual void print_genero() const;
        virtual void plataforma_disponible() const;

        

};

#endif
