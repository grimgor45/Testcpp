// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Position.h"
#include"Vector.h"
using namespace std;

class Ship {
	int positionx;
	int positiony;

};



int main()
{
	Vector vect(2,4,6);
	Vector vect1(1, 2, 3);
	Vector& res = vect.addVector(vect1);
	res.showVector();
	system("pause");
    return 0;
}

