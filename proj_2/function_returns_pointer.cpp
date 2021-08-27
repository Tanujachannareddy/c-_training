#include <iostream>
void printhelloworld() {
	std::cout << "hi" << std::endl;
}
int multiply(int a, int b) {
	return a * b;
}
int* add(int *a, int *b) {
	int *c= (int*)malloc(sizeof(int));
	*c =(*a) + (*b);
	return c;
}

int main() {
	int a=2, b=4;
	int *ptr = add(&a, &b);
	printhelloworld();
	multiply(3, 4);
	std::cout << *ptr << std::endl;
}
