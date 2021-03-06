/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include "Square.h"

Square::Square(const char* n, double side) : Rectangle(n, side, side) {
}

Square::~Square() {
}

double Square::calcArea() const {
  std::cout << "Calc area of square..." << std::endl;
  return Rectangle::calcArea();
}

double Square::calcPerimeter() const {
  std::cout << "Calc perimter of square..." << std::endl;
  return Rectangle::calcPerimeter();
}
