#include "../core/logger.hpp"
#include <iostream>

using namespace zg;

int main() {
    Logger::LogWarn(string::format("what the %d %s", 2.0, "string"));
    return 0;
}