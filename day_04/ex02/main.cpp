#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    Animal *animals[4];
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 1 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    for (int counter = 0; counter < 2; counter++)
    {
        animals[counter] = new Dog();
        std::cout << std::endl;
    }
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 2 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    for (int counter = 2; counter < 4; counter++)
    {
        animals[counter] = new Cat();
        std::cout << std::endl;
    }
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 3 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    for (int counter = 0; counter < 4; counter++)
    {
        std::cout << animals[counter]->getType() << std::endl;
        animals[counter]->makeSound();
    }
    std::cout << std::endl;
    for (int counter = 0; counter < 4; counter++)
    {
        delete animals[counter];
    }

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 4 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Cat cat1;
    cat1.getBrain()->setIdeas("I don't like dogs");
    cat1.getBrain()->print5Ideas();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 5 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Cat cat2 (cat1);
    cat2.getBrain()->print5Ideas();

    std::cout << std::endl << "Cat1 address: " << &cat1 << std::endl;
    std::cout << "Cat2 address: " << &cat2 << std::endl << std::endl;

    std::cout << "Cat1 brain address: " << cat1.getBrain() << std::endl;
    std::cout << "Cat2 brain address: " << cat2.getBrain() << std::endl << std::endl;

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 6 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Cat cat3;
    cat3 = cat1;
    cat3.getBrain()->print5Ideas();
    
    std::cout << std::endl << "Cat1 address: "  << &cat1 << std::endl;
    std::cout << "Cat3 address: " << &cat3 << std::endl << std::endl;

    std::cout << "Cat1 brain address: " << cat1.getBrain() << std::endl;
    std::cout << "Cat3 brain address: " << cat3.getBrain() << std::endl;

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 7 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Dog basic;
    {
        Dog tmp;
        tmp = basic;
        std::cout << std::endl << "Basic address: " << &basic << std::endl;
        std::cout << "Tmp address: " << &tmp << std::endl;
        std::cout << std::endl;
        std::cout << "Basic brain address: " << basic.getBrain() << std::endl;
        std::cout << "Basic tmp address: " << tmp.getBrain() << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
