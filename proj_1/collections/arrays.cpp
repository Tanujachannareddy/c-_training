#include <iostream>
#include<ctime>
#include<cstdlib>
void print_array(int array[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}

}
int main(){
	int array1[] = { 1,2 };
	std::cout << sizeof(array1) << std::endl;
	int size = sizeof(array1)/sizeof(array1[0]);
	print_array(array1, size);
	
	/*int array2[10] = { 1,2 };
	int num_elements = 2;
	std::cout << sizeof(array2) << std::endl;
	int size = sizeof(array2) / sizeof(array2[0]);
	for (int i = 0; i < num_elements; i++) {
		std::cout << array2[i] << std::endl;
	}*/
	/*int array[10];
	array[0] = 10;
	std::cin >> array[0];
	std::cout << array[0] << std::endl;*/
}


	
