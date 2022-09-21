#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default constructor for WrongCat called" << std::endl;
    this->type = "WrongCat";
    return;
}

WrongCat::WrongCat( const WrongCat &other )
{
    this->type = other.type;
    return;
}

WrongCat& WrongCat::operator=( const WrongCat &other )
{
    this->type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat called" << std::endl;
    return;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
    return;
}