#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include "general.h"
using namespace std;

//dynamic_cast<juegos&>
    
/********************************/
/* ELEGIR LAS OPCIONES DEL MENU */
/*******************************/
int choose_menu(){
    int opt;
		do{
        cout << "Escoge algun tipo de Juego: "; 
        cin >> opt;
    if(opt == 6){
			  exit(1);

		if(opt > nobject+1){
		    cout << "Has introducido mal el numero, por favor intentelo de nuevo: " << "\n";
				    }
			  }

		 }while(opt > nobject-1);
        return opt;

}
/**********************************/
/* SECCIONES DE IMPRIMIR EL MENU  */
/******************************** */

char askMenu(Biblioteca biblioteca){
    char ask;
    do{
        cout << "¿Quieres volver al menu? (s/n) ";
		    cin >> ask;
	  }while(ask != 's' & ask != 'n');
		    return ask;
}
	


void menu_principal(Juegos **j){
        //system("clear");
        system("figlet Juego");
		    cout << "Titulo -> "<< (*j)->getTitulo() << "\n";
        cout << "Descripcion -> "<< (*j)->getDescripcion() << "\n\n";
            
        cout << "Genero -> "<<(*j)->getGenero() <<"\n";
        cout << "Plataforma -> "<< (*j)->getPlataforma() << "\n";
        cout << "Regla -> "<< (*j)->getRegla() << "\n";
        cout << "Jugadores -> "<< (*j)->getNjugadores() << "\n";
        cout << "Pegi -> "<< (*j)->getPegi() << "\n";

}

void selec_plat(Juegos *j[], Biblioteca b){
    if((*j)->getGenero() == "Plataformas"){
				menu_principal(j);
        cout << "Cantidad de plataforma -> "<< static_cast<Plataforma*>((*j))->getCantidad_plataforma() <<"\n\n\n";
            }
}

void selec_simu(Juegos *j[], Biblioteca b){

    if((*j)->getGenero() == "Simulacion"){
		menu_principal(j);
        cout << "Tipo de conduccion -> "<< static_cast<Simulacion*>((*j))->getModo_conduccion() <<"\n";
        cout << "Tipo de simulacion -> "<< static_cast<Simulacion*>((*j))->getTipo_simulacion() <<"\n\n\n";
         }

}


void selec_acc(Juegos *j[], Biblioteca b){

    if((*j)->getGenero() == "Accion"){
		menu_principal(j);
        cout << "Habilidades -> "<< static_cast<Accion*>((*j))->getHabilidades() <<"\n";

        cout << "Cantidad de armas -> "<< static_cast<Accion*>((*j))->getCantidad_armas() <<"\n\n\n";
         }

}

void selec_luch(Juegos *j[], Biblioteca b){
    if((*j)->getGenero() == "Lucha"){
        menu_principal(j);
        
        cout << "Numero de luchadores " << static_cast<Lucha*>((*j))->getNluchadores() << "\n";

        cout << "Modo de combate " << static_cast<Lucha*>((*j))->getModo_combate() << "\n";
    }
}

void selec_resume(Juegos *j[], Biblioteca b){

    if((*j)->getGenero() == "Plataformas"){
        cout << "\n\n\n";
        b.print_games(j);
        cout << "\n\n";
    }

    if((*j)->getGenero() == "Simulacion"){
        cout << "\n\n\n";
        b.print_games(j);
        cout << "\n\n";
    }

    if((*j)->getGenero() == "Lucha"){
        cout << "\n\n\n";
        b.print_games(j);
        cout << "\n\n";
    }


    if((*j)->getGenero() == "Accion"){
        cout << "\n\n\n";
        b.print_games(j);
        cout << "\n\n";
    }

}

/***********************/
/* PUNTERO A FUNCIONES */
/***********************/

void (*games[])(Juegos *j[], Biblioteca b) = { &selec_plat, &selec_simu, &selec_luch, &selec_acc, &selec_resume};


void menu(int choose, Juegos *game[], Biblioteca b){
    for(int i = 0; i<inc; i++){
        if(choose > 0 && choose < inc){
        (*games[choose-1])(game+i, b);
        }
    }
}


int main(){
    int result;
    int choose;
    Biblioteca biblioteca;
    Juegos **game = (Juegos**) malloc (nobject*sizeof(Juegos*));
        
    /*LLAMADA A LOS METODOS CONSTRUCTORES*/

    *(game+inc++) = new Plataforma("Salvar el mundo hollow","Hollow knights", "Juego que tienes que salvar el mundo hollow, en el cual eres una cuchara salvaje", "PS4,PS5 y PC", 1, 4, 100);

    *(game+inc++) = new Plataforma("Salvar a la chica en apuros", "Mario Bros", "Juego por el cual tienes que salvar a una mujer que siempre esta en apuros porque esta secuestrada", "PS5", 1, 3, 200);


    *(game+inc++) = new Simulacion("Juego de coches", "F1 2022", "Desarrolladora Codemasteri ¿Quieres sentir el mundo del motor en vivo? No dudes en descargar F1 2022 te sentiras un piloto mas!", "PS4, PS5, PC", 19, 3, "Volante coche", "Carreras terrestres");
    
    *(game+inc++) = new Simulacion("Juego de aviones", "Fly simulator", "Microsoft", "PC", 100, 18, "Volante avios", "Plaformas aereas");
    

    *(game+inc++) = new Accion("Juego de matar","Call of Duty", "Juego desarrollado en matar a peña","Todas las plataformas",20,18,"Volar, lanzar granadas, lanzar cegadoras y millones mas de habilidades",50);


    *(game+inc++) = new Accion("Juego mundo abierto y de matar a gente","Boordelans 3", "Juego de mundo abierto por los mismismos dioses","PC",4,18,"Amara, Moze, Zane, FL4K",50);

    *(game+inc++) = new  Lucha("Juego de lucha", "WWE", "Juego de gente famosa pegandose hasta que uno se quede en el suelo", "PS4, PS5 y PC", 20, 18, 2, "A puñetazos");

    /*LLAMADA A EL OBJETO BIBLIOTECA*/
	
	do{
    biblioteca.title();
    biblioteca.menu();
    choose = choose_menu();

    menu(choose, game, biblioteca);
    	}

	while(askMenu(biblioteca) == 's');
	

        return 0;
}
