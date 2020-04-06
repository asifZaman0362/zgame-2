#include "entity.hpp"


namespace zg {
    
    typedef std::shared_ptr<Entity> EntityRef;
    
    namespace EntityManager {

        EntityRef CreateNew();
        void FreeEntity(uint64 id);
        void DestroyEntity(uint64 id);
        
        std::list<EntityRef> entities;
        std::list<EntityRef> free_entities;
    
    }
}