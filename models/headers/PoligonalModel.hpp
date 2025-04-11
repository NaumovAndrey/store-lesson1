#include <vector>
#include "Poligon.hpp"
#include "Texture.hpp"

class PoligonalModel
{
private:
    std::vector<Poligon> m_poligons;
    std::vector<Texture> m_textures;
public:

    PoligonalModel(std::vector<Poligon> *poligon);
    PoligonalModel(std::vector<Poligon> *poligon, std::vector<Texture> textures);
    ~PoligonalModel();

    const std::vector<Poligon>& getPoligons() const;
    const std::vector<Texture>& getTextures() const;
};