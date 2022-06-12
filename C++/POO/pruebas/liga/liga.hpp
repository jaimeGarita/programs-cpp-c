#ifndef LIGA_HPP
#define LIGA_HPP

//CLASE PADRE ABSTRACTA
class Liga{
	protected:
		double capital=5;
		unsigned njugadores;
	public:
		// CLASE VIRTUAL PURA
		virtual void entrenar() = 0;
	};

#endif
