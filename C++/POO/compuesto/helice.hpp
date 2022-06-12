#ifndef HELICE_HPP
#define HELICE_HPP

//CLASE QUE VA A SER COMPUESTA
class Helice{
	private:
		/*COMPONENTES QUE LLEVA UN HELICE*/
		unsigned int nhelices;
		double corriente_nocarga;
		double empuje;
		double velocidad_rotor;
	public:
		/*CONSTRUCTOR*/
		Helice(unsigned int, double, double, double);
	
		unsigned int getNhelices();
		void setNhelices(unsigned int);

		double getNcorriente();
		double getNempuje();
		double getNvelocidadRotor();

};

#endif
