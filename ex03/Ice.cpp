#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
    std::cout << "Ice copy constructor called" << std::endl;
    this->type = obj.type;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice&    Ice::operator=(const Ice& obj)
{
    std::cout << "Ice copy assignment operator called" << std::endl;
    return (*this);
}

Ice*    Ice::clone() const
{
    return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}