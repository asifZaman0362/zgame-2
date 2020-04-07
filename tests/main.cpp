#include "../core/entitymanager.hpp"
#include <iostream>


int main() {
    zg::Entity entity;
    entity.AddComponent(std::make_shared<zg::Component>());
    
    int a;
    std::cin >> a;

    return 0;
}