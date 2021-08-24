#include<iostream>
#include<vector>
#include "math.h"
int main() {
	Rectangle rectangle;
	rectangle.length = 10;
	rectangle.width = 10;

	std::cout << utilz::area(rectangle.length, rectangle.width) << std::endl;
	std::cout << utilz::area(rectangle.length) << std::endl;
	std::cout << utilz::area(rectangle) << std::endl;
	
}
