#include <iostream>
#include<ctime>
#include<vector>

int main()
{
	std::vector<int> data = { 1,2,3 };
	data.push_back(5);
	std::cout << data[3] << std::endl;
	std::cout << data[data.size() - 1] << std::endl;
	data.pop_back();
	std::cout << data.size() << std::endl;
}



