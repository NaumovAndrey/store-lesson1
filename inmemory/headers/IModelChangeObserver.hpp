#pragma once

class IModelChangeObserver {
public:
    virtual void notify() = 0;

    virtual ~IModelChangeObserver() = default;
};
