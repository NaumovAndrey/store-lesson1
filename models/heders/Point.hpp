#pragma once

#include <iosfwd>
#include <ostream>

#include "contracts.h"

class Point
{
private:
	double pointX;
	double pointY;
    double pointZ;

public:
	Point(double x, double y, double z) 
		[[expects: is_finite(x)]]
		[[expects: is_finite(y)]]
		[[expects: is_finite(z)]]
		{
			if (!is_finite(x) || !is_finite(y) || !is_finite(z)) {
				throw std::invalid_argument("Введены не корректные координаты");
			}
		};
	~Point();

	double getPointX() const;
	double getPointY() const;
    double getPointZ() const;

	void setPointX(double x);
	void setPointY(double y);
    void setPointZ(double z);

	friend std::ostream& operator<<(std::ostream &out, const Point &p);
};