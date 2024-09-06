#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class   Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string idea);
        Brain(const Brain& obj);
        virtual ~Brain();
        Brain& operator=(const Brain& obj);
        //void            build_brain(std::string idea);
        std::string     *get_ideas();
};

#endif