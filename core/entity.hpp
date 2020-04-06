#include "object.hpp"
#include <list>
#include <memory>

namespace zg {
    struct Component;
    typedef std::shared_ptr<Component> ComponentRef;

    struct entity : public Object {
        int m_id;
        std::list<ComponentRef> m_components;  
    };
}