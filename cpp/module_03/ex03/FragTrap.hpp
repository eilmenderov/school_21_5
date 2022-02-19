#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class   FragTrap : virtual public ClapTrap {

    private:
        static const unsigned int frag_energy = 100;

    protected:
        static const unsigned int frag_hp = 100;
        static const unsigned int frag_attack = 30;

    public:
            FragTrap ();
            ~FragTrap();
            FragTrap(std::string name);

            void    highFivesGuys();
};

#endif
