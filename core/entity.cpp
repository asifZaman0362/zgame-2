#include "entity.hpp"
#include "component.hpp"

namespace zg {
    
    void EntityType::AddComponent(ComponentRef comp) {
        for (auto& i : m_components) {
            if (i == comp) return;
        }
        m_components.push_back(comp);
    }
    
    void EntityType::RemoveComponent(ComponentRef comp) {
        m_components.remove(comp);
    }
    
    void EntityType::ClearAll() {
        m_components.clear();
    }
}