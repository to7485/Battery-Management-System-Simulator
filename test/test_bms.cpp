#include "Sensor.hpp"
#include <iostream>
#include <cassert>

int main() {
    Sensor sensor;
    for (int i = 0; i < 100; ++i) {
        float v = sensor.readVoltage();
        assert(v >= 3.0f && v <= 4.3f);
    }
    std::cout << "Sensor voltage range test passed.\n";
    return 0;
}
