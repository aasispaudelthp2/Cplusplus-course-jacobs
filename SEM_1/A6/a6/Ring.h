/*
CH08-320142
a6_p3.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;

		//Calculates perimter :: Defined virtually in Area class
		double calcPerimeter() const;
	private:
		double innerradius;
};

#endif
