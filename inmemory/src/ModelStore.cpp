#include "ModelStore.hpp"

ModelStore::ModelStore() {
}

ModelStore::~ModelStore() {
}

void ModelStore::addPoligonalModel(std::shared_ptr<PoligonalModel> model)
{
    this->models.push_back(model);
    this->notifyChange();
}

void ModelStore::notifyChange()
{
    for (auto it = observers.begin(); it != observers.end(); ) {
        if (auto observer = it->lock()) {
            observer->applyUpdateModel();
            ++it;
        } else {
            it = observers.erase(it);
        }
    }
}

void ModelStore::RegisterModelChanger(std::shared_ptr<IModelChangeObserver> model) {
    observers.push_back(model);
}

void ModelStore::RemoveModelChanger(std::shared_ptr<IModelChangeObserver> model)
{
    observers.erase(
        std::remove_if(observers.begin(), observers.end(),
            [&model](const std::weak_ptr<IModelChangeObserver>& weakObs) {
                auto sharedObs = weakObs.lock();
                return !sharedObs || sharedObs == model;
            }),
        observers.end()
    );
}

