class Simulation {
    private:
        bool running = false;
        bool paused = false;
        int currentTick = 0;
        int ticksPerDay = 24;
        int simulationSpeed = 1000;

    public:
        Simulation();

        void run();
        void stop();
        void pause();
        void play();
};