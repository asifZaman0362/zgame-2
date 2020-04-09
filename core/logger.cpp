#include "logger.hpp"
#include <iostream>

namespace zg {
    void Logger::LogError(string msg) {
        std::cerr << msg.c_str();
    }
    void Logger::LogError(string msg, Object obj) {
        std::cerr << string::format("Error at {s} : {s}", obj.ToString(), msg).c_str();
    }
}