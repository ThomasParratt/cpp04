#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     if (this->copy[i])
    //     {
    //         delete this->copy[i];
    //     }
    // }  
    // OR
    //delete[] *this->copy;
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
    //delete materia; // this cause illegal hardware instruction
}
        
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->copy[i]->getType() == type)
        {
            this->copy[i] = this->copy[i]->clone(); // is this needed?
            return (this->copy[i]);
            break ;
        }
    }  
    return (0);
}