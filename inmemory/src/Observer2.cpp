#include <iostream>
#include "Observer2.hpp"

Observer2::Observer2() {}
Observer2::~Observer2() {}

void Observer2::applyUpdateModel() {
    std::cout << "Добавлена новая полигональная модель - observer2" << std::endl;
}

void Observer2::onModelChanged(ModelStore* store) {
    std::cout << "ModelStore изменён - observer2" << std::endl;
    applyUpdateModel();
}
