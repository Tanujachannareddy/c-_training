
#include <iostream>

int main() {
	int a= 1025;
	int* p;
	p=&a;
	std::cout << "Address of p is "<< p << " value at address is " << *p << std::endl;
	std::cout << "Address of p+1 is "<< p+2 << " value at address is " << *(p+1) << std::endl;
	}
