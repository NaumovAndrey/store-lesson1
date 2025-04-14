#include <iostream>
#include "Color.hpp"
#include "Flash.hpp"

Color::Color(int r, int g, int b) : m_r(r), m_g(g), m_b(b)
{
    if(!is_finite(r) || !is_finite(g) || !is_finite(b))
    {
        throw std::invalid_argument("Введены некорректные данные");
    }

    if(r < 0 || g < 0 || b < 0 || r > 255 || g > 255 || b > 255)
    {
        throw std::invalid_argument("Введены некорректные данные");
    }
}

void Color::setColor(int r, int g, int b) {
    this->m_r = r;
    this->m_g = g;
    this->m_b = b;
}


Color Color::getColor() {
    return Color(m_r, m_g, m_b);
}



int Color::getColorR() const { return m_r; }
int Color::getColorG() const { return m_g; }
int Color::getColorB() const { return m_b; }

void Color::setColorR(int r) { m_r = r; }
void Color::setColorG(int g) { m_g = g; }
void Color::setColorB(int b) { m_b = b; }


std::ostream& operator<<(std::ostream &out, const Color &c)
{
    out << "r = " << c.m_r << ", g = " << c.m_g << ", b = " << c.m_b << std::endl;
    return out;
}
