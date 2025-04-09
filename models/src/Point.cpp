#include "models/heders/Point.hpp"

Point::Point(double x, double y, double z) [[expects: x_is_number(x)]] {}
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