#include<iostream>
using std::cout;
using std::cin;

int main() {

	char x = 'a';
	cout << (int)x << std::endl;
	char y = 'A';
	cout << (int) y <<std::endl;
	char a = 65;
	cout << a << std::endl;
	cout << (int) a << std::endl;
	char b = 127;
	cout << (int) b << std::endl;
	b = 128;
	cout << (int)b << std::endl;
	b = 129;
	cout << (int)b << std::endl;
	unsigned char c = 2000000;
	cout << "unsigned char value "<< (int)c << std::endl;

}
