#include <iostream>
#include <vector>
//void print(char a[])
//{
//	int i=0;
//	while (a[i] != '\0') {
//		std::cout << a[i] << std::endl;
//		i++;
//	}
//	std::cout << '\n';
//		
//}
void print( const char* a)
{
	//a[0] = 'y'; only reads the string
	int i = 0;
	while (*(a+i) != '\0') {
		std::cout << a[i] << std::endl;
		i++;
	}
	std::cout << '\n';

}
int main() {
	char a[] = "mahithsri";
	print(a);
	}
