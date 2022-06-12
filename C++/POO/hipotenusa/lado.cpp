#include <iostream>
#include <cmath>
#include "lado.h"

Triangle::Triangle(double n): cateto(n)
{}

double 
Triangle::getCateto() const
{
	return this->cateto;
}

void 
Triangle::setCateto(double n)
{
this->cateto = n;
}

/* ES UN METODO DE CONSULTA, LO CUAL NO MODIFICAMOS NINGUN ATRIBUTO */
double
Triangle::operator+(Triangle &c) const
{
return sqrt(pow(this->cateto, 2)+pow(c.cateto, 2));
}
