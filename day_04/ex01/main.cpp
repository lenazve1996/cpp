#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl << "FIRST TEST" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    std::cout << std::endl << "SECOND TEST" << std::endl;
    const Animal* cat = j;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();

    std::cout << std::endl << "THIRD TEST" << std::endl;
    const Animal* dog = i;
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();

    std::cout << std::endl << "FOURTH TEST" << std::endl;
    const Animal* animal(meta);
    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    std::cout << std::endl;

    Animal *animals = new Animal[6];
    std::cout << std::endl;
    for (int counter = 0; counter < 3; counter++)
    {
        animals[counter] = Dog();
        std::cout << std::endl;
    }
    for (int counter = 3; counter < 6; counter++)
    {
        animals[counter] = Cat();
        std::cout << std::endl;
    }
    for (int counter = 0; counter < 6; counter++)
    {
        animals[counter].getType();
        animals[counter].makeSound();
    }  
    delete meta;
    delete i;
    delete j;
    return 0;
}