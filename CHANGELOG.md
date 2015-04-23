# Change Log
All notable changes to this project will be documented in this file.


## v0.7.0 [Unreleased]
### Added
- Changelog file
- Rimea testcases
- risk tolerance factor (value in [0 1]) for pedestrian. Pedestrians with high values are likely to take more risks. 

### Changed
-  
-  

### Fixed
- 
- 

### Fixed
- 

## v0.6.0 - 2015-01-31
### Added
- Steering the simulation with predefined events (closing or opening doors during the simulation)
- Information sharing between the pedestrians. The agents now share their knowledge about closed doors.
- Pre evacuation time for groups of agents.
- Adjustable velocities on stairs and even terrain for group of agents.
- Stability and performance improvement. The simulation is approx 40% faster for larger scenarios and you will notice it
- New route choice model, cognitive map, giving agents the possibility to explore the environment and discover doors for instance.
- Different sensors for improving the navigation of pedestrians (smoke/jam sensor).
- New verification and validation tests.
- General statistics over the evacuation (for instance areas egress time and door usage)
- Support for Visual Studio and Xcode compilers.


### Changed
- refactor NumCPU and ExitCrossingStrategy tags to num_threads and exit_crossing_strategy

### Fixed
-

## v0.5.0 - 2014-08-05