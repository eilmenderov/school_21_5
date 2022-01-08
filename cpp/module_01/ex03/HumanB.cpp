#include "HumanB.hpp"

HumanB::HumanB(std::string name) {

    this->name = name;
    std::cout << "\x1B[32mConstructor called HumanB\033[0m" << std::endl;
}

HumanB::~HumanB() {

    std::cout << "\x1B[31mDestructor called HumanB\033[0m" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {

    this->weapon = &weapon;
}

void    HumanB::attack() {

    if (weapon)
        std::cout << name << " attack with his " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
