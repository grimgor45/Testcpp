#pragma once
class Vector
{
public:
	void showVector();
	Vector& addVector(Vector const& vect1);
	Vector(int x, int y, int z);
	Vector();
	~Vector();
private:
	int dirx;
	int diry;
	int dirz;
};

