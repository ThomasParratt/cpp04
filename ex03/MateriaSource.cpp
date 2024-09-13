#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->copy[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->copy[i])
            delete this->copy[i];
    }  
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->copy[i])
        {
            this->copy[i] = materia;
            break ;
        }
    }
}
        
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->copy[i]->getType() == type)
        {
            return (this->copy[i]->clone());
            break ;
        }
    }  
    return (0);
}