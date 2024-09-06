#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// #include "IMateriaSource.hpp"
// #include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

// int main(void)
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;

//     return (0);
// }

int main(void)
{
    AMateria    *materia_1 = new Ice();
    AMateria    *materia_2 = materia_1->clone();
    AMateria    *materia_3 = new Cure();
    std::cout << "materia_1 is " << materia_1->getType() << std::endl;
    std::cout << "materia_2 is " << materia_2->getType() << std::endl;
    std::cout << "materia_3 is " << materia_3->getType() << std::endl;

    Character  Tom = Character("Tom");
    materia_1->use(Tom);
    materia_3->use(Tom);

    delete materia_1;
    delete materia_2;
}