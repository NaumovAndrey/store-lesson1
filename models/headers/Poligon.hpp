#pragma once

#include <vector>
#include <memory>
#include "Point.hpp"

class Poligon
{
private:
    std::vector<std::shared_ptr<Point>> m_points;
public:
    Poligon(std::vector<std::shared_ptr<Point>> points);
    ~Poligon();

};
