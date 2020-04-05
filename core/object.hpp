#include "string.hpp"

namespace zg {
    struct Object {
        unsigned long int m_id;
        virtual string ToString();

        Object();
        Object(unsigned long int p_id);
    };
}