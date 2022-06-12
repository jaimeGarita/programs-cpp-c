#ifndef __LADO_H__
#define __LADO_H__
class Triangle{

	public:
	/* CONSTRUCTORES */
	Triangle(double n=0);

	double operator+(Triangle &c) const;

	double getCateto() const;

	void 	 setCateto(double);

	private:
	double cateto;
};

#endif
