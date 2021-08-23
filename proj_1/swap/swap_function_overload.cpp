#include<iostream>
#include<vector>
void swap(std::string a, std::string b) {
	std::string temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << "b: " << b << std::endl;
}

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
	std::string first_name = "tanuja";
	std::string last_name = "kalli";
	swap(first_name, last_name);
}
