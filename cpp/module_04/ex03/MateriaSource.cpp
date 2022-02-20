#include "MateriaSource.hpp"

const std::string MateriaSource::ErrMsgNoRoomToLearn = "ERROR: The materia source has no room to learn";

MateriaSource::MateriaSource() {

    for (int i = 0; i < MaxNumOfLearnedMaterias; ++i)
        learned_materias_[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other) {

    for (int i = 0; i < MaxNumOfLearnedMaterias; ++i)
        learned_materias_[i] = NULL;
    *this = other;
}

MateriaSource::~MateriaSource() {

    for (int i = 0; i < MaxNumOfLearnedMaterias; ++i) {
        if (learned_materias_[i] && learned_materias_[i]->getAvailability() && !isDuplicated(i))
            delete learned_materias_[i];
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &other) {

    if (this != &other) {
        for (int i = 0; i < MaxNumOfLearnedMaterias; ++i) {
            AMateria* tmp = learned_materias_[i];
            if (other.learned_materias_[i])
                learned_materias_[i] = (other.learned_materias_[i])->clone();
            if (tmp)
                delete tmp;
        }
    }
    return *this;
}

void            MateriaSource::learnMateria(AMateria *things) {

    if (!things)
        return ;
    int idx = 0;
    while (idx < MaxNumOfLearnedMaterias && learned_materias_[idx])
        idx++;
    if (idx != MaxNumOfLearnedMaterias)
        learned_materias_[idx] = things;
    else
        printNoRoomToLearnError();
}

AMateria        *MateriaSource::createMateria(std::string const &type) {

    if (type != "") {
        for (int i = 0; i < MaxNumOfLearnedMaterias; ++i) {
            if (learned_materias_[i] && learned_materias_[i]->getType() == type)
                return learned_materias_[i]->clone();
        }
    }
    return (0);
}

void            MateriaSource::printNoRoomToLearnError() {

    std::cout << MateriaSource::ErrMsgNoRoomToLearn << std::endl;
}

bool            MateriaSource::isDuplicated(int idx) {

    for (int i = idx + 1; i < MaxNumOfLearnedMaterias; ++i) {
        if (learned_materias_[i] == learned_materias_[idx])
            return true;
    }
    return false;
}
