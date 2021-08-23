#include<iostream>
#include<vector>
//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	std::cout << "a: " << a << "b: " << b << std::endl;
//}

// call by reference
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << "b: " << b << std::endl;
}

int main() {
	int a = 10;
	int b = 5;
	swap(a, b);
	std::cout << "a: " << a << "b: " << b << std::endl;	
}
