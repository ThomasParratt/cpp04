#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    std::cout << "tmp type = " << tmp->getType() << std::endl;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    std::cout << "tmp type = " << tmp->getType() << std::endl;
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);

    me->unequip(0);
    me->unequip(1);

    delete bob;
    delete me;
    delete src;

    return (0);
}
