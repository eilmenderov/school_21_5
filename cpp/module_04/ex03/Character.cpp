#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {

    for (int i = 0; i < MaxNumOfMaterias; ++i) {
        materias_[i] = NULL;
    }
}

Character::Character(const std::string &name) : name_(name) {

    for (int i = 0; i < MaxNumOfMaterias; ++i) {
        materias_[i] = NULL;
    }
}

Character::Character(Character const &other) {

    for (int i = 0; i < MaxNumOfMaterias; ++i) {
        materias_[i] = NULL;
    }
    *this = other;
}

Character::~Character() {

    for (int i = 0; i < MaxNumOfMaterias; ++i) {
        if (materias_[i])
            delete materias_[i];
    }
}

Character           &Character::operator=(Character const &other) {

    if (this != &other) {
        name_ = other.getName();
        for (int i = 0; i < MaxNumOfMaterias; ++i) {
            AMateria* tmp = materias_[i];
            if (other.materias_[i]) {
                materias_[i] = (other.materias_[i])->clone();
                materias_[i]->setAvailability(false);
            } else
                materias_[i] = NULL;
            if (tmp)
            delete tmp;
        }
    }
    return *this;
}

const std::string   &Character::getName() const {

    return name_;
}

void                Character::equip(AMateria *thing) {

    if (!thing)
        return ;
    if (!thing->getAvailability()) {
        AMateria::print_availability_error();
        return ;
    }
    int idx = 0;
    while (idx < MaxNumOfMaterias && materias_[idx])
        idx++;
    if (idx < MaxNumOfMaterias) {
        materias_[idx] = thing;
        thing->setAvailability(false);
    }
}

void                Character::unequip(int idx) {

    if (0 <= idx && idx < MaxNumOfMaterias && materias_[idx]) {
        materias_[idx]->setAvailability(true);
        materias_[idx] = NULL;
    }
}

void                Character::use(int idx, ICharacter &target) {

    if (0 <= idx && idx < MaxNumOfMaterias && materias_[idx]) {
        materias_[idx]->use(target);
    }
}
