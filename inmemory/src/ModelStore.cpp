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
    //for (auto it = this->observers.begin(); it != this->observers.end(); ++it) {
    //    (*it)->update();
    //}
}
