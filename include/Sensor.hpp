#pragma once

class Sensor {
public:
    float readVoltage();  // 3.0 ~ 4.3V 랜덤
    float readCurrent();  // 0.0 ~ 10.0A 랜덤
    float readTemp();     // 20 ~ 60도 랜덤
};
