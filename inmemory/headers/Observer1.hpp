#include "IModelChangeObserver.hpp"

class Observer1 : public IModelChangeObserver
{
public:
    Observer1();
    ~Observer1();

    void applyUpdateModel() override;
    void onModelChanged(ModelStore* store) override;
};
