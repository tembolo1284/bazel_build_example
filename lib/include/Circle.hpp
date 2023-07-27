#ifndef Cirlce_HPP
#define Cirlce_HPP
#include <iostream>
#include <string>

class Circle {
private:
	double radius; //radius
	Point center; //center of the circle

public:
	Circle(); //constructor with radius and center at 0 and (0,0). Boring
	Circle(const double& rad, const Point& ctr); //constructor with radius r and center at ctr
	Circle(const Circle& c); //copy constructor

	~Circle(); //destructor
	double rad() const; //gets radius r
	void rad(const double& newRad); //sets radius r

	Point ctr() const; //get center
	void ctr(const Point& newPt); //sets new center pt

	std::string ToString() const; //returns cout string description of the circle by listing radius, center, area, circumference, and diameter


	double Area() const; //calc area of circle pi*r^2
	double Diameter() const; //calc diameter of circle 2*r
	double Circumference() const; //calc circumference of circle 2*pi*r
};

#endif