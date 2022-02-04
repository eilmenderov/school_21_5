#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Noname_Diamond", frag_hp, scav_energy, frag_attack), FragTrap(), ScavTrap(){

    std::cout << "\x1B[32mDiamondTrap default constructor called\033[0m" << name << std::endl;
}

DiamondTrap::~DiamondTrap() {

    std::cout << "\x1B[31mDiamondTrap destructor called for \033[0m" << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string call_me)  : ClapTrap(call_me + "_clap_name" , frag_hp, scav_energy, frag_attack), FragTrap(), ScavTrap(), name(call_me) {

    std::cout << "\x1B[32mDiamondTrap constructor called for \033[0m" << name <<std::endl;
}

void    DiamondTrap::whoAmI(void) {

    std::cout << "My name is " << name << " and my clap-name is " << ScavTrap::name << std::endl;
}