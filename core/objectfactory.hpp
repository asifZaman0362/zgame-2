#include "object.hpp"
#include <list>


namespace zg {
    namespace ObjectFactory {
        std::list<Object*> objects;
        unsigned long int NewObject();
        void DeleteObject(uint64);
    }
}