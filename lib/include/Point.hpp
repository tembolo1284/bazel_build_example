#ifndef Point_HPP
#define Point_HPP
#include <iostream>
#include <string>

class Point {
private:
	double x;
	double y; //x and y coordinates, respectively.
public:
	Point(); //constructor
	Point(double x_val, double y_val); //initialization with x and y values
	~Point(); //destructor

	double X() const; //Getter
	double Y() const; //Getter

	void X(double newX_val) { x = newX_val; }; //hoping this is what you guys mean by default inline. Setter
	void Y(double newY_val) { y = newY_val; }  //Setter

	std::string ToString() const; //returns cout string description of the point
	
	double Distance() const; //calc dist from current point to origin
	double Distance(Point& p1) const; //calc dist from curr pt to point passed in function
};
inline double Point::X() const {
	return x; //spits out value of x
}
inline double Point::Y() const {
	return y; //spits out value of y	
}

#endif