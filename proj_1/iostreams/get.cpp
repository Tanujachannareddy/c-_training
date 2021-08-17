#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int main()
{
	std::ifstream file("practice.txt");
	std::string line;
	char input=file.get();
	std::cout << input;
}
