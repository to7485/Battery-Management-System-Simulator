#include "Logger.hpp"
#include <fstream>
#include <iostream>
#include <ctime>

void Logger::log(const std::string& message) {
    std::ofstream file("logs/system_log.txt", std::ios::app);
    std::time_t t = std::time(nullptr);
    file << "[" << std::ctime(&t);
    file << "] " << message << "\n";
    file.close();
    std::cout << message << std::endl;
}