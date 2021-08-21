
#include <iostream>

int main() {
	int a[] = { 1,2,3, };
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Address of array is " << a+i << std::endl;
		std::cout << "Address of array is " << &a[i] << std::endl;
		std::cout << "value of array is " << a[i] << std::endl;
		std::cout << "value of array is " << *(a+i) << std::endl;
	}

	}
