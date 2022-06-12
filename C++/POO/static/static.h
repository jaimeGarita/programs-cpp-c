#ifndef __STATIC_H__ 
#define __STATIC_H__

class Suma{

	public:
		Suma();
		int getAumentar();
		static int getNobjetos();
		static double sumar(int op1, int op2);

	private:
		inline static int nobjetos = 0;
		int aumentar;
						
};

#endif
