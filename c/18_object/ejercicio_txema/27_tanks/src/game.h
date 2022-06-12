#ifndef __GAME_H__
#define __GAME_H__

#include "game_loop.h"

enum OpMenu { jugar, salir };


class Game {
    public:
        void run ();

    private:
        GameLoop game_loop;

        void intro ();
        OpMenu menu ();
};

#endif
