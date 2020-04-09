#pragma once
#include "entity.hpp"


namespace zg {
    
    typedef std::shared_ptr<EntityType> Entity;
    
    namespace EntityManager {

        Entity CreateNew();
        void FreeEntity(uint64 id);
        void DestroyEntity(uint64 id);
        void AddComponent(ComponentRef);
    
    }
}