#include "Sensor.hpp"
#include <cstdlib>

float Sensor::readVoltage() {
    return 3.0 + static_cast<float>(rand()) / RAND_MAX * 1.3;
}

float Sensor::readCurrent() {
    return static_cast<float>(rand()) / RAND_MAX * 10.0;
}

float Sensor::readTemp() {
    return 20.0 + static_cast<float>(rand()) / RAND_MAX * 40.0;
}
