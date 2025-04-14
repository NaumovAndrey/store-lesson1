#pragma once

#include <memory>
#include "Point.hpp"
#include "Color.hpp"

class Flash
{
private:
    Point m_flashPoint;
    double m_angle;
    std::unique_ptr<Color> m_color;
    double m_power; // яркость
public:
    Flash(Point point, double angle, std::unique_ptr<Color> color = nullptr, double power = 1.0);
    ~Flash() = default;

    Point getFlashPoint();
    double getAngle();
    std::unique_ptr<Color> getColor();
    double getPower();

    void setFlashPoint(Point& point);
    void setAngle(double& angle);
    void setColor(std::unique_ptr<Color> color);
    void setPower(double& power);

};
