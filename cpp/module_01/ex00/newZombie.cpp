#include "Zombie.hpp"

Zombie* newZombie(std::string name) {

    Zombie  *zomback = new Zombie(name);
    return zomback;
}