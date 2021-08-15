#include <iostream>
int main()
{
	std::cout << "enter age:";
	int age;
	std::cin >> age;
	switch (age) {
	case 17:
			std::cout << "you are age 17";
			break;
	case 18:
		    std::cout << "you are age 18";
			break;
	default:
		std::cout << "you are age is above 18";
		break;
	}
}


	
