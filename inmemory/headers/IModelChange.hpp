#pragma once
class IModelChange
{
    public:
        virtual void notifyChange() = 0;
  };