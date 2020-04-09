#pragma once
#include "string.hpp"
#include "stddef.hpp"


namespace zg {
    struct Object {
        virtual string ToString();
        Object();
        uint64 m_id;
    };
}