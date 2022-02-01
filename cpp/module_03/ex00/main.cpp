#include "ClapTrap.hpp"

int main(void) {

    ClapTrap trap1;
	ClapTrap trap2("Cat");

	trap1.attack("Dog");
	trap1.takeDamage(11);
	trap2.beRepaired(2);
	return 0;
}
