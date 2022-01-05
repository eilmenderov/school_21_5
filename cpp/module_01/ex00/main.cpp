#include "Zombie.hpp"

int main(void) {

    Zombie  *kucha = newZombie("KuchaZombie");
    kucha->announce();
    delete kucha;

    Zombie  steck("StackZombie");
    steck.announce();

    randomChump("CrazyZombie");
    return 0;
}