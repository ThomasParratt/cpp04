#include "Character.hpp"

Character::Character() : name("default")
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->slot[i] = nullptr;
        this->floor[i] = nullptr;
    }
}

Character::Character(std::string name) : name(name)
{
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->slot[i] = nullptr;
        this->floor[i] = nullptr;
    }
}

Character::Character(const Character& obj)
{
    std::cout << "Character copy constructor called" << std::endl;
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
    {
        if (obj.slot[i])
            this->slot[i] = obj.slot[i]->clone();
        else
            this->slot[i] = nullptr;
        if (obj.floor[i])
            this->floor[i] = obj.floor[i]->clone();
        else
            this->floor[i] = nullptr;
    } 
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
            delete this->slot[i];
        if (this->floor[i])
            delete this->floor[i];
    }
}

Character&    Character::operator=(const Character& obj)
{
    std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        for (int i = 0; i < 4; i++)
        {
            if (obj.slot[i])
                this->slot[i] = obj.slot[i]->clone();
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
    std::cout << this->getName() << " equips " << m->getType() << " type Materia ";
    for (int i = 0; i < 4; i++)
    {
        if (!this->slot[i])
        {
            std::cout << "to slot " << i << std::endl;
            this->slot[i] = m;
            break ;
        }
    }  
}

void Character::unequip(int idx)
{
    std::cout << this->getName() << " unequips Materia at slot " << idx << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->floor[i] = this->slot[i];
            this->slot[i] = nullptr;
        }
    }  
}

void Character::use(int idx, ICharacter& target)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx && this->slot[idx])
            this->slot[idx]->use(target);
    }
}

// void    Character::print_slot(int idx)
// {
//     if (this->slot[idx] == NULL)
//         std::cout << "slot " << idx << " is not equiped" << std::endl;
//     else
//         std::cout << "slot " << idx << " is " << this->slot[idx]->getType() << std::endl;
// }