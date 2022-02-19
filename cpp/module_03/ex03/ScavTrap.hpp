#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap {

    private:
        static const unsigned int scav_hp = 100;
        static const unsigned int scav_attack = 20;

    protected:
        static const unsigned int scav_energy = 50;

    public:
            ScavTrap ();
            ~ScavTrap();
            ScavTrap(std::string name);

            void    guardGate();
};

#endif
