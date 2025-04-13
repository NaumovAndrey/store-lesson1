#include "IModelChangeObserver.hpp"

class Observer2
{
private:
    
public:
    Observer2();
    ~Observer2();

    void applyUpdateModel() @override
    {
        std::cout << "update model in Observer2" << std::endl;
    }
};

Observer2::Observer2()
{
}

Observer2::~Observer2()
{
}
