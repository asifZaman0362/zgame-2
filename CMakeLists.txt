cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project(zgame)

set(CORE core/component.hpp core/entity.cpp core/entity.hpp 
core/entitymanager.hpp core/entitymanager.cpp core/logger.hpp core/logger.cpp 
core/object.hpp core/object.cpp core/stddef.hpp core/string.hpp core/string.cpp 
application/application.hpp application/application.cpp application/settings.hpp 
application/window.hpp)

set(SANDBOX tests/main.cpp)

#add_library(zgame ${CORE})
#add_executable(zgame-sandbox ${CORE} ${SANDBOX})
add_executable(zgame-test core/logger.hpp core/logger.cpp core/string.hpp core/string.cpp tests/main.cpp)