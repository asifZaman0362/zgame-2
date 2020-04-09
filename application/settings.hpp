#pragma once
#include "../core/stddef.hpp"
#include "../core/string.hpp"


namespace zg {
    struct Settings {
        uint16 WIDTH;
        uint16 HEIGHT;
        string TITLE;
        uint8 STYLE;
        // set to 0 for vsync
        uint16 FPS_LIMIT;
    };
}