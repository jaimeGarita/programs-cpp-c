#ifndef __VECTOR_H__
#define __VECTOR_H__

class Vector{
	public:
		
		Vector(double x=0, double z=0, double y=0);
		Vector operator+(const Vector &op);

		double x;
		double z;
		double y;

};

#endif
