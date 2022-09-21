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
        // animals[counter]->getType();
        animals[counter]->makeSound();
        // animals[counter]->printBrain();
    }

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 4 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Cat *cat = new Cat();
    cat->getBrain()->setIdeas("I don't like dogs");
    cat->getBrain()->print5Ideas();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 5 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Cat *cat2 (cat);
    cat2->getBrain()->print5Ideas();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 6 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    Cat *cat3  = cat;
    cat3->getBrain()->print5Ideas();
    
    // std::cout << std::endl << std::endl;
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    // std::cout << std::endl;
    return 0;
}
