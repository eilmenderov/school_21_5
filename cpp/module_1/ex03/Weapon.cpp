#include "Weapon.hpp"

std::string Weapon::getType() {

    return (type);
}

void        Weapon::setType(std::string type) {

    this->type = type;
}

Weapon::Weapon() {

    std::cout << "\x1B[32mConstructor called Weapon(empty)\033[0m" << std::endl;
}

Weapon::~Weapon() {

    type = "none";
    std::cout << "\x1B[31mDestructor called Weapon\033[0m" << std::endl;
}

Weapon::Weapon(std::string type) {

    this->type = type;
    std::cout << "\x1B[32mConstructor called Weapon(type)\033[0m" << std::endl;
}
