#include "PoligonalModel.hpp"

PoligonalModel::PoligonalModel(std::vector<Poligon> *poligon) 
{
    this->m_poligons = poligon;
 }
PoligonalModel::PoligonalModel(std::vector<Poligon> *poligon, std::vector<Texture> textures) 
{
    this->m_poligons = poligon;
    this->m_textures = textures;
}
PoligonalModel::~PoligonalModel() {}

const std::vector<Poligon>& PoligonalModel::getPoligons() const
{
    return m_poligons;
}

const std::vector<Texture>& PoligonalModel::getTextures() const 
{
    return m_textures;
}
