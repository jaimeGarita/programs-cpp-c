#include <iostream>
#include <stdio.h>
#include "vector.h"

Vector::Vector(double x, double y, double z): 
	x(x), y(y), z(z)
{}

Vector Vector::operator+(const Vector &op){
	printf("%lf, %lf, %lf", op.x, op.y, op.z);	
	return Vector(
		this -> x + op.x,
		this -> y + op.y,
		this -> z + op.z
			);
	
}
