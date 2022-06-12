#ifndef LIGA_HPP
#define LIGA_HPP

//CLASE PADRE ABSTRACTA
class Liga{
	protected:
		double capital;
		unsigned njugadores;
	public:
		// CLASE VIRTUAL PURA
		virtual bool entrenar() = 0;
	};

#endif
