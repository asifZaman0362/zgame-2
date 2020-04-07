#include "entity.hpp"
#include "component.hpp"

namespace zg {
    
    void Entity::AddComponent(ComponentRef comp) {
        for (auto& i : m_components) {
            if (i == comp) return;
        }
        m_components.push_back(comp);
    }
    
    void Entity::RemoveComponent(ComponentRef comp) {
        m_components.remove(comp);
    }
    
}