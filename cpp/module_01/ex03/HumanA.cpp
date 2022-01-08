#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon) {

    this->name = name;
    std::cout << "\x1B[32mConstructor called HumanA\033[0m" << std::endl;
}

HumanA::~HumanA() {

    std::cout << "\x1B[31mDestructor called HumanA\033[0m" << std::endl;
}

void    HumanA::attack() {

    std::cout << name << " attack with his " << weapon.getType() << std::endl;
}
