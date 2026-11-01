/*
    1 tick = 1 hour
    24 ticks = 1 day
    720 ticks = 30 days
    8760 ticks = 1 year
*/

#include <iostream>
#include <chrono>
#include <thread>

#include "core/Simulation.hpp"

Simulation::Simulation() {
    //
}

Simulation::~Simulation() {}

void Simulation::run() {
    running = true;
    std::cout << "Simulation running." << std::endl;

    while(running) {
        if(paused) continue;

        currentTick++;
        std::cout << currentTick << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(simulationSpeed));
    }
}
void Simulation::stop() {
    running = false;
    std::cout << "Simulation Stopped." << std::endl;
}
void Simulation::pause() {
    paused = true;
}
void Simulation::play() {
    paused = false;
}