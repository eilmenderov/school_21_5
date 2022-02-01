#include "FragTrap.hpp"

FragTrap::FragTrap() {

    whoami = "FragTrap";
    name = "Noname_Scav";
    std::cout << whoami << "\x1B[32m default constructor called for \033[0m" << name << std::endl;
    hp = 100;
    energy = 50;
    damage = 20;
}

FragTrap::~FragTrap() {

    std::cout << whoami << "\x1B[31m destructor called for \033[0m" << name << std::endl;
}

FragTrap::FragTrap(std::string name) {

    whoami = "FragTrap";
    this->name = name;
    std::cout << whoami << "\x1B[32m constructor called for \033[0m" << name << std::endl;
    hp = 100;
    energy = 50;
    damage = 20;
}

void    FragTrap::highFivesGuys() {

    if (hp > 0) {
        if (energy > 0)
            std::cout << whoami << " " << name << " high Fives guys!!!" << std::endl;
        else
            std::cout << whoami << " " << name << " don't have energy!" << std::endl;
    }
    else
        std::cout << whoami << " " << name << " is dead" << std::endl;
}