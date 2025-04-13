#include "IModelChangeObserver.hpp"

class Observer1
{
private:
    
public:
    Observer1();
    ~Observer1();

    void applyUpdateModel() @override
    {
        std::cout << "Добавленна новая полигональная модель - observer1" << std::endl;
    }
};


Observer1::Observer1()
{
}

Observer1::~Observer1()
{
}

