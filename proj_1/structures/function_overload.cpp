#include<iostream>
#include<vector>
struct Rectangle {
	double length;
	double width;
};
double area(double l, double w) {
	return l * w;
}
double area(double l) {
	return l * l;
}
double area(Rectangle rectangle) {
	return rectangle.length * rectangle.width;
}
int main() {
	Rectangle rectangle;
	rectangle.length = 10;
	rectangle.width = 10;

	std::cout << area(rectangle.length, rectangle.width) << std::endl;
	std::cout<<area(rectangle.length) << std::endl;
	std::cout<<area(rectangle) << std::endl;
	
}
