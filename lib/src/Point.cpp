#define _USE_MATH_DEFINES
#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
#include <string>

Point::Point() : x(0), y(0) {
	//x = 0.0;
    //y = 0.0; //default constructor. Using sexy colon syntax as rec'd by professor
	std::cout << "Default POINT constructor says hello to you." << "\n";
}

Point::Point(double newX_val, double newY_val) : x(newX_val), y(newY_val) {
	//x = newX_val;
	//y = newY_val; //initialize new x and y values
	std::cout << "This is another POINT constructor." << "\n";
}

Point::~Point() {
}


std::string Point::ToString() const {
	
	std::stringstream pnt;
	pnt << "Point(" << x << "," << y << ")" << "\n";
	std::cout << pnt.str();
	return pnt.str();
}

double Point::Distance() const {
	double result = sqrt(pow(x, 2.0) + pow(y, 2.0)); //(x^2 + y^2)^.05
		return result;
}

double Point::Distance(Point& p1) const {
	double result = sqrt(pow(x- p1.x,2.0) + pow(y - p1.y,2.0)); // ((x2-x1)^2 + (y2-y1)^2)^0.5
return result;

}


