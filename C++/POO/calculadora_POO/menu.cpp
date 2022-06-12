#include <stdlib.h>
#include <iostream>

#include "menu.h"

const char *optmenu[]{ //IMPRIME EL MENU
	"Suma",
	"Resta",
	"Multiplicacion",
	"Division"

};

void Opt::run(){ //METODO RUN QUE ACTIVA LOS DEMAS METODOS
	this->title();  //THIS ES = A UN PUNTERO POR LO CUAL LLAMAMOS A TITLE Y A MENU
	this->menu();
}

OpMenu Opt::menu (){ //METODO EXCLUSIVO PARA IMPRIMIR EL MENU
	
	for (int i = 0; i< total-1; i++){
		std::cout << i+1 << ".-" << optmenu[i] << "\n";
	}
	return (OpMenu) 1;
}

OpMenu Opt::ask_menu(){ //METODO PARA SABER EXCLUSIVAMENTE LA OPCION DEL USUARIO QUE QUIERA SEA SUMA RESTA ETC...
	int n;
	std::cout << "Ingrese la opcion deseada: ";
	std::cin >> n;

		return (OpMenu) n;
}

void Opt::title(){ //METODO PARA LIMPIAR LA PANTALLA
	system("clear");
	system("figlet CALCULADORA");
}
