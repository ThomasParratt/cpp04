#include "Character.hpp"

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : name(name)
{
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& obj)
{
    std::cout << "Character copy constructor called" << std::endl;
    this->name = obj.name;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

Character&    Character::operator=(const Character& obj)
{
    std::cout << "Character copy assignment operator called" << std::endl;
    this->name = obj.name;
    if (this != &obj)
        this->name = obj.name;
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 1; i < 4; i++)
    {
        if (!this->slot[i])
            this->slot[i] = m;
    }  
}

void Character::unequip(int idx)
{
    for (int i = 1; i < 4; i++)
    {
        if (i == idx)
            this->slot[i] = NULL;
    }  
}

void Character::use(int idx, ICharacter& target)
{
    for (int i = 1; i < 4; i++)
    {
        if (i == idx)
            target.use(idx, target);
    }  
}
std::string    Character::get_slot(int idx)
{
    return (this->slot[idx]->getType());
}