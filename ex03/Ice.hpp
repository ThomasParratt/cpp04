#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& obj);
        ~Ice();
        Ice&    operator=(const Ice& obj);
        //std::string const & getType() const;
        Ice*    clone() const;
        void    use(ICharacter& target);
};

#endif