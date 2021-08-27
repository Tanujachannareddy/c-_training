#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int* a = (int*)malloc(n*sizeof(int));
	//std::cout << n << sizeof(n);
	for (int i = 0; i < n; i++) {
		a[i] = i+1;
	}
	for (int i = 0; i < n; i++) {
		std::cout <<a[i] << std::endl;
	}

}
