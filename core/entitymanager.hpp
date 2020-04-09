#pragma once
#include "stddef.hpp"
#include <unordered_map>


namespace zg {

    #define MAX_ENTITIES 1000000 // Only supports upto 2^64 - 1 at maximum

    typedef uint64 Entity;

    class EntityManager {
        struct ComponentList {
            int list;
        };
    private:
        static std::unordered_map<Entity, ComponentList> m_entities;
        static Entity m_lastEntity;
    public:
        EntityManager();
        ~EntityManager();

        Entity Create();
        void Free(Entity);

        template <typename C> C GetComponent(Entity) const;
        template <typename C> void AddComponent(Entity, const C&);
        template <typename C> void RemoveComponent(Entity, const C&);

        void Clear();
    };

}