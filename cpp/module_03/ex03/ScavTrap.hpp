#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {

    private:

    protected:
        static const int scav_hp = 100;
        static const int scav_energy = 50;
        static const int scav_attack = 20;

    public:
            ScavTrap ();
            ~ScavTrap();
            ScavTrap(std::string name);

            void    guardGate();
};

#endif
