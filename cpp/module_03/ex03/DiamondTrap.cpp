#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap() {

    // this->name = "Noname_Scav";
    // std::cout << "\x1B[32m DiamondTrap default constructor called for \033[0m" << name << std::endl;
    // this->hp = FragTrap::hp;
    // energy = ScavTrap::energy;

}

DiamondTrap::~DiamondTrap() {

    std::cout << "\x1B[31mDiamondTrap destructor called for \033[0m" << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {

    // this->name = name;
    // std::cout << "\x1B[32m constructor called for \033[0m" << name << std::endl;
    // hp = 100;
    // energy = 50;
    // damage = 20;
}