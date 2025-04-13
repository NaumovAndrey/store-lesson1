#include <iostream>
#include <vector>
#include <memory>
#include "Poligon.hpp"

Poligon::Poligon(){}
Poligon::Poligon(std::vector<std::shared_ptr<Point>> points) : m_points(points) {}
Poligon::~Poligon() {}


