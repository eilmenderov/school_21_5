#include "Zombie.hpp"

Zombie::Zombie() {

    std::cout << "\x1B[32mConstructor called\033[0m" << std::endl;
    this->name = "<none>";
}

Zombie::Zombie(std::string name) {

    std::cout << "\x1B[32mConstructor called\033[0m" << std::endl;
    this->name = name;
}

Zombie::~Zombie() {

    std::cout << "\x1B[31mDestructor called \033[0m" << this->name << std::endl;
}

void    Zombie::announce(void) {

    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
