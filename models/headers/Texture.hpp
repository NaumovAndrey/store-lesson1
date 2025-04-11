#include <string>

class Texture
{
private:
    int m_id;
    std::string m_name;
public:
    Texture(std::string name);
    ~Texture();

    int getId();
    std::string getName();

    void setName(std::string& name);
};