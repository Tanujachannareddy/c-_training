#include <iostream>
#include<array>
#include<ctime>
#include<cstdlib>
void print_array(std::array<int, 5> data)
{
	for (int n : data)
	{
		std::cout << n << "\t";
	}
	std::cout << "\n";
}

int main() 
{
	std::array<int, 5> data = { 1,2,3,4,5 };
	print_array(data);
}
