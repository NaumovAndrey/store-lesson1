#include <vector>

class Poligon
{
private:
    std::vector<Point> m_points;
public:
    Poligon(std::vector<Point> *points);
    ~Poligon();
};
