#include<iostream>
int main() {
	int a[3][3] = { {0,1,3},{1,2,3},{5,6,6} };
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			std::cout << a[r][c] << "\t";
		}
		std::cout << "\n";
	}
}
