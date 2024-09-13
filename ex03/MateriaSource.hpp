#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *copy[4];
    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type);
};

#endif