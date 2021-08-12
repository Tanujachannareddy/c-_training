#include<iostream>
using std::cout;
using std::cin;
double pow(double base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
};

int main() {
	int base, exponent;
	cout << "what is the base value: ";
	cin >> base;
	cout << "what is the exponent value: ";
	cin >> exponent;
	double power = pow(base, exponent);
	cout << power << std::endl;
}
