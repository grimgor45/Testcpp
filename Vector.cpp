#include "stdafx.h"
#include "Vector.h"
#include <iostream>
using namespace std;

void Vector::showVector()
{
	cout << "dirx" << dirx << "diry" << diry << "dirz" << dirz << endl;
}

Vector& Vector::addVector(Vector const & vect1)
{
	Vector *vect = new Vector(dirx+vect1.dirx, diry+vect1.diry, dirz+vect1.dirz);

	return *vect;
}



Vector::Vector(int x, int y, int z):dirx(x), diry(y), dirz(z){}

Vector::Vector():dirx(0), diry(0), dirz(0){}


Vector::~Vector()
{
}
