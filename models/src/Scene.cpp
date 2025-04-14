#include "Scene.hpp"
#include "Camera.hpp"

void Scene::addPoligonalModel(std::shared_ptr<PoligonalModel> model) 
{
    m_poligonalModels.push_back(model);
}

void Scene::addFlash(std::shared_ptr<Flash> flash) 
{
    m_flashs.push_back(flash);
}

std::shared_ptr<PoligonalModel> Scene::getPoligonalModel(int index)
{
    return m_poligonalModels[index];
}

std::shared_ptr<Flash> Scene::getFlash(int index)
{
    return m_flashs[index];

}

void Scene::removePoligonalModel(int index)
{
    m_poligonalModels.erase(m_poligonalModels.begin()+index);
}

void Scene::removeFlash(int index)
{
    m_flashs.erase(m_flashs.begin()+index);
}


