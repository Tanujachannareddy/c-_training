#include<iostream>
class Position {
	int z = 30;
public:
	int x = 10;
	int y = 20;
	Position operator + (Position pos);
	bool operator ==(Position pos);
	friend std::ostream& operator << (std::ostream& output, Position pos);
    friend std::istream& operator >> (std::istream& input, Position& pos);
};
