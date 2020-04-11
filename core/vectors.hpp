#include "stddef.hpp"


namespace zg {
    
    template <typename T>
    struct vec2 {
        T x;
        T y;
    };

    template <typename T>
    struct vec3 {
        T x;
        T y;
    };

    typedef vec2<float> vec2f;
    typedef vec2<uint32> vec2i;

}