#include <iostream>
#include <random>
#include <chrono>

#include "core/Random.hpp"

Random::Random() {
    unsigned int seed = static_cast<unsigned int>(
        std::chrono::system_clock::now().time_since_epoch().count()
    );

    gen.seed(seed);
}

void Random::setSeed(unsigned int seed) {
    gen.seed(seed);
}

int Random::getInt(int min, int max) {
    std::uniform_int_distribution<int> distrib(min, max);
    return distrib(gen);
}
double Random::getDouble(double min, double max) {
    std::uniform_real_distribution<double> distrib(min, max);
    return distrib(gen);
}
bool Random::getBool(double probability) {
    std::bernoulli_distribution distrib(probability);
    return distrib(gen);
}