#include <iostream>
#include "Observer1.hpp"

Observer1::Observer1() {}
Observer1::~Observer1() {}

void Observer1::applyUpdateModel() {
    std::cout << "Добавлена новая полигональная модель - observer1" << std::endl;
}

void Observer1::onModelChanged(ModelStore* store) {
    std::cout << "ModelStore изменён - observer1" << std::endl;
    applyUpdateModel();
}
