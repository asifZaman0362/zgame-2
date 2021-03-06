#include "entitymanager.hpp"
#include "logger.hpp"



namespace zg {
    EntityManager::EntityManager() {
        m_lastEntity = 0;
    }

    Entity EntityManager::Create() {
        if (m_lastEntity > MAX_ENTITIES) {
            Logger::LogError(string::format("Entity limit '{i}' reached! Cannot create more entities.", MAX_ENTITIES));
        }
        ComponentList components;
        m_entities.emplace(++m_lastEntity, components);
        return m_lastEntity;
    }

    template <typename C> void EntityManager::AddComponent(Entity entity, const C& component) {
        // add component logic
    }

    template <typename C> void EntityManager::RemoveComponent(Entity entity, const C& component) {
        // remove component logic
    }
}