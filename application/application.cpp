#include "application.hpp"


namespace zg {
    Application::Application(const Settings& settings) {
        m_settings = settings;
    }
    Application::~Application() {
        // Delete scenes and cleanup
    }

    uint8 Application::Run() {
        m_state = ApplicationState::RUNNING;
    }

    uint8 Application::Exit() {

    }

    void Application::Pause() {
        m_state = ApplicationState::PAUSED;
    }

    void Application::Resume() {
        m_state = ApplicationState::RUNNING;
    }
}