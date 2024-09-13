#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
    std::cout << "Cure copy constructor called" << std::endl;
    this->type = obj.type;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

// Cure&    Cure::operator=(const Cure& obj)
// {
//     std::cout << "Cure copy assignment operator called" << std::endl;
//     return (*this);
// }

Cure*    Cure::clone() const
{
    return (new Cure());
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}