#pragma once
#include "string.hpp"
#include "object.hpp"

namespace zg {
    namespace Logger {
        void LogError(string);
        void LogError(string, Object);
        void LogWarn(string);
        void LogWarn(string, Object);
        void WriteLogToFile(string);
    }
}