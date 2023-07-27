#define _USE_MATH_DEFINES
#include "Point.hpp"
#include "Line.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
#include <string>

/////Line part

Line::Line() {
	Point startPoint;
	Point endPoint;
	//default constructor. start and end point both (0,0)
	std::cout << "Default LINE constructor says hello to you." << "\n";
}

Line::Line(const Point& pnt1, const Point& pnt2) {
	startPoint = pnt1;
	endPoint = pnt2;
	std::cout << "This is another LINE constructor." << "\n";
}

Line::Line(const Line& l) {
	startPoint = l.startPoint;
	endPoint = l.endPoint;
	std::cout << "Copy LINE constructor says Hello to you." << "\n";
}
Line::~Line() {
	std::cout << "See you later pretty LINE..." << "\n";
}

Point Line::start() const {
	std::cout << "\n" << "Start Point is:(" << startPoint.X() << "," << startPoint.Y() << ")" << "\n";
	return startPoint;
	//spits out value of x,y for start point
}

Point Line::end() const {
	std::cout << "\n" << "End Point is:(" << endPoint.X() << "," << endPoint.Y() << ")" << "\n"; //spits out value of x,y for start point
	return endPoint;
}

void Line::start(const Point& pt) { //set new start point for line
	startPoint = pt;
	std::cout << "New start point has been set." << "\n";
}

void Line::end(const Point& pt) { //set new end point for line
	endPoint = pt;
	std::cout << "New end point has been set." << "\n";
}

std::string Line::ToString() const {
	std::stringstream pnt;
	pnt << "Line has Start: (" << startPoint.X() << "," << startPoint.Y() << "), and an End of: (" << endPoint.X() << "," << endPoint.Y() << ")" << "\n";
	std::cout << pnt.str();
	return pnt.str();
}

double Line::Length() const {
	double result = sqrt(pow(endPoint.X() - startPoint.X(), 2.0) + pow(endPoint.Y() - startPoint.Y(), 2.0));
	return result;
}
