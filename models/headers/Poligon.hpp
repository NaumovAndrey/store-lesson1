#include <vector>

class Poligon
{
private:
    std::vector<Point> points;
public:
    Poligon(std::vector<Point> *points);
    ~Poligon();
};
