#include "MateriaSource.hpp"

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
            return (this->copy[i]);
            break ;
        }
    }  
    return (0);
}