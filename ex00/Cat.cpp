#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = obj.type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat&    Cat::operator=(const Cat& obj)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
