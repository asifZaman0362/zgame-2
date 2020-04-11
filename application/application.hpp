#pragma once
#include "../core/stddef.hpp"
#include "settings.hpp"


namespace zg {
    struct Application {
        Application(const Settings&);
        ~Application();
        uint8 Run();
        uint8 Exit();
        void Pause();
        void Resume();
    private:
        void Update();
        double Render();
        void Resize(float, float);
        void Reconfigure(const Settings&);

        Settings m_settings;
    };
}