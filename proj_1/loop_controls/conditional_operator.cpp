#include <iostream>
int main()
{
	std::string guess = "tanuja";
	std::cout << "enter the answer: ";
	std::string answer;
	std::cin >> answer;
	int points = guess == answer ? 10 : 0;
	std::cout << points << std::endl;
	guess == answer ? std::cout << "good job\n" : std::cout << "bad job\n";

}


	
