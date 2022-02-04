# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Noname_Clap"), hp(10), energy(10), damage(0){

    ClapTrap::whoami = "ClapTrap";
    std::cout << whoami << "\x1B[32m default constructor called for \033[0m" << name << std::endl;
}

ClapTrap::~ClapTrap() {

    whoami = "ClapTrap";
    std::cout << whoami << "\x1B[31m destructor called for \033[0m" << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), energy(10), damage(0) {

    whoami = "ClapTrap";
    std::cout << whoami << "\x1B[32m constructor called for \033[0m" << name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int energy, int damage) {

    whoami = "ClapTrap";
    this->name = name;
    std::cout << whoami << "\x1B[32m constructor called for \033[0m" << name << std::endl;
    this->hp = hp;
    this->energy = energy;
    this->damage = damage;
}

void    ClapTrap::attack(std::string const &target) {

    if (hp > 0) {
        if (energy > 0) {
            std::cout << whoami << " " << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
            energy--;
        }
        else
            std::cout << whoami << " " << name << " don't have energy!" << std::endl;
    }
    else
        std::cout << whoami << " " << name << " is dead" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    std::cout << whoami << " " << name << " take " << amount << " points of damage" << std::endl;
	hp -= amount;
	if (hp < 0) {
		hp = 0;
		std::cout << whoami << " " << name << " dead" << std::endl;
	}
    else
	    std::cout << whoami << " " << name << " " << hp << " hp has been left" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if (hp > 0) {
        if (energy > 0) {
            std::cout << whoami << " " << name << " was repaired, " << amount << " points was used" << std::endl;
	        hp += amount;
            energy--;
	        std::cout << whoami << " " << name << " " << hp << " hp has been left" << std::endl;
        }
        else
            std::cout << whoami << " " << name << " don't have energy!" << std::endl;
    }
    else
        std::cout << whoami << " " << name << " is dead" << std::endl;
}

void    ClapTrap::setName(std::string name) {

    this->name = name;
}

std::string ClapTrap::getName() const {

    return name;
}

void    ClapTrap::setHealth(int hp) {

    this->hp = hp;
}

int     ClapTrap::getHealth() const {

    return hp;
}

void    ClapTrap::setEnergy(int energy) {

    this->energy = energy;
}

int     ClapTrap::getEnergy() const {

    return energy;
}

void    ClapTrap::setDamage(int damage) {

    this->damage = damage;
}

int     ClapTrap::getDamage() const {

    return damage;
}
