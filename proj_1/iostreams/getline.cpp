#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int main()
{
	std::ifstream file("practice.txt");
	std::string line;
	getline(file, line);
	std::cout << line;
}
