#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {

    protected:
        std::string     name;
        unsigned int    hp;
        unsigned int    energy;
        unsigned int    damage;
        std::string     whoami;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int hp, unsigned int energy, unsigned int damage);

        void                attack(std::string const &target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
        
        void                setName(std::string name);
        const std::string   &getName();

        void                setHealth(unsigned int hp);
        unsigned int        getHealth() const;

        void                setEnergy(unsigned int energy);
        unsigned int        getEnergy() const;

        void                setDamage(unsigned int damage);
        unsigned int        getDamage() const;
};

#endif
