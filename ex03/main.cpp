#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource();
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

    return (0);
}

// int main(void)
// {
//     AMateria    *materia_1 = new Ice();
//     AMateria    *materia_2 = materia_1->clone();
//     AMateria    *materia_3 = new Cure();
//     AMateria    *materia_4 = new Cure();
//     std::cout << "materia_1 is " << materia_1->getType() << std::endl;
//     std::cout << "materia_2 is " << materia_2->getType() << std::endl;
//     std::cout << "materia_3 is " << materia_3->getType() << std::endl;
//     std::cout << "materia_4 is " << materia_4->getType() << std::endl;

//     Character  *Tom = new Character("Thomas");
//     Character  *Sam = new Character("Samuel");
//     materia_1->use(*Tom); // the argument in use should be ICharacter?
//     materia_3->use(*Tom);

//     Tom->equip(materia_1);
//     Tom->print_slot(0);
//     Tom->equip(materia_2);
//     Tom->print_slot(1);
//     Tom->equip(materia_3);
//     Tom->print_slot(2);
//     Tom->equip(materia_4); // this does nothing because all slots are full
//     Tom->print_slot(0);

//     Tom->unequip(0);
//     Tom->print_slot(0);
//     Tom->equip(materia_1);
//     Tom->print_slot(0);

//     Tom->use(0, *Sam);
//     Tom->use(2, *Sam);

//     delete materia_1;
//     delete materia_2;
//     delete materia_3;
//     delete materia_4;
//     delete Tom;
//     delete Sam;
// }