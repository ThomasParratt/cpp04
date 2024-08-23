#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

/*int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    //const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return (0);
}*/

int main(void)
{
    const Animal    *animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        //animals[i]->makeSound();
        
    }
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }

    Cat   c;
    c.print_ideas();
    c.set_ideas("Let's go fishing!");
    c.print_ideas();
    c.set_ideas("Let's sleep now");
    c.print_ideas();
    // need to implement these for dog

    Animal  *animal;
    //Animal  animal;
}