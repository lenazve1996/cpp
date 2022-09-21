#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor for WrongAnimal called" << std::endl;
    type = "The type is not defined";
    return;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
    this->type = other.type;
    return;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &other)
{
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal called" << std::endl;
    return;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "The sound is not defined" << std::endl;
    return;
}