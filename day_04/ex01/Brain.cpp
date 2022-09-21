#include "Brain.hpp"
#include <iostream>
Brain::Brain()
{
    std::cout << "Default constructor for Brain called" << std::endl;
    return;
}

Brain::Brain( const Brain &other )
{
    for (int counter = 0; counter < 100; counter++)
    {
        this->ideas[counter] = other.ideas[counter];
    }
    return;
}

Brain& Brain::operator=( const Brain &other)
{
    for (int counter = 0; counter < 100; counter++)
    {
        this->ideas[counter] = other.ideas[counter];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor for Brain called" << std::endl;
    return;
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}

void Brain::setIdeas( std::string idea )
{
    for (int counter = 0; counter < 100; counter++)
    {
        this->ideas[counter] = idea;
    }
}

void Brain::print5Ideas()
{
    for (int counter = 0; counter < 5; counter++)
    {
        std::cout << this->ideas[counter] << std::endl;
    }
}

