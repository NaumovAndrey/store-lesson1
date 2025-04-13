#pragma once

#include "IModelChangeObserver.hpp"
class IModelChange
{
    public:
        virtual void notifyChange() = 0;

        virtual void RegisterModelChanger(std::shared_ptr<IModelChangeObserver> model) = 0;

        virtual void RemoveModelChanger(std::shared_ptr<IModelChangeObserver> model) = 0;
  };