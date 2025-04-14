cmake_minimum_required(VERSION 3.10)
project(arhitecture_hw1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем все исходники
add_executable(store3d
    main.cpp
    models/src/Camera.cpp
    models/src/Color.cpp
    models/src/Flash.cpp
    models/src/Point.cpp
    models/src/Poligon.cpp
    models/src/Scene.cpp
    models/src/Texture.cpp
    models/src/PoligonalModel.cpp
    inmemory/src/ModelStore.cpp
    inmemory/src/Observer1.cpp
    inmemory/src/Observer2.cpp
)

# Указываем путь к заголовкам
target_include_directories(store3d PRIVATE models/headers inmemory/headers)

# Включаем assert'ы
target_compile_definitions(store3d PUBLIC "_GLIBCXX_ASSERTIONS")