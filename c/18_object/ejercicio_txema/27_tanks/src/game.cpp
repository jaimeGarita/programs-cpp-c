#include "game.h"

#include <stdio.h>
#include <stdlib.h>

void Game::run () {
    this->intro ();

    while (this->menu () == jugar){
        this->game_loop.start ();
    };
}

void Game::intro () {
    system("figlet MENU");
    printf("\nEmpezar\n");
    printf("Salir\n\n");
}
OpMenu Game::menu () {
    static int i = 0;
    return  (OpMenu) i++;
}

