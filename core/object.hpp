#pragma once
#include "string.hpp"
#include "stddef.hpp"


namespace zg {
    struct Object {
        virtual string ToString();
        Object();
        ulong m_id;
    };
}