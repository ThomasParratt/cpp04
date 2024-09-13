#include "Character.hpp"

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : name(name)
{
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->slot[i] = NULL;
    }
}

Character::Character(const Character& obj)
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (obj.slot[i])
        {
            this->slot[i] = obj.slot[i]->clone();
        }
    } 
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
            delete this->slot[i];
    }
}

Character&    Character::operator=(const Character& obj)
{
    std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            if (obj.slot[i])
            {
                this->slot[i] = obj.slot[i]->clone();
            }
        } 
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
            this->slot[i] = NULL;
    }  
}

void Character::use(int idx, ICharacter& target)
{
    for (int i = 0; i < 4; i++)
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