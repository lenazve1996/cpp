#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void f(Animal &ap);
void addr(Animal);

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

    // Dog d = Dog();
    // Cat c = Cat();
    // Animal *as[2];
    // as[0] = &c;
    // as[1] = &d;
    // for (int i = 0; i < 2; i++) f(*as[i]);
    // f(d);
    // f(c);
    // Animal as[2];
    // as[0] = &d;
    // as[1] = &c;
    //for (int i = 0; i < 2; i++) f(*as[i]);
    // Animal &ref = d;
    // std::cout << &ref << "\n";
    // addr(d);
}

void f(Animal &ap) {
    ap.makeSound();
}

void addr(Animal animal) {
    std::cout << &animal << "\n";
}

// C:
// f(x); // Всегда делает копию.
// &x // Чтобы передать по референсу!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// C++:
// Prototype: f(T)
//    f(x): // Копия.
// Prototype: f(T &)
//    f(x): // РЕФЕРЕНС!!!!!!!!!!!!!!!!!!!!
