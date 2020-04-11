#pragma once
#include "../core/stddef.hpp"
#include "settings.hpp"


namespace zg {
    struct Application {

        enum ApplicationState {
            INACTIVE,
            RUNNING,
            PAUSED
        };

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
        ApplicationState m_state;
    };
}