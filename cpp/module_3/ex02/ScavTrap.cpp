# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

    whoami = "ScavTrap";
    name = "Noname_Scav";
    std::cout << whoami << "\x1B[32m default constructor called for \033[0m" << name << std::endl;
    hp = 100;
    energy = 50;
    damage = 20;
}

ScavTrap::~ScavTrap() {

    std::cout << whoami << "\x1B[31m destructor called for \033[0m" << name << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

    whoami = "ScavTrap";
    this->name = name;
    std::cout << whoami << "\x1B[32m constructor called for \033[0m" << name << std::endl;
    hp = 100;
    energy = 50;
    damage = 20;
}

void    ScavTrap::guardGate() {

    std::cout << whoami << " " << name << " enterred in Gate keeper mode" << std::endl;
}
