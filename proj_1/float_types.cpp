#include<iostream>
#include <float.h>
using std::cout;
using std::cin;
using std::endl;

int main() {

	float a;
	double b=7.7E4,d;
	long double c;
	cout << b;
	cout << "float trust worthy upto" << FLT_DIG << "digits" << endl;
	cout << "double trust worthy upto" << DBL_DIG << "digits" << endl;
	cout << "long double trust worthy upto" << LDBL_DIG << "digits" << endl;


}
