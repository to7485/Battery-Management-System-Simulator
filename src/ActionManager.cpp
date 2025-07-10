#include "ActionManager.hpp"
#include "Logger.hpp"
#include <iostream>

void ActionManager::disconnect() {
    Logger::log("[Action] Output disconnected");
}

void ActionManager::notify(const std::string& msg) {
    Logger::log("[Notify] " + msg);
}