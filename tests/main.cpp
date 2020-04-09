#include "../core/entitymanager.hpp"
#include <iostream>


int main() {
    zg::EntityRef ref = zg::EntityManager::CreateNew();
    ref->AddComponent(std::make_shared<zg::Component>());

    int a;
    std::cin >> a;

    return 0;
}