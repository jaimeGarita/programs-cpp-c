

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <stdbool.h>

#define MAX 30

int preguntar_color(){
	char color_usuario[MAX];

	printf("Imaginate un color:  ");
	scanf("%s", color_usuario);
	
	return 0;
}
void screen(){
	//LIMPIA LA PANTALLA
	system("clear");
	system("toilet -fpagga COLORES RGB");

	printf("\n \n PIENSA EN UN COLOR RGB (colores básicos) \n");
}



int algoritmo_colores(){
	char verde, azul;
	char rojo;
	// PREGUNTAMOS LOS TIPO DE COLORES EN RGB
	printf("¿Tu color tiene rojo? s/n:  ");
	__fpurge(stdin);
	scanf("%c", &rojo);
	
	printf("¿Tu color tiene verde? s/n: ");
	__fpurge(stdin);
	scanf("%c", &verde);

	printf("¿Tu color tiene azul? s/n: ");
	__fpurge(stdin);
	scanf("%c", &azul);

	// COLOR NEGRO (RGB)
	if (rojo == 's'){ //SENTENCIAS DE IF ANIDADAS //SI ROJO ES S
		bool rojo = true; // ROJO = VERDADERO, Y ASI CON TODOS LOS IFS0
		if (verde == 's'){ 
			bool verde = true; 
			if(azul == 's'){ 
				bool azul = true;

			printf("Tu color es NEGRO \n");
			}
		}
	}
	// COLOR BLANCO (RGB)
	if (rojo == 'n'){ // SI ROJO ES N
		bool rojo = false; // EL BOOL PASA A SER FALSO
			if (verde == 'n'){
				bool verde = false;
					if (azul == 'n'){
						bool azul = false;

						printf("El color es BLANCO \n");
					}
				}
			}


	// COLOR ROJO (RGB)
	if (rojo == 's'){
		bool rojo = true;
			if (verde == 'n'){
				bool verde = false;
					if (azul == 'n'){
						bool azul = false;

						printf("El color es ROJO \n");
					}
			}
	}
	// COLOR VERDE (RGB)
	if (rojo == 'n'){
		bool rojo = false;
			if(verde == 's'){
				bool verde = true;
					if(azul == 'n'){
						bool azul = false;

					printf("El color es verde \n");
				}
			}
	
		}

	// COLOR AZUL (RGB)
	if (rojo == 'n'){
		bool rojo = false;
			if(verde == 'n'){
				bool verde = false;
					if(azul == 's'){
					bool azul = true;

					printf("El color es AZUL \n");

					}
			}
	}

	//COLOR AMARILLO (RGB)
	if (rojo == 's'){
		bool rojo = true;
			if (verde == 's'){
				bool verde = true;
					if (azul == 'n'){
						bool azul = false;

						printf("El color es AMARILLO \n");

					}
			}
	}
	//COLOR MAGENTA (RGB)
	if (rojo == 's'){
       		bool rojo = true;
			if (verde == 'n'){
				bool verde = false;
					if (azul == 's'){
						bool azul = true;

						printf("El color es MAGENTA \n");
					}
			}
	}
	
	//COLOR CIAN (RGB)
	if(rojo == 'n'){
		bool rojo = false;
			if(verde == 's'){
				bool verde = true;
					if (azul == 's'){
						bool azul = true;

						printf ("El color es el CIAN \n");

					}
			}
	}
	
	return 0;
}

int main(){
	screen();
	algoritmo_colores();

	return EXIT_SUCCESS;

}
