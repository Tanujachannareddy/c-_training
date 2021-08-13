#include<iostream>
using std::cout;
using std::cin;

int main() {

	bool found = true;
	cout << std::boolalpha << found<< std::endl;
	found = false;
	if (found) cout << "this is true";
	found = 0;
	if (!found) cout << "this is false";
}
