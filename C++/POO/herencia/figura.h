#ifndef __FIGURA_H__
#define __FIGURA_H__
//CLASE PADRE
class Figura{
	private: // ESTE ATRIBUTO NO SERIA HEREDADO A UNA CLASE HIJA
		std::string nfigura;

	protected: //PERMITE QUE LO MIEMBROS DE LA CLASE PUEDAN SER HEREDADOS A CLASES HIJAS

		double lado1;
		double lado2;
		
		double getLado1();
		double getLado2();

		void setLado1(double l);
		void setLado2(double l);

	public:
		Figura(std::string nombre, double l1, double l2); //CONSTRUCTOR

		std::string getNfigura(); 
		void setNfigura(std::string);
};

#endif
