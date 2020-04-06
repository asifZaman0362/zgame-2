#include "object.hpp"
#include <list>


namespace zg {
    namespace ObjectFactory {
        std::list<Object*> objects;
        std::list<uint64> free_objects;
        unsigned long int NewObject();
        void DeleteObject(uint64);
    }
}