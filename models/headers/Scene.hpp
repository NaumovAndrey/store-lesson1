#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <PoligonalModel.hpp>
#include <Flash.hpp>

class Scene
{
private:
    int m_id;
    std::vector<std::shared_ptr<PoligonalModel>> m_poligonalModels;
    std::vector<std::shared_ptr<Flash>> m_flashs;
public:
    Scene() = default;
    ~Scene() = default;

    void addPoligonalModel(std::shared_ptr<PoligonalModel> model);
    void addFlash(std::shared_ptr<Flash> flash);

    std::shared_ptr<PoligonalModel> getPoligonalModel(int index);
    std::shared_ptr<Flash> getFlash(int index);

    void removePoligonalModel(int index);
    void removeFlash(int index);
};
