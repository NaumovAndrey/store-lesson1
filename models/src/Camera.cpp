#include <iomanip>
#include "Camera.hpp"

Camera::Camera(Point point, double adgle) : m_CameraPoint(point), m_CameraAngle(adgle) {}

Point Camera::getCameraPoint() const { return m_CameraPoint; }
double Camera::getCameraAngle() const { return m_CameraAngle; }


void Camera::setCameraPoint(Point& point) 
{
     this->m_CameraPoint = point; 
}
void Camera::setCameraAngle(double& angle) 
{
     this->m_CameraAngle = angle; 
}