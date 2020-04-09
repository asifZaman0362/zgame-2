#include "../core/entitymanager.hpp"
#include <iostream>


int main() {
    zg::Entity ent = zg::EntityManager::CreateNew();
    ent->AddComponent(std::make_shared<zg::Component>());

    int a;
    std::cin >> a;

    return 0;
}