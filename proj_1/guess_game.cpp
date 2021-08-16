#include <iostream>
#include<ctime>
#include<cstdlib>
void play_game() {
	int random = rand() % 151;
	std::cout << random <<std::endl;
	while (true) {
		int guess;
		std::cout << "enter guess number";
		std::cin >> guess;
		if (random == guess) {
			std::cout << "your are right" << std::endl;
			return;
		}
		else if (guess < random) {
			std::cout << "your are low" << std::endl;
		}
		else {
			std::cout << "your are high" << std::endl;
		}
	}

}
int main()
{
	srand(time(NULL));
	int choice;
	do {
		std::cout << "0.Quit" << "\n" << "1.play game" << std::endl;
		std::cin >> choice;
		switch (choice) {
		case 0:
			std::cout << "thanks for nothing" << std::endl;
			break;
		case 1:
			std::cout << "let's play" << std::endl;
			play_game();
			break;
		}
	} while (choice!=0);
}


	
