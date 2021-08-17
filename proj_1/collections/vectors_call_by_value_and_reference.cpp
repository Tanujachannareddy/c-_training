
#include <iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
void print_array(std::vector<int> &data)
{
	data.push_back(6);
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\t";
	}
	std::cout << "\n";
}
int main()
{
	std::vector<int> array = { 1,2,3 };
	print_array(array);
	print_array(array);
	print_array(array);
	print_array(array);
}



