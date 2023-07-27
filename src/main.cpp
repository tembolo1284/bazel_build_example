#include <iostream>
#include <stdio.h>
#include "../lib/include/Point.hpp"
#include "../lib/include/Line.hpp"
#include "../lib/include/Circle.hpp"
#include <iostream>


/* to build project manually one can run
g++ -I lib/include src/main.cpp lib/src/*.cpp -o main

To run the bazel command:

bazel run src:Main

*/
void print(const Point& pnt) {
	std::cout << "Your point is: (" << pnt.X() << "," << pnt.Y() << ")" << "\n";
}

void print(const Circle& c) {
	std::cout << "\n" << "Radius is: " << c.rad() << "\n";
	Point pnt = c.ctr();
	std::cout << "X coordinate of center is: " << pnt.X() << "\n" ;
	std::cout << "Y coordinate of center is: " << pnt.Y() << "\n";
}

int main() {

	double x_pt{}, y_pt{}; //variable for x and y coordinates
	Point pnt1; //default constructor call
	int a = 1; //random variables for point use later
	int b = 2;
	pnt1.X(); 
	pnt1.Y(); 
	
	Point pnt3(a, b); //create new pnt3 with coordinates a and b
	print(pnt3); //call print function for pnt3	
	pnt3.ToString(); //pnt3 going through ToString function

	std::cout << "X coordinate of pnt3 is: " << pnt3.X() << "\n"; //print out x coordinate of pnt1
	std::cout << "Y coordinate of pnt3 is: " << pnt3.Y() << "\n"; //print out y coordinate of pnt1

	//testing distance functions
	std::cout << "Distance from your pnt to the origin is: " << pnt3.Distance() << "\n"; //should be (2^2 +1^2)^0.5 = sqrt of 5
	std::cout << "Distance between the two points is: " << pnt1.Distance(pnt3) << "\n"; //should be ((x-2)^2 + (y-1)^2)^0.5

	return 0;

}