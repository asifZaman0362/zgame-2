#include "object.hpp"
#include <list>
#include <memory>

namespace zg {
    struct Component;
    typedef std::shared_ptr<Component> ComponentRef;

    struct Entity : public Object {
        uint64 m_id;
        std::list<ComponentRef> m_components;
        void AddComponent(ComponentRef);
        void RemoveComponent(ComponentRef);
    };
}