#pragma once
#include "Sensor.hpp"

class BMS {
public:
    BMS(Sensor& s);
    void checkStatus();
private:
    Sensor& sensor;
};
