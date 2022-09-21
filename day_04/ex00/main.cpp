#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 1 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 2 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl << std::endl;

    cat->makeSound();
    dog->makeSound();
    animal->makeSound();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 3 <<<<<<<<<<<<<<<" << std::endl << std::endl;
    const Animal *tmp = cat;
    cat = dog;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();

    const Animal* cat2 = new Cat();
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 4 <<<<<<<<<<<<<<<" << std::endl << std::endl;
    dog = cat2;
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 5 <<<<<<<<<<<<<<<" << std::endl << std::endl;
    const Animal* animal2 ( cat2 );
    std::cout << animal2->getType() << " " << std::endl;
    animal2->makeSound();

    dog = cat;
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 6 <<<<<<<<<<<<<<<" << std::endl << std::endl;
    const Animal* animal3 ( dog );
    std::cout << animal3->getType() << " " << std::endl;
    animal3->makeSound();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 7 <<<<<<<<<<<<<<<" << std::endl << std::endl;
    delete animal;
    delete cat2;
    delete dog;
    delete tmp;

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 8 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    const WrongAnimal* BrokenAnimal = new WrongAnimal();
    const WrongAnimal* BrokenCat = new WrongCat();

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 9 <<<<<<<<<<<<<<<"  << std::endl << std::endl;
    std::cout << BrokenAnimal->getType() << " " << std::endl;
    std::cout << BrokenCat->getType() << " " << std::endl << std::endl;

    BrokenAnimal->makeSound();
    BrokenCat->makeSound();
    std::cout << std::endl;

    delete BrokenAnimal;
    delete BrokenCat;
    std::cout << std::endl;
    return 0;
}