cmake_minimum_required(VERSION 3.10)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.


project ("AdvancedVector")


set(CMAKE_CXX_STANDARD 17)

add_executable(advanced_vector vector.cpp main.cpp)

