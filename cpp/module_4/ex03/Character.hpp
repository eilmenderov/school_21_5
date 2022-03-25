#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter {

    public:
        Character();
        Character(const std::string &name);
        Character(const Character &other);
        virtual ~Character();

        Character                   &operator=(const Character &other);

        const                       std::string &getName() const;
        void                        equip(AMateria *m);
        void                        unequip(int idx);
        void                        use(int idx, ICharacter &target);

    private:
        static const unsigned int   MaxNumOfMaterias = 4;
        std::string                 name_;
        AMateria                    *materias_[MaxNumOfMaterias];
};

#endif
