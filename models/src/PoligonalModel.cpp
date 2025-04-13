#include "PoligonalModel.hpp"  // Включаем заголовочный файл с определением класса

PoligonalModel::PoligonalModel(std::vector<std::shared_ptr<Poligon>> poligons,
                               std::vector<std::shared_ptr<Texture>> textures)
    : m_poligons(std::move(poligons)),
      m_textures(std::move(textures))
{}

const std::vector<std::shared_ptr<Poligon>> PoligonalModel::getPoligons() const {
    return m_poligons;
}

const std::vector<std::shared_ptr<Texture>> PoligonalModel::getTextures() const {
    return m_textures;
}

PoligonalModel::~PoligonalModel() = default;