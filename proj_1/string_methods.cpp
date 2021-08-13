#include<iostream>
#include <string>

int main() {

	std::string name = "mahith sri reddy";
	if (name == "mahith sri reddy") std::cout << "true" << std::endl;
	if(name.compare("mahith sri reddy") == 0)std::cout << "true" << std::endl;
	name.replace(name.find("mahith"), 4, "tanuja");
	std::cout << name << std::endl;
	std::cout << name.find_first_of("s") << std::endl;
	std::cout << name.find("tanujath") << std::endl;
	unsigned int x = -1;
	std::cout << x << std::endl;
}
