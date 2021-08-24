#ifndef MATH
#define MATH
	struct Rectangle {
		double length;
		double width;
	};
namespace utilz {
	double area(double l, double w = 5);
	double area(Rectangle rectangle);

}
#endif 
