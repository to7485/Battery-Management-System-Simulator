#pragma once

class ActionManager {
public:
    static void disconnect();
    static void notify(const std::string& message);
};