#include <iostream>
#include<ctime>
#include<cstdlib>
#include<limits>
void print_array(int array[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << "\t";
	}

}
int main(){
	const int SIZE = 10;
	int array[SIZE];
	int count=0;
	for (int i = 0; i < SIZE; i++) {
		if (std::cin >> array[i]) {
			count++;
		}
		else {
			break;
		}
	}
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	//std::cin.ignore(std::numeric_limts<std::stream_size>::max(), '\n');
	print_array(array, count);
	int time;
	std::cin >> time;
	std::cout << time;

}


	
