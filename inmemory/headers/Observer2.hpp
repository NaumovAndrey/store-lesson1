#include "IModelChangeObserver.hpp"

class Observer2 : public IModelChangeObserver
{
public:
    Observer2();
    ~Observer2();

    void applyUpdateModel() override;
    void onModelChanged(ModelStore* store) override;
};
