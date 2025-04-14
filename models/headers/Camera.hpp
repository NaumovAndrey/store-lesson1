#pragma once
#include "Point.hpp"

class Camera
{
private:
    Point m_CameraPoint;
    double m_CameraAngle;
public:
    Camera(Point point, double angle);
    ~Camera() = default;

    Point getCameraPoint() const;
    double getCameraAngle()const;

    void setCameraPoint(Point& point);
    void setCameraAngle(double& angle);
};
