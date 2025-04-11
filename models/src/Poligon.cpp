#include <iostream>
#include <vector>
#include "Poligon.hpp"

Poligon::Poligon(){}
Poligon::Poligon(std::vector<Point> *points) : m_points(points) {}
~Poligon::Poligon(){}


