#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {

    private:
        std::string name;
        int         hp;
        int         energy;
        int         damage;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
