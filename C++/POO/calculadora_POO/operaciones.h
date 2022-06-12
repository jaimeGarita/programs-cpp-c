#ifndef __OPERACIONES_H__
#define __OPERACIONES_H__
#include "menu.h"

class Operaciones{

	private:
		int opn1;
		int opn2;
		int result;
		
		void insertar();
		void imprimir();

	public:
		Operaciones();

		void run();
		void suma();
		void resta();
		void multiplicacion();
		void division();
};


#endif
