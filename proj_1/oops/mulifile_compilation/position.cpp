#include<iostream>
#include"position.h"
Position Position::operator + (Position pos) {
	Position new_pos;
	new_pos.x = x + pos.x;
	new_pos.y = y + pos.y;
	return new_pos;

}
bool Position::operator ==(Position pos) {
	if (x == pos.x || y == pos.y) {
		return true;
	}
	return false;
}
std::ostream& operator << (std::ostream& output, Position pos)
{
	output << "x :" << pos.x << "\n" << "y:" << pos.y << "\nz: " << pos.z;
	return output;
}
std::istream& operator >> (std::istream& input, Position& pos)
{
	input >> pos.x >> pos.y >> pos.z;
	return input;
}
