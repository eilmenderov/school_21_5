# include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

    std::cout << "\x1B[32mDefault constructor called\033[0m" << std::endl;
    name = "Another Trap";
    hp = 10;
    energy = 10;
    damage = 0;
}

ClapTrap::~ClapTrap() {

    std::cout << "\x1B[31mDestructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {

    std::cout << "\x1B[32mConstructor called\033[0m" << std::endl;
    this->name = name;
    hp = 10;
    energy = 10;
    damage = 0;
}

void    ClapTrap::attack(std::string const &target) {

}

void    ClapTrap::takeDamage(unsigned int amount) {

}

void    ClapTrap::beRepaired(unsigned int amount) {

}
