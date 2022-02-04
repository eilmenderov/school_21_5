#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {

    protected:
        std::string name;
        int         hp;
        int         energy;
        int         damage;
        std::string whoami;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hp, int energy, int damage);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        void        setName(std::string name);
        std::string getName() const;

        void    setHealth(int hp);
        int     getHealth() const;

        void    setEnergy(int energy);
        int     getEnergy() const;

        void    setDamage(int damage);
        int     getDamage() const;
};

#endif
