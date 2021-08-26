#include <iostream>
//int fun(int c[], int a[][3], int b[][2][2]) {
//
//}
void fun(int c[], int (*a)[3], int (*b)[2][2]) {
	int size = 3;

		for(int r=0; r < size; r++) {
			for (int c1=0; c1 < 2; c1++) {
				for (int c2=0; c2 < 2; c2++) {
					std::cout << *(b[r][c1] + c2) << "\t";
				}
			}
	}
		std::cout << "\n";
}

int main() {
	int a[2][3] = { {1,6,2},{3,5,6} };
	//std::cout << a << "\t"<< &a[0][0] << "\t"<< * a << std::endl;
	//int (*p)[3] = a;
	std::cout << *(a[1] + 1) << std::endl;
	int b[3][2][2] = { {{0,1},{2,3}},
					   {{4,5},{6,7}},
		               {{8,9},{10,11}} 
	                 };
	std::cout << b << "\t"<< *b << "\t"<< & b[0][0] << "\t"<< b[0][0] <<std::endl;
	std::cout << *(b[1][0] + 1) << std::endl;
	int (*p)[2][2] = b;
	int c[3] = { 1,2,3 };
	int* p0 = c;
	fun(c, a, b);
}
