#pragma once
class Color
{
private:
    int m_r;
    int m_g;
    int m_b;
public:
    Color(int r, int g, int b);
    ~Color() = default;

    void setColor(int r, int g, int b);
    Color getColor();;

    int getColorR() const;
    int getColorG() const;
    int getColorB() const;

    void setColorR(int r);
    void setColorG(int g);
    void setColorB(int b);

    friend std::ostream& operator<<(std::ostream &out, const Color &c);
};
