#include<iostream>
#include "math.h"
namespace utilz {
	double area(double l, double w) {
		return l * w;
	}
	double area(Rectangle rectangle) {
		return rectangle.length * rectangle.width;
	}
}
