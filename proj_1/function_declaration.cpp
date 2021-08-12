#include<iostream>
using std::cout;
using std::cin;
double power(double, int);

int main() {
	int base, exponent;
	cout << "what is the base value: ";
	cin >> base;
	cout << "what is the exponent value: ";
	cin >> exponent;
	double mypower = power(base, exponent);
	cout << mypower << std::endl;
}


double power(double base, int exponent) {
	double result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
};
