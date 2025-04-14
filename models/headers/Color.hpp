class Color
{
private:
    int m_r;
    int m_g;
    int m_b;
public:
    Color(int r, int g, int g);
    ~Color() = default;

    void setColor(int r, int g, int b);
    int getColor();

    int getColorR() const;
    int getColorG() const;
    int getColorB() const;

    void setColorR(int r);
    void setColorG(int g);
    void setColorB(int b);
};
