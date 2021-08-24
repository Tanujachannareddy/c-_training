#include<iostream>
#include "math.h"
double area(double l, double w) {
	return l * w;
}
double area(Rectangle rectangle) {
	return rectangle.length * rectangle.width;
}
