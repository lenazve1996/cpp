#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor for Cat called" << std::endl;
    this->type = "Cat";
    return;
}

Cat::Cat( const Cat &other )
{
    this->type = other.type;
    return;
}

Cat& Cat::operator=( const Cat &other )
{
    this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat called" << std::endl;
    return;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
    return;
}