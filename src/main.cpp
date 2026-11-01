#include <iostream>

#include "core/Simulation.hpp"

int main() {
    Simulation sim;
    sim.run();
    sim.stop();

    return 0;
}