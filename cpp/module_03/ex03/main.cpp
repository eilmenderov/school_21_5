#include "DiamondTrap.hpp"

int main(void) {

    // ClapTrap	trap1;
	// ClapTrap	trap2("Cat");

	// trap1.attack("Dog");
	// trap1.takeDamage(3);
	// trap2.beRepaired(2);

	// std::cout << std::endl;
	// ScavTrap	trap3;
	// ScavTrap	trap4("Alex");
	// trap4.attack("Dan");
	// trap4.takeDamage(3);
	// trap3.beRepaired(2);
	// trap4.guardGate();

	// std::cout << std::endl;
	// FragTrap	trap5;
	// FragTrap	trap6("Dasha");
	// trap6.attack("Igor");
	// trap6.takeDamage(3);
	// trap5.beRepaired(2);
	// trap6.highFivesGuys();

	std::cout << std::endl;
	DiamondTrap	trap7;
	DiamondTrap	trap8("Danil");
	trap8.whoAmI();
	// trap7.attack(trap8.getName());
	trap7.highFivesGuys();
	trap8.guardGate();
	// trap8.takeDamage(15);
	// trap7.beRepaired(9);
	std::cout << std::endl;
	return 0;
}
