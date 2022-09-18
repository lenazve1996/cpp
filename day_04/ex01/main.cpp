#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    Animal *animals[6];
    std::cout << std::endl;
    for (int counter = 0; counter < 3; counter++)
    {
        animals[counter] = new Dog();
        std::cout << std::endl;
    }
    for (int counter = 3; counter < 6; counter++)
    {
        animals[counter] =  new Cat();
        std::cout << std::endl;
    }
    for (int counter = 0; counter < 6; counter++)
    {
        animals[counter]->getType();
        animals[counter]->makeSound();
    }
    
    return 0;
}
