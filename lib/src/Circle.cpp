#define _USE_MATH_DEFINES
#include "../include/Point.hpp"
#include "../include/Line.hpp"
#include "../include/Circle.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
#include <string>

//////Circle magic time

Circle::Circle() {
	radius = 0.0;
	Point pt; //default constructor. 
	std::cout << "Default CIRCLE constructor says hello to you." << "\n";
}

Circle::Circle(const double& r, const Point& pt) {
	radius = r; //setting radius equal to r
	center = pt; //setting Point center equal to pt passed by ref
	std::cout << "This is another CIRCLE constructor." << "\n";
}

Circle::Circle(const Circle& c) {
	radius = c.radius;
	center = c.center;
	std::cout << "Copy CIRCLE constructor says Hello to you." << "\n";
}

Circle::~Circle() {
	std::cout << "See you later CIRCLE..." << "\n";
}

double Circle::rad() const {
	return radius; //spits out value of radius
}

Point Circle::ctr() const {
	return center; //spits out Point center	
}

void Circle::rad(const double& newR_value) {
	radius = newR_value;
	std::cout << "radius has been set." << "\n";
}

void Circle::ctr(const Point& pt) {
	center = pt;
	std::cout << "new center has been set." << "\n";
}

std::string Circle::ToString() const {

	std::stringstream pnt;
	pnt << "The Circle has area: " << M_PI * radius * radius << ", diameter: " << 2 * radius << ", and a Circumference of: " << 2 * M_PI * radius << "\n";
	std::cout << pnt.str();
	return pnt.str();
}

double Circle::Area() const {
	double result = M_PI * radius * radius;
	return result;
}

double Circle::Circumference() const {
	double result = 2 * M_PI * radius;
	return result;
}

double Circle::Diameter() const {
	double result = 2 * radius;
	return result;
}

