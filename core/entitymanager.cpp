#include "entitymanager.hpp"

namespace zg {
    EntityRef EntityManager::CreateNew() {
        auto ref = std::make_shared<Entity>();
        entities.push_back(ref);
        return ref;
    }
    void EntityManager::DestroyEntity(uint64 id) {
        for (auto& ref : entities) {
            if (ref->m_id == id) {
                entities.remove(ref);
            }
        }
    }
    void EntityManager::FreeEntity(uint64 id) {
        for (auto& ref : entities) {
            if (ref->m_id == id) {
                free_entities.push_back(ref);
                entities.remove(ref);
            }
        }
    }
}