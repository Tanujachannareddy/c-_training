#include <iostream>
#include <math.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
	int A = *((int*)a);
	int B = *((int*)b);
	return abs(A) - abs(B);
}
int main() {
	int a[] = { 3,5,4,1,2,6 };
	int b[] = { -1,-6,-50,60,-41,-21 };
	qsort(a, 6, sizeof(int), compare);
	qsort(b, 6, sizeof(int), compare);
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << std::endl;
		std::cout << b[i] << std::endl;
	}
}
