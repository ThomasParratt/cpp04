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
    for (int i = 0; i < 3; i++)
    {
        if (!this->slot[i])
        {
            this->slot[i] = m;
            break ;
        }
    }  
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 3; i++)
    {
        if (i == idx)
            this->slot[i] = NULL;
    }  
}

void Character::use(int idx, ICharacter& target)
{
    for (int i = 0; i < 3; i++)
    {
        if (i == idx)
            this->slot[idx]->use(target);
    }  
}
void    Character::print_slot(int idx)
{
    if (this->slot[idx] == NULL)
        std::cout << "slot " << idx << " is not equiped" << std::endl;
    else
        std::cout << "slot " << idx << " is " << this->slot[idx]->getType() << std::endl;
}