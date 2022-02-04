#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

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
