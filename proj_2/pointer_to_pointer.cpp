
#include <iostream>

int main() {
	int x = 5;
	int* p = &x;
	std::cout << *p << std::endl;
	int** q = &p;
	std::cout << *q << std::endl;
	std::cout << *(*q) << std::endl;
	int*** r = &q;
	std::cout << *r << std::endl;
	std::cout << *(*(*r)) << std::endl;
	***r = 10;

	std::cout << x << std::endl;

	}
