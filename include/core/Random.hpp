#include <random>

class Random {
    private:
        std::mt19937 gen;
    public:
        Random();

        void setSeed(unsigned int seed);
        int getInt(int min, int max);
        double getDouble(double min, double max);
        bool getBool(double probability = 0.5);
};