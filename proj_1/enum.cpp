#include <iostream>
int main()
{
	enum class Season {summer,winter,spring};
	Season now = Season::spring;
	switch (now) {
	case Season::summer:
			std::cout << "you are in summer";
			break;
	case Season::winter:
		std::cout << "you are in winter";
		break;
	case Season::spring:
		std::cout << "you are in spring";
		break;
	default:
		std::cout << "you are in default spring";
		break;
	}
}


	
