#include<iostream>
#include <string>

int main() {

	std::string name;
	/*std::string left_over;
	std::cin >> name;
	std::cout << name;
	std::cin >> left_over;
	std::cout << left_over;*/

	getline(std::cin, name);
	std::cout << name;

}
