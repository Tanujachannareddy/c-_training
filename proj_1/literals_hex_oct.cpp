#include <iostream>
int main()
{
	auto x = 5U;
	auto y = 5UL;
	auto z = 5ULL;
	x = 6;
	std::cout << sizeof(x) << "\n";
	std::cout << sizeof(y) << "\n";
	std::cout << sizeof(z) << "\n";
	x = 0x30;
	y = 030;
	std::cout << x << "\n";
	std::cout << y << "\n";
	x = 30;
	std::cout << std::hex << x << "\n";
	std::cout << std::oct << x << "\n";
}
