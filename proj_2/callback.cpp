#include <iostream>
#include <math.h>
int compare(int a, int b) {
	if (a > b) {
		return 1;
	}
	return -1;
}
int absolute_compare(int a, int b) {
	if (abs(a )> abs(b)) {
		return 1;
	}
	return -1;
}
void bubblesort(int *a, int n,int (*compare)(int,int)) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (compare(a[j], a[j + 1])>0)
			{
			int temp = a[j];
			a[j] = a[j+1];
			a[j + 1] = temp;
			}
		}
	}

}
int main() {
	int a[] = { 3,5,4,1,2,6 };
	int b[] = { -1,-6,-50,60,-41,-21 };
	bubblesort(a, 6,compare);
	bubblesort(a, 6,absolute_compare);
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << std::endl;
		std::cout << b[i] << std::endl;
	}
}
