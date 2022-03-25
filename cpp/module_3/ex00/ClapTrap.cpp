# include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

    std::cout << "\x1B[32mDefault constructor called\033[0m" << std::endl;
    name = "Noname";
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

    if (hp > 0) {
        if (energy > 0) {
            std::cout << "ClapTrap " << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
            energy--;
        }
        else
            std::cout << "ClapTrap " << name << " don't have energy!" << std::endl;
    }
    else
        std::cout << name << " is dead" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    std::cout << "ClapTrap " << name << " take " << amount << " points of damage" << std::endl;
	hp -= amount;
	if (hp < 0) {
		hp = 0;
		std::cout << "ClapTrap dead" << std::endl; 
	}
    else
	    std::cout << "ClapTrap " << name << " " << hp << " hp has been left" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if (hp > 0) {
        if (energy > 0) {
            std::cout << "ClapTrap " << name << " was repaired, " << amount << " points was used" << std::endl;
            energy--;
            hp += amount;
	        std::cout << "ClapTrap " << name << " " << hp << " hp has been left" << std::endl;
        }
        else
            std::cout << "ClapTrap " << name << " don't have energy!" << std::endl;
    }
    else
        std::cout << name << " is dead" << std::endl;
}
