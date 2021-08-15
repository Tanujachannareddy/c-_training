#include <iostream>
int main()
{
	std::cout << "enter_user_name:";
	std::string guess_name = "tanuja";
	std::string user_answer_for_name;
	std::cin >> user_answer_for_name;
	std::cout << "enter_user_height:";
	auto guess_hight = 5.4F;
	float user_answer_for_hight;
	std::cin >> user_answer_for_hight;

	if (user_answer_for_name == guess_name && user_answer_for_hight == guess_hight) {
		std::cout << "You are right, click continue" << std::endl;
	}
	else if (user_answer_for_name == guess_name || user_answer_for_hight == guess_hight) {
		std::cout << "You are partial correct, points will reduce" << std::endl;
	}
	else if (!(user_answer_for_name == guess_name)) {
		std::cout << "You are wrong, try one more time" << std::endl;
	}

}


	
