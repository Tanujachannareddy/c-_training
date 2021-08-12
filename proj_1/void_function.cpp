#include<iostream>
using std::cout;
using std::cin;
double power(double, int);

void power_value(double base, int exponent)
{
	double mypower = power(base, exponent);
	cout << base << " power of "<< exponent<< " is "<< mypower << "\n";
}

int main() {
	double base;
	int exponent;
	cout << "what is the base value: ";
	cin >> base;
	cout << "what is the exponent value: ";
	cin >> exponent;
	power_value(base, exponent);
}


double power(double base, int exponent) {
	double result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}
