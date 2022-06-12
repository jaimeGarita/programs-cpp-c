

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define ENG 0
#define SPA 1

#define NOPT 6

#define LANG 1
#ifndef LANG
#define ACT_LANG   ENG
#else
#define ACT_LANG   LANG
#endif

const int lang = ACT_LANG;
/*
 * EN PRUEBAS, FALTA FINALIZAR
 int lang_menu(){
	int read_lang;
	printf("introduce el idioma que quieras: ");
	scanf("%i", &read_lang);

	return read_lang;
	}
*/


const char *menu_opt[][NOPT] = {
{
	"Directory Contents.",
        "Directory Occupation.",
        "Disc Space.",
        "Memory.",
        "Exit",
        NULL
},
{
	"Contenido de un directorio.",
        "Ocupación del directorio.",
        "Espacio en disco.",
        "Memoria.",
        "Salir",
        NULL
}
};

enum TOpt {
	contenido, ocupacion, espacio, memoria, salir
};

void clean_screen(){
	system("clear");
	system("toilet -fpagga --gay Menu");
}
unsigned read_menu(){
	unsigned opt;
	scanf("%u", &opt);
	__fpurge(stdin);
	
	return opt - 1;
}

int menu(){
	clean_screen();
	
	for(int i = 0; menu_opt[lang][i] !=NULL; i++)
		printf("\t\t %i .- %s\n",i+1,menu_opt[lang][i] );
	
	return read_menu();
}

int main(){
	unsigned option;

    do {
        option = menu ();
        switch (option){
        case 0:
		printf("PRUEBA 0 ");
            break;
	case 1:
	    	printf("PRUEBA 1 ");
	    break;
	case 2:
	    	printf("PRUEBA 2 ");
	    break;
	}
    } while (option != salir);

    return EXIT_SUCCESS;

}
