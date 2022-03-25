#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        ~MateriaSource();

        MateriaSource               &operator=(const MateriaSource &other);

        void                        learnMateria(AMateria *m);
        AMateria                    *createMateria(std::string const &type);
        static const unsigned int   MaxNumOfLearnedMaterias = 4;


    private:
        static const std::string    ErrMsgNoRoomToLearn;
        AMateria                    *learned_materias_[MaxNumOfLearnedMaterias];
        void                        printNoRoomToLearnError();
        bool                        isDuplicated(int idx);
};

#endif
