#pragma once

#include <vector>
#include <memory>
#include <iostream>
#include "PoligonalModel.hpp"
#include "Flash.hpp"
#include "Scene.hpp"
#include "Camera.hpp"
#include "IModelChange.hpp"
#include "IModelChangeObserver.hpp"


class ModelStore : public IModelChangeObserver, public IModelChange
{
private:
    std::vector<std::shared_ptr<IModelChangeObserver>> mod;

    std::vector<std::shared_ptr<PoligonalModel>> models;
    std::vector<std::shared_ptr<Flash>> flashes;
    std::vector<std::shared_ptr<Scene>> scenes;
    std::vector<std::shared_ptr<Camera>> camers;

public:
    ModelStore();
    ~ModelStore();


    void addPoligonalModel(std::shared_ptr<PoligonalModel> model);
    void addFlash(std::shared_ptr<Flash> flash);
    void addScene(std::shared_ptr<Scene> scene);
    void addCamera(std::shared_ptr<Camera> camera);

    std::shared_ptr<PoligonalModel> getPoligonalModel(int index);
    std::shared_ptr<Flash> getFlash(int index);
    std::shared_ptr<Scene> getScene(int index);
    std::shared_ptr<Camera> getCamera(int index);

    void removePoligonalModel(int index);
    void removeFlash(int index);
    void removeScene(int index);
    void removeCamera(int index);

    int getModelCount();
    int getFlashCount();
    int getSceneCount();
    int getCameraCount();

    void notifyChange() override;
};


