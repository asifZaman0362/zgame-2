#include "string.hpp"
#include "stddef.hpp"


namespace zg {
    struct Object {
        uint64 m_id;
        virtual string ToString();

        Object();
        Object(uint64 p_id);
    };
}