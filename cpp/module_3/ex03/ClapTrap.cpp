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

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int energy, unsigned int damage) {

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
            std::cout << whoami << " " << name << " attack " << target << ", causing " << damage << " pounsigned ints of damage!" << std::endl;
            energy--;
        }
        else
            std::cout << whoami << " " << name << " don't have energy!" << std::endl;
    }
    else
        std::cout << whoami << " " << name << " is dead" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    std::cout << whoami << " " << name << " take " << amount << " pounsigned ints of damage" << std::endl;
	if (hp < amount) {
		hp = 0;
		std::cout << whoami << " " << name << " dead" << std::endl;
	}
    else {
        hp -= amount;
	    std::cout << whoami << " " << name << " " << hp << " hp has been left" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if (hp > 0) {
        if (energy > 0) {
            std::cout << whoami << " " << name << " was repaired, " << amount << " pounsigned ints was used" << std::endl;
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

const std::string &ClapTrap::getName() {

    return name;
}

void    ClapTrap::setHealth(unsigned int hp) {

    this->hp = hp;
}

unsigned int     ClapTrap::getHealth() const {

    return hp;
}

void    ClapTrap::setEnergy(unsigned int energy) {

    this->energy = energy;
}

unsigned int     ClapTrap::getEnergy() const {

    return energy;
}

void    ClapTrap::setDamage(unsigned int damage) {

    this->damage = damage;
}

unsigned int     ClapTrap::getDamage() const {

    return damage;
}
