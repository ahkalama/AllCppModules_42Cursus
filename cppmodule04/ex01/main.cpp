#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Cat a;
    std::cout << "**--------------------------------**" << std::endl;
            std::cout << *(a.getBrain()->ideas) << std::endl;
    std::cout << "**--------------------------------**" << std::endl;

    int Acount = 4;
    Animal* animals[Acount];

    for (int i = 0; i < (Acount / 2); i++)
    {
        animals[i] = new Dog();
    }
    for (int i = (Acount / 2); i < Acount; i++)
    {
        animals[i] = new Cat();
    }
    for (int i = 0; i < Acount; i++)
    {
        animals[i]->makeSound();
    }
    for (int i = 0; i < Acount; i++)
    {
        std::cout<<"Type: "<<animals[i]->getType()<<std::endl;
    }
    std::cout << "**-----------DELETE-------------------**" << std::endl;
    for (int indx = 0; indx < Acount; indx++)
    {
        delete animals[indx];
    }
    delete j;
    delete i;
    
    return 0;
}

