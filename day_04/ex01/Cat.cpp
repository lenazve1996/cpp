#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor for Cat called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
    return;
}

Cat::Cat( const Cat &other )
{
    this->type = other.type;
    this->_brain = other._brain;
    return;
}

Cat& Cat::operator=( const Cat &other )
{
    this->type = other.type;
    this->_brain = other._brain;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat called" << std::endl;
    delete this->_brain;
    return;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
    return;
}