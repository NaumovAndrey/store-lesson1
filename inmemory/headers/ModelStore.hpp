#pragma once

#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include "PoligonalModel.hpp"
#include "Flash.hpp"
#include "Scene.hpp"
#include "Camera.hpp"
#include "IModelChange.hpp"
#include "IModelChangeObserver.hpp"

// Класс ModelStore является наблюдателем и наблюдаемым объектом одновременно
class ModelStore : public IModelChangeObserver, public IModelChange {
private:
    // Наблюдатели — слабые указатели для предотвращения циклических ссылок
    std::vector<std::weak_ptr<IModelChangeObserver>> observers;
    
    // Векторы моделей, флеш-сигналов, сцен и камер, использующие shared_ptr
    std::vector<std::shared_ptr<PoligonalModel>> models;
    std::vector<std::shared_ptr<Flash>> flashes;
    std::vector<std::shared_ptr<Scene>> scenes;
    std::vector<std::shared_ptr<Camera>> cameras;

public:
    // Конструктор и деструктор
    ModelStore() = default;
    virtual ~ModelStore() = default;

    // Методы добавления элементов
    void addPoligonalModel(std::shared_ptr<PoligonalModel> model);
    void addFlash(std::shared_ptr<Flash> flash);
    void addScene(std::shared_ptr<Scene> scene);
    void addCamera(std::shared_ptr<Camera> camera);

    // Методы получения элементов
    std::shared_ptr<PoligonalModel> getPoligonalModel(int index);
    std::shared_ptr<Flash> getFlash(int index);
    std::shared_ptr<Scene> getScene(int index);
    std::shared_ptr<Camera> getCamera(int index);

    // Методы удаления элементов
    void removePoligonalModel(int index);
    void removeFlash(int index);
    void removeScene(int index);
    void removeCamera(int index);

    // Методы получения количества элементов
    int getModelCount() const { return models.size(); }
    int getFlashCount() const { return flashes.size(); }
    int getSceneCount() const { return scenes.size(); }
    int getCameraCount() const { return cameras.size(); }

    // Реализация интерфейсов IModelChangeObserver и IModelChange
    void notifyChange() override;
    void RegisterModelChanger(std::shared_ptr<IModelChangeObserver> observer) override;
    void RemoveModelChanger(std::shared_ptr<IModelChangeObserver> observer) override;

    void applyUpdateModel() override;
    void onModelChanged(ModelStore* store) override;
};