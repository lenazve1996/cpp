#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor for Dog called" << std::endl;
    this->type = "Dog";
    return;
}

Dog::Dog( const Dog &other )
{
    this->type = other.type;
    return;
}

Dog& Dog::operator=( const Dog &other)
{
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog called" << std::endl;
    return;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
    return;
}