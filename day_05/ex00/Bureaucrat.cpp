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
    if (grade < 1 || grade > 150)
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

Bureaucrat &Bureaucrat::operator++()
{
    if ( this->_grade <= 1 )
    {
        std::cout << "exeption" << std::endl;
        exit;
    }
    else
        this->_grade -= 1;
    return *this;
}

Bureaucrat &Bureaucrat::operator--()
{
    if ( this->_grade >= 150 )
    {
        std::cout << "exeption" << std::endl;
        exit;
    }
    else
        this->_grade += 1;
    return *this;
}

Bureaucrat &Bureaucrat::operator++( int )
{
    if ( this->_grade <= 1 )
    {
        std::cout << "exeption" << std::endl;
        exit;
    }
    else
    {
        Bureaucrat newBur = *this;
        this->_grade -= 1;
        return newBur;
    }
}

Bureaucrat &Bureaucrat::operator--( int )
{

}

// std::ostream & operator<< ( std::ostream &out )
// {
//     out << bur.getName() << " , bureaucrat grade " << bur.getGrade() << std::endl;
//     return out;
// }