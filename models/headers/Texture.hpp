#pragma once

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
    const std::string getName() const;

    void setName(const std::string& name);
};