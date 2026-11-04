#include <iostream>

#include "core/Simulation.hpp"
#include "core/Random.hpp"

int main() {
    Random ran;
    std::cout << ran.getInt(0, 100) << std::endl;
    std::cout << (ran.getBool() ? "True" : "False") << std::endl;
    std::cout << ran.getDouble(0, 100.0) << std::endl;

    return 0;
}