#include <iostream>
int main()
{
	std::string sentence = "hello my name is tanuja";
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] == ' ') {
			continue;
		}
		if (sentence[i] == 't') {
			break;
		}
		std::cout << sentence[i] << std::endl;
		
	}
}


	
