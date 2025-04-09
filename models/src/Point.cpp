#include <iostream>
#include "Point.hpp"

Point::Point(double x, double y, double z)
    : pointX(x), pointY(y), pointZ(z) 
    {
        if (!is_finite(x) || !is_finite(y) || !is_finite(z)) 
        {
            throw std::invalid_argument("Введены некорректные координаты");
        }
    }
Point::~Point(){}

double Point::getPointX() const { return this-> pointX; }
double Point::getPointY() const { return this-> pointY; }
double Point::getPointZ() const { return this-> pointZ; }

void Point::setPointX(double x) { this->pointX = x; }
void Point::setPointY(double y) { this->pointY = y; }
void Point::setPointZ(double z) { this->pointZ = z; }

std::ostream& operator<<(std::ostream &out, const Point &p)
{
    out << "(x: " << p.getPointX() << ", y: " << p.getPointY() << ", z: " << p.getPointZ() << ")";
    return out;
}