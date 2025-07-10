#include "Sensor.hpp"
#include "BMS.hpp"
#include <thread>
#include <chrono>

int main() {
    Sensor sensor;
    BMS bms(sensor);

    for (int i = 0; i < 10; ++i) {
        bms.checkStatus();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}