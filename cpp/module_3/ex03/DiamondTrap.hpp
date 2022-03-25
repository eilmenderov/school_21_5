#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

    private:
            std::string name;

    public:
            DiamondTrap ();
            ~DiamondTrap();
            DiamondTrap(std::string call_me);

            using ScavTrap::attack;
            void whoAmI();
};

#endif
