#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include "juego.hpp"
#include "plataforma.hpp"

#define N 2

    class Biblioteca{
        private:

            inline static unsigned int njuegos = 0;
            unsigned int cantidad_juegos;

        public:
        
            Biblioteca();

            void title();
            void menu();

            void print_games(Juegos *j[]);

            void setSerialnumber(unsigned int);
            unsigned int getSerialnumber();

            void setCantidad_juegos(unsigned int);
            unsigned int getCantidad_juegos();
    };

#endif
