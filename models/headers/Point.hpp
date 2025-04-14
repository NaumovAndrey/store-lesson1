#pragma once

#include <iosfwd>
#include <ostream>

#include "contracts.hpp"

class Point
{
private:
	double pointX;
	double pointY;
    double pointZ;

public:
	Point(double x, double y, double z);
	~Point();

	double getPointX() const;
	double getPointY() const;
    double getPointZ() const;

	void setPointX(double x);
	void setPointY(double y);
    void setPointZ(double z);

	friend std::ostream& operator<<(std::ostream &out, const Point &p);
};