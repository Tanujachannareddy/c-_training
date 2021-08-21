
#include <iostream>
void Increment(int *a) {

	*a = *a + 1;
	std::cout << "Address of paramenter " << a << std::endl;
}
//void Increment(int a) {
//	std::cout << "Address of paramenter " << &a << std::endl;
//	a = a + 1;
//}
int main() {
	int x = 5;
	std::cout << "Address of argument " << &x << std::endl;
	/*Increment*/(x);
	Increment(&x);
	std::cout << x << std::endl;
	}
