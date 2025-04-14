#include <iomanip>
#include "Camera.hpp"

Camera::Camera(Point point, double adgle) : m_Camera(point), m_Angle(adgle) {}

Point Camera::getCameraPoint() const { return m_Camera; }
double Camera::getCameraAngle() const { return m_Angle; }


void Camera::setCameraPoint(Point& point) 
{
     this->m_CameraPoint = point; 
}
void Camera::setCameraAngle(double& angle) 
{
     this->m_CameraAngle = angle; 
}