#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor for Animal called" << std::endl;
    type = "The type is not defined";
    return;
}

Animal::Animal( const Animal &other )
{
    this->type = other.type;
    return;
}

Animal& Animal::operator=( const Animal &other)
{
    this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called" << std::endl;
    return;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "The sound is not defined" << std::endl;
    return;
}