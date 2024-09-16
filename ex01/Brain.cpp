#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = idea;
        //std::cout << this->ideas[i] << std::endl;
    }
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this->ideas = *obj.ideas;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &obj)
        *this->ideas = *obj.ideas;
    return (*this);
}

std::string *Brain::get_ideas()
{
    return (this->ideas);
}


