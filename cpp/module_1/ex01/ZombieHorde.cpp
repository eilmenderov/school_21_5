#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

    Zombie  *horde_zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde_zombie[i].setName(name);

    return horde_zombie;
}
