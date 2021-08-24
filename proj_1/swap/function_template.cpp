#include<iostream>
#include<vector>
// call by reference
template <typename T>
void swap(T& a, T& b) {
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << "b: " << b << std::endl;
}
template <typename T>
void swap(T a[], T b[], int size) {
	for (int i = 0; i < size; i++) {
		T temp = a[i];
		a[i] = b[i];
		b[i] = temp;

	}
}

int main() {
	int a = 10;
	int b = 5;
	swap(a, b);
	std::cout << "a: " << a << "b: " << b << std::endl;
	std::string name = "tanuja";
	std::string name1 = "mahith";
	swap(name, name1);
	std::cout << "name: " << name << "name1: " << name1 << std::endl;
	int m1[] = { 2,2,2,2,2 };
	int m2[] = { 1,1,1,1,1 };
	int size = sizeof(m1) / sizeof(m1[0]);
	swap(m1, m2, size);
	for (int i = 0; i < size; i++) {
		std::cout << m1[i] << "\t" << m2[i] << std::endl;
	}
}
