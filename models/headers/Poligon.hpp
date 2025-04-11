#include <vector>

class Poligon
{
private:
    std::vector<Point> m_points;
public:
    Poligon();
    Poligon(std::vector<Point> *points);
    ~Poligon();
};
