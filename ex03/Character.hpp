#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class   Character : public ICharacter
{
    private:
        std::string name;
        AMateria    *slot[4];
        //AMateria    *floor[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character& obj);
        Character&    operator=(const Character& obj);
        ~Character();
        std::string const & getName() const;
        void        equip(AMateria* m);
        void        unequip(int idx);
        void        use(int idx, ICharacter& target);
        void        print_slot(int idx);
};

#endif