#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria() : type("AMateria")
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    this->type = obj.type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &obj)
        *this = obj;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}
