#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = obj.type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "dead air..." << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}