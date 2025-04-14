#include "ModelStore.hpp"


// Добавление полигональной модели
void ModelStore::addPoligonalModel(std::shared_ptr<PoligonalModel> model) {
    models.push_back(model);
    notifyChange();
}

//Добавление Flash(свет) модели
void ModelStore::addFlash(std::shared_ptr<Flash> flash) {
    flashes.push_back(flash);
    notifyChange(); // Уведомляем наблюдателей об изменении модели
}

// Добавление scena(сцена) модели
void ModelStore::addScene(std::shared_ptr<Scene> scene) {
    scenes.push_back(scene);
    notifyChange(); // Уведомляем наблюдателей об изменении модели
}

//Добавление камеры
void ModelStore::addCamera(std::shared_ptr<Camera> camera) {
    cameras.push_back(camera);
    notifyChange(); // Уведомляем наблюдателей об изменении модели
}

// Методы получения элементов
std::shared_ptr<PoligonalModel> ModelStore::getPoligonalModel(int index) {
    if (index >= 0 && index < models.size()) {
        return models[index];
    }
    return nullptr; // Если индекс вне диапазона, возвращаем nullptr
}

std::shared_ptr<Flash> ModelStore::getFlash(int index) {
    if (index >= 0 && index < flashes.size()) {
        return flashes[index];
    }
    return nullptr; // Если индекс вне диапазона, возвращаем nullptr
}

std::shared_ptr<Scene> ModelStore::getScene(int index) {
    if (index >= 0 && index < scenes.size()) {
        return scenes[index];
    }
    return nullptr; // Если индекс вне диапазона, возвращаем nullptr
}

std::shared_ptr<Camera> ModelStore::getCamera(int index) {
    if (index >= 0 && index < cameras.size()) {
        return cameras[index];
    }
    return nullptr; // Если индекс вне диапазона, возвращаем nullptr
}


// Методы удаления элементов
void ModelStore::removePoligonalModel(int index) {
    if (index >= 0 && index < models.size()) {
        models.erase(models.begin() + index);
        notifyChange(); // Уведомляем наблюдателей об изменении модели
    }
}

void ModelStore::removeFlash(int index) {
    if (index >= 0 && index < flashes.size()) {
        flashes.erase(flashes.begin() + index);
        notifyChange(); // Уведомляем наблюдателей об изменении модели
    }
}

void ModelStore::removeScene(int index) {
    if (index >= 0 && index < scenes.size()) {
        scenes.erase(scenes.begin() + index);
        notifyChange(); // Уведомляем наблюдателей об изменении модели
    }
}

void ModelStore::removeCamera(int index) {
    if (index >= 0 && index < cameras.size()) {
        cameras.erase(cameras.begin() + index);
        notifyChange(); // Уведомляем наблюдателей об изменении модели
    }
}

// Уведомление наблюдателей об изменениях
void ModelStore::notifyChange() {
    // Удаляем "мёртвых" наблюдателей и уведомляем живых
    observers.erase(
        std::remove_if(observers.begin(), observers.end(),
            [this](std::weak_ptr<IModelChangeObserver>& weakObs) {
                if (auto obs = weakObs.lock()) {
                    obs->onModelChanged(this);
                    return false; // оставить в списке
                }
                return true; // удалить мёртвого наблюдателя
            }),
        observers.end()
    );
}

// Регистрация нового наблюдателя
void ModelStore::RegisterModelChanger(std::shared_ptr<IModelChangeObserver> observer) {
    observers.push_back(observer); // Добавляем наблюдателя в список
}

// Удаление наблюдателя
void ModelStore::RemoveModelChanger(std::shared_ptr<IModelChangeObserver> observer) {
    // Используем алгоритм erase-remove для безопасного удаления элемента
    observers.erase(
        std::remove_if(observers.begin(), observers.end(),
                       [&observer](const std::weak_ptr<IModelChangeObserver>& weakObserver) {
                           auto lockedObserver = weakObserver.lock();
                           return !lockedObserver || lockedObserver == observer;
                       }),
        observers.end());
}

void ModelStore::applyUpdateModel() { }

void ModelStore::onModelChanged(ModelStore* store) { }
