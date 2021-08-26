#include <iostream>
#include "position.h"
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
