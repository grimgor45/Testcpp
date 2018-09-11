#include "stdafx.h"
#include "Position.h"
#include<iostream>
using namespace std;

Position::Position(int posx, int posy) : positionx(posx), positiony(posy) {}
Position::Position() :positionx(0), positiony(0) {};

bool Position :: samePosition(Position const& pos) const {
	return (positionx == pos.positionx && positiony == pos.positionx);
}

 bool operator==(Position const& pos1, Position const& pos2) 
{
	 return pos1.samePosition(pos2);
}





void Position :: showPosition()
{
	cout << "positionx" << positionx << endl;
	cout << "positiony" << positiony << endl;
}

Position::~Position()
{
}
