#include <iostream>
#include "Flash.hpp"

Flash::Flash(Point point, double angle, std::unique_ptr<Color> color, double power)
    : m_flashPoint(point), m_angle(angle), m_color(std::move(color)), m_power(power)
{
    if(!m_color)
    {
        m_color = std::make_unique<Color>(255, 255, 255);
    }
}

Point::getFlashPoint()
{
    return this->m_flashPoint
}

void Flash::setFlashPoint(Point point){
    this->m_flashPoint = point;
}

double Flash::getAngle(){
    return this->m_angle;
}

void Flash::setAngle(double& angle){
    this->m_angle = angle;
}

double Flash::getPower(){
    return this->m_power;
}

void Flash::setPower(double& power){
    this->m_power = power
}

std::unique_ptr<Color> Flash::getColor(){
    return this->m_color;
}

void Flash::setColor(std::unique_ptr<Color> color){
    this->m_color = color
}
