#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Default constructor for Dog called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
    return;
}

Dog::Dog( const Dog &other )
{
    this->type = other.type;
    this->_brain = new Brain();
    this->_brain->setIdeas(other._brain->getIdeas()[0]);
    return;
}

Dog& Dog::operator=( const Dog &other)
{
    this->type = other.type;
    this->_brain->setIdeas(other._brain->getIdeas()[0]);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog called" << std::endl;
    delete this->_brain;
    return;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
    return;
}

Brain *Dog::getBrain()
{
    return this->_brain;
}