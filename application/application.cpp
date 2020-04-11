#include "application.hpp"


namespace zg {
    Application::Application(const Settings& settings) {
        m_settings = settings;
    }
    Application::~Application() {
        // Delete scenes and cleanup
    }

    uint8 Application::Run() {

    }

    uint8 Application::Exit() {

    }

    void Application::Pause() {

    }

    void Application::Resume() {

    }
}