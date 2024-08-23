#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = obj.type;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog&    Dog::operator=(const Dog& obj)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        this->brain = new Brain();
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

void    Dog::set_ideas(std::string idea)
{
    idea = "Let's go walkies! :P";
    this->brain->build_brain(idea);
}
