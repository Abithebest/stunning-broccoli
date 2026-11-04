# Hey I am Abi
Glad to see you here! I'm Abi and this project is more for me to have fun and have something to occupy me for a couple months and help me use C++ more.
I asked ChatGPT for a fun timeline for me to work on a simulation in C++. I have been wanting to make one again after my first version using Python broke after I moved to MacOS.
This file will mostly be checkboxes and projections on what I should work on.

# Project
## Phase 1 - Simulation Engine
**Objective**: Create the foundation that everything else will depend on.
[x] Set up CMake
[x] Establish directory and class structure
[x] Create a simulation loop
[x] Implement simulation clock
[x] Add seeded random number generation
[ ] Implement pause, resume, and single-tick advancement
[ ] Add configurale simulation speed
[ ] Create a basic terminal status display
[ ] Introduce a world config file

**Milestone**: Able to launch a world, advance time, and see its statistics update in the terminal.

## Phase 2 - World Generation
**Objective**: Generate a world that can be explored through ASCII characters.
[ ] Implement FTXUI
[ ] Create a two-dimensional grid
[ ] Implement terrain types
[ ] Generate forests, grasslands, rivers, lakes, mountains
[ ] Add different terrain symbols
[ ] Implement map viewing
[ ] Add a camera or viewport so large maps fit the terminal
[ ] Add terrain information when inspecting a tile
[ ] Make world generation reproducible through seeds

**Milestone**: Able to generate and inspect a procedurally generated ASCII coordinates.

## Phase 3 - Plant life and resources
**Objective**: Make the world biologically active before introducing animals.
[ ] Create individual plant definitions
[ ] Add grass, trees, berry bushes, mushrooms, and flowers
[ ] Implement growth and resource consumption
[ ] Add plant reproduction
[ ] Introduce soil fertility and water requirements
[ ] Track plant populations and biomass
[ ] Implement plant death and decomposition
[ ] Display plant statistics in the terminal

**Milestone**: Plants grow, spread, and die without player intervention.

## Phase 4 - Introduce animals
**Objective**: Introduce individual animals with unique identities and needs.
[ ] Create an animal class or equivilent individual data structure
[ ] Implement unique animal identities
[ ] Add species definitions
[ ] Introduce hunger, thirst, energy, and health
[ ] Implement basic movement
[ ] Make animals search for food
[ ] Implement eating and resource depletion
[ ] Add aging and natural death
[ ] Display individual animal information
[ ] Track population counts

**Milestone**: Able to inspect individual animals and watch them survive independently.

## Phase 5 - Animal intelligence and behavior
**Objective**: Make animals behave according to their needs rather than simply wandering.
[ ] Implement decision-making priorities
[ ] Add pathfinding
[ ] Introduce predator detections
[ ] Implement fleeing
[ ] Add sleeping and resting
[ ] Implement different activity schedules
[ ] Add preferred habitats
[ ] Introduce territorial behavior
[ ] Add animal behavior logs

**Milestone**: Able to select an animal and undertstand why it makes its decisions.

## Phase 6 - Predators and food webs
**Objective**: Create a functioning ecosystem.
[ ] Add foxes, mice, hawks, and other species
[ ] Implement species-specific diets 
[ ] Add hunting mechanics
[ ] Implement predator detection and prey escape
[ ] Introduce scavenging
[ ] Create a food-web system
[ ] Track kills and successful hunts
[ ] Track food consumption across the ecosystem

**Milestone**: Species populations influence one another.

## Phase 7 - Reproduction and generations
**Objective**: Introduce reproduction and population dynamics.
[ ] Implement reproductive maturity
[ ] Add mating behavior
[ ] Introduce gestation, incubation, or egg-laying
[ ] Add offspring generation
[ ] Implement juveline and adult life stages
[ ] Add parental care 
[ ] Track births and deaths
[ ] Track generational statistics

**Milestone**: Ecosystem should be able to maintain populations across multiple generations.

## Phase 8 - Genetics and inheritance
**Objective**: Make animals genetically different from one another.
[ ] Create genetic representation
[ ] Introduce inherited traits
[ ] Implement mutations
[ ] Add genetic combinations from parents
[ ] Seperate genotype and phenotype
[ ] Track trait distributions
[ ] Make traits influence animal performance

**Milestone**: Animals inherit traits, develop individual differences, and pass those differences to offspring.

## Phase 9 - Natural selection and evolution
**Objective**: Allow species to adapt over generations.
[ ] Implement selection pressures
[ ] Track genetic variation
[ ] Introduce environmental adaptation
[ ] Track changes across generations
[ ] Add geographic isolation
[ ] Introduce evolutionary lineages
[ ] Track extinction
[ ] Experiment with speciation

**Milestone**: ABle to observe evolutionary changes without manually editing animal characteristics.

## Phase 10 - Climate and environmental events.
**Objective**: Make the environment dynamic.
[ ] Add seasons
[ ] Implement temperature changes
[ ] Introduce rainfall
[ ] Add droughts and floods
[ ] Create multiple biomes
[ ] Introduce migration
[ ] Add environmental disasters
[ ] Implement disease and parasites

**Milestone**: The world changes independently of its inhabitants.

## Phase 11 - Advanced ecology and social behavior
**Objective**: Give species more complex lifestyles.
[ ] Implement herds and packs
[ ] Introduce territorial systems
[ ] Add communication
[ ] Implement cooperative hunting
[ ] Introduce colonies and nests
[ ] Add social hierarchies where appropriate
[ ] Implement learning and memory
[ ] Add migration patterns

**Milestone**: Different species develop genuinely different social and survival strategies.

## Phase 12 - Research tools and advanced evolution
**Objective**: Turn the simulation into a powerful ecosystem research environment.
[ ] Create population graphs using terminal characters
[ ] Add historical data collection
[ ] Implement world saving and loading
[ ] Create an experiment configuration system
[ ] Add species comparisons
[ ] Introduce fossils and extict lineage records
[ ] Improve simulation performance
[ ] Support large populations
[ ] Add reproducible multi-world experiments

**Milestone**: Able to study the world, run experiments, compare results, and understand how it evolved.