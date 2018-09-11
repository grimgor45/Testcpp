#pragma once
class Position
{
public:
	Position();
	Position(int posx, int posy);
	bool samePosition(Position const& pos) const;
	void showPosition();
	~Position();

private:
	int positionx;
	int positiony;
};
	bool operator==(Position const& pos1, Position const& pos2);
	Position& operator+(Position const& pos1, Position const& pos2);

