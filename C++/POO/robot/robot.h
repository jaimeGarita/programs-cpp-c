#ifndef __ROBOT_H__
#define __ROBOT_H__

class Robot{
	public:

		Robot();

		void saludo();
		void que_es();

		unsigned int getNserie();
		
	private:
		//SI CREAMOS UN STATIC EN PRIVADO SIEMPRE SERA CONSTANTE
		inline static unsigned int nserie = 0;
		unsigned int serial;

};


#endif
