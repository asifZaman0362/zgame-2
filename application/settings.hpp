#pragma once
#include "../core/stddef.hpp"
#include "../core/string.hpp"


namespace zg {
    struct Settings {
        // Returns default settings
        Settings() : WIDTH(800), HEIGHT(640), TITLE("Window"), STYLE(1), FPS_LIMIT(0) {}
        uint16 WIDTH;
        uint16 HEIGHT;
        string TITLE;
        uint8 STYLE;
        // set to 0 for vsync
        uint16 FPS_LIMIT;
    };
}