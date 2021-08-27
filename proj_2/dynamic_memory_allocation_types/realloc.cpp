#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int* a = (int*)malloc(n*sizeof(int));
	//std::cout << n << sizeof(n);
	for (int i = 0; i < n; i++) {
		a[i] = i+1;
	}
	//std::cout << "previous bloc add " << a << "new block address " << b << std::endl;
	//int* b = (int*)realloc(a, 0);// free(a)
	//int* b = (int*)realloc(a, 2 * n * sizeof(int));
	int* b = (int*)realloc(NULL, 2*n*sizeof(int));//malloc
	free(b);
	free(a);
	//a = NULL;
	for (int i = 0; i < n; i++) {
		std::cout <<b[i] << std::endl;
		std::cout <<a[i] << std::endl;
	}

}
