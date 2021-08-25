#include <iostream>
#include <fstream>
class Position {
public:
	int x = 10;
	int y =20;
	Position operator + (Position pos) {
		Position new_pos;
		new_pos.x = x + pos.x;
		new_pos.y = y + pos.y;
		return new_pos;

	}
	bool operator ==(Position pos) {
		if (x==pos.x || y==pos.y) {
			return true;
		}
		return false;
	}
};
std::ostream& operator << (std::ostream& output, Position pos)
{
	output << "x :" << pos.x << "\n" << "y:" << pos.y;
	return output;
}
std::istream& operator >> (std::istream& input, Position& pos)
{
	input >> pos.x >> pos.y;
	return input;
}
int main() {
	Position pos1, pos2;
	Position pos3 = pos1 + pos2;
	std::cout << pos3.x << "\t" << pos3.y;
	pos1.x = 30;
	if (pos1 ==pos2){
		std::cout << "they are same";
	}
	std::cin >> pos3;
	std::cout << pos3;
	
}
