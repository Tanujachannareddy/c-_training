
#include <iostream>

int main() {
	//double a= 1025; //00000000 00000000 00000000 00000000 00000000 00000000 00000010 00000001
	int a= 4; //00000000 00000000 00000000 00000100
	int* p;
	p=&a;
	std::cout << sizeof(double);
	std::cout << "Address of p is "<< p << " value at address is " << *p << std::endl;
	std::cout << "Address of p+1 is "<< p+1 << " value at address is " << *(p+1) << std::endl;
	double* c = (double*)p;
	std::cout << "Address of c is " << c << " value at address is " << *c << std::endl;
	std::cout << "Address of c+1 is " << c + 1 << " value at address is " << *(c + 1) << std::endl;
	}
