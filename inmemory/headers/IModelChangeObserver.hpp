#pragma once

class IModelChangeObserver {
public:
    virtual void applyUpdateModel() = 0;

    virtual ~IModelChangeObserver() = default;


};
