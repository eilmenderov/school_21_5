#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Noname_Frag", frag_hp, frag_energy, frag_attack) {

    whoami = "FragTrap";
    std::cout << whoami << "\x1B[32m default constructor called for \033[0m" << name << std::endl;

}

FragTrap::~FragTrap() {

    std::cout << whoami << "\x1B[31m destructor called for \033[0m" << name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, frag_hp, frag_energy, frag_attack) {

    whoami = "FragTrap";
    std::cout << whoami << "\x1B[32m constructor called for \033[0m" << name << std::endl;
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