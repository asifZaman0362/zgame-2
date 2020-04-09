#include "object.hpp"


namespace zg {
    Object::Object() {

    }
    string Object::ToString() {
        return string::format("Object {i}", m_id);
    }
}