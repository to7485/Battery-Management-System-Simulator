#include "BMS.hpp"
#include "Logger.hpp"
#include "ActionManager.hpp"
#include <iostream>

BMS::BMS(Sensor& s) : sensor(s) {}

void BMS::checkStatus() {
    float v = sensor.readVoltage();
    float c = sensor.readCurrent();
    float t = sensor.readTemp();

    Logger::log("Voltage: " + std::to_string(v));
    Logger::log("Current: " + std::to_string(c));
    Logger::log("Temp: " + std::to_string(t));

    if (v > 4.2) {
        Logger::log("Over Voltage!");
        ActionManager::disconnect();
    }
    if (c > 8.0) {
        Logger::log("Over Current!");
        ActionManager::disconnect();
    }
    if (t > 55.0) {
        Logger::log("Over Temp!");
        ActionManager::disconnect();
    }
}
