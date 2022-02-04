# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Noname_Scav", scav_hp, scav_energy, scav_attack){

    whoami = "ScavTrap";
    std::cout << whoami << "\x1B[32m default constructor called for \033[0m" << name << std::endl;
}

ScavTrap::~ScavTrap() {

    std::cout << whoami << "\x1B[31m destructor called for \033[0m" << name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, scav_hp, scav_energy, scav_attack) {

    whoami = "ScavTrap";
    std::cout << whoami << "\x1B[32m constructor called for \033[0m" << name << std::endl;
}

void    ScavTrap::guardGate() {

    std::cout << whoami << " " << name << " enterred in Gate keeper mode" << std::endl;
}
