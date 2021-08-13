#include<iostream>
#include <string>

int main() {

	std::string name = "mahith";
	name += "sri";
	name.insert(6, " ");
	name.append(" reddy");
	std::cout << name << std::endl;
	name.replace(0, 4, "tanuja");
	std::cout << name << std::endl;
	name.erase(name.length() - 1);
	std::cout << name << std::endl;
	name.pop_back();
	std::cout << name << std::endl;
}
