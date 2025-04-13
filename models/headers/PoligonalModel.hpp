#pragma once

#include <memory>
#include <vector>
#include "Poligon.hpp"
#include "Texture.hpp"

class PoligonalModel {
private:
    std::vector<std::shared_ptr<Poligon>> m_poligons;
    std::vector<std::shared_ptr<Texture>> m_textures;

public:
    PoligonalModel(std::vector<std::shared_ptr<Poligon>> poligons,
        std::vector<std::shared_ptr<Texture>> textures = {});

    ~PoligonalModel() = default;

    const std::vector<std::shared_ptr<Poligon>> getPoligons() const { return m_poligons; }
    const std::vector<std::shared_ptr<Texture>> getTextures() const { return m_textures; }
};