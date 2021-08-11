#include<iostream>
using std::cout;

int main() {
	int slices = 5;//declaration and intialization
	slices = 5 + 1;
	cout << slices << std::endl;
	int clildren = slices;
	cout << clildren<< std::endl;
	slices = 1000;
	cout << clildren<<std::endl;//output=6
	cout << slices << std::endl;//out=1000
 
}
