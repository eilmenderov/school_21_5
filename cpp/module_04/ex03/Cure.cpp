#include "Cure.hpp"
#include "ICharacter.hpp"

const std::string Cure::TypeNameCure = "cure";

Cure::Cure() : AMateria(TypeNameCure) {

}

Cure::Cure(Cure const &other) {

    *this = other;
}

Cure::~Cure() {

}

Cure    &Cure::operator=(Cure const &other) {

    if (this != &other)
        setType(other.getType());
    return *this;
}

Cure    *Cure::clone() const {

    return new Cure();
}

void    Cure::use(ICharacter &target) {

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
