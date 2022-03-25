#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <string.h>

int main() {

    // subject start
{
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}
    // subject end



    // test Ice start
{
    // test constructors
    Ice ice;
    Ice ice_copy(ice);
    Ice ice_assigned;
    ice_assigned = ice;

    // test if deep copied
    Ice tmp = ice;

    // test getType
    std::cout << ice.getType() << std::endl;
    std::cout << ice_copy.getType() << std::endl;
    std::cout << ice_assigned.getType() << std::endl;

    // test getAvailability
    std::cout << std::boolalpha << ice.getAvailability() << std::endl;
    std::cout << std::boolalpha << ice_copy.getAvailability() << std::endl;
    std::cout << std::boolalpha << ice_assigned.getAvailability() << std::endl;

    // test use
    Character hoge("hoge");
    ice.use(hoge);
    ice_copy.use(hoge);
    ice_assigned.use(hoge);

    // test clone
    AMateria* ice_cloned = ice.clone();
    std::cout << ice_cloned->getType() << std::endl;
    std::cout << std::boolalpha << ice_cloned->getAvailability() << std::endl;
    ice_cloned->use(hoge);
    delete ice_cloned;
}
    // test Ice end


    // test Cure start
{
    // test constructors
    Cure cure;
    Cure cure_copy(cure);
    Cure cure_assigned;
    cure_assigned = cure;

    // test if deep copied
    Cure tmp = cure;

    // test getType
    std::cout << cure.getType() << std::endl;
    std::cout << cure_copy.getType() << std::endl;
    std::cout << cure_assigned.getType() << std::endl;

    // test getAvailability
    std::cout << std::boolalpha << cure.getAvailability() << std::endl;
    std::cout << std::boolalpha << cure_copy.getAvailability() << std::endl;
    std::cout << std::boolalpha << cure_assigned.getAvailability() << std::endl;

    // test use
    Character hoge("hoge");
    cure.use(hoge);
    cure_copy.use(hoge);
    cure_assigned.use(hoge);

    // test clone
    AMateria* cure_cloned = cure.clone();
    std::cout << cure_cloned->getType() << std::endl;
    std::cout << std::boolalpha << cure_cloned->getAvailability() << std::endl;
    cure_cloned->use(hoge);
    delete cure_cloned;
}
    // test Cure end


    // test Character start
{
    // test constructors
    Character jack("Jack");
    Character jack_copy(jack);
    Character jack_assigned;
    jack_assigned = jack;

    // test if deep copied
    Character tmp = jack;

    // test getName
    std::cout << jack.getName() << std::endl;
    std::cout << jack_copy.getName() << std::endl;
    std::cout << jack_assigned.getName() << std::endl;

    // test equip
    const int kNumOfMaterias = 4;
    AMateria* materias[kNumOfMaterias];
    for (int i = 0; i < kNumOfMaterias; ++i) {
        if (i % 2 == 0)
            materias[i] = new Ice;
        else
            materias[i] = new Cure;
        jack.equip(materias[i]);
    }

    // test handling full equipment error
    Ice another_ice;
    jack.equip(&another_ice);

    // try to equip the same materia twice
    Character paul("Paul");
    paul.equip(materias[0]);

    // test unequip
    for (int i = 0; i < kNumOfMaterias; ++i)
        jack.unequip(i);

    // test unequip twice
    jack.unequip(1);

    // test if unequipped materia is not destructed;
    for (int i = 0; i < kNumOfMaterias; ++i) {
        if (i < 2)
            jack.equip(materias[i]);
        else
            paul.equip(materias[i]);
    }

    // test unequipping unequipped slots
    jack.unequip(3);
    paul.unequip(3);

    // test use
    jack.use(0, paul);
    paul.use(1, jack);
    jack.use(1, jack);

    // test invalid index
    jack.use(-1, paul);
    jack.use(100, paul);

    // try to use unequipped slot
    jack.use(3, paul);
}
    // test Character end


    // test MateriaSource start
{
    // test constructors
    MateriaSource src;
    MateriaSource src_copy(src);
    MateriaSource src_assigned;
    src_assigned = src;

    // test if deep copied
    MateriaSource tmp = src;

    // test learnMateria
    AMateria* ice = new Ice;
    AMateria* cure = new Cure;
    for (int i = 0; i < MateriaSource::MaxNumOfLearnedMaterias; ++i) {
        if (i % 2 == 0)
            src.learnMateria(ice);
        else
            src.learnMateria(cure);
    }

    // test no room to learn error
    AMateria* another_ice = new Ice;
    src.learnMateria(another_ice);
    delete another_ice;

    // try to learn invalid materias
    src_copy.learnMateria(src.createMateria("invalid type"));

    // test createMateria
    AMateria* ice_created = src.createMateria("ice");
    AMateria* cure_created = src.createMateria("cure");
    AMateria* invalid_created = src.createMateria("invalid");

    Character jack("Jack");
    Character paul("Paul");
    jack.equip(ice_created);
    jack.equip(cure_created);
    jack.equip(invalid_created);
    jack.use(0, paul);
    jack.use(1, paul);
    jack.use(2, paul);
}
    // test MateriaSource end

    return 0;
}