#include <iostream>
#include "Point.hpp"
#include "ModelStore.hpp"
#include "PoligonalModel.hpp"
#include "Poligon.hpp"
#include "Observer1.hpp"
#include "Observer2.hpp"

#include <memory>

int main()
{
    std::cout << "---------------Store----------------" << std::endl;
    std::shared_ptr<Observer1> obs1 = std::make_shared<Observer1>();
    std::shared_ptr<Observer2> obs2 = std::make_shared<Observer2>();

    std::shared_ptr<ModelStore> store = std::make_shared<ModelStore>();

    store->RegisterModelChanger(obs1);
    store->RegisterModelChanger(obs2);

    
    auto p1 = std::make_shared<Point>(1, 2, 3);
    auto p2 = std::make_shared<Point>(4, 5, 6);
    auto p3 = std::make_shared<Point>(7, 8, 9);

    std::vector<std::shared_ptr<Point>> points = {p1, p2, p3};
    auto poly = std::make_shared<Poligon>(points);

    std::vector<std::shared_ptr<Poligon>> poligons = {poly};
    std::shared_ptr<PoligonalModel> model = std::make_shared<PoligonalModel>(poligons);

    store->addPoligonalModel(model);

    

    return 0;
}