#pragma once

class ModelStore;
class IModelChangeObserver {
public:
    virtual void applyUpdateModel() = 0;
    virtual void onModelChanged(ModelStore* store) = 0;
    virtual ~IModelChangeObserver() = default;


};
