#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor for Bureaucrat called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
    std::cout << "Constructor for Bureaucrat called" << std::endl;
    // this->_name = name;
    this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat( const Bureaucrat &other )
{
    return;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &other )
{
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor for Bureaucrat called" << std::endl;
    return;
}

std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade()
{
    return this->_grade;
}