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
    try
    {
        this->setGrade(grade);
    }
    catch ( Bureaucrat::GradeTooHighException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    catch ( Bureaucrat::GradeTooLowException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    return;
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ) : _name(other._name)
{
    this->_grade = other._grade;
    return;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &other )
{
    this->_grade = other._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor for Bureaucrat called" << std::endl;
    return;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::setGrade( int grade )
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat &Bureaucrat::operator++()
{
    // if ( this->_grade <= 1 )
    // {
    //     std::cout << "exeption" << std::endl;
    //     exit(0);
    // }
    // else
    //     this->_grade -= 1;
    // return *this;

    try
    {
        this->setGrade(this->_grade - 1);
    }
    catch ( Bureaucrat::GradeTooHighException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    catch ( Bureaucrat::GradeTooLowException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    return *this;
}

Bureaucrat &Bureaucrat::operator--()
{
    // if ( this->_grade >= 150 )
    // {
    //     std::cout << "exeption" << std::endl;
    //     exit(0);
    // }
    // else
    //     this->_grade += 1;
    // return *this;

    try
    {
        this->setGrade(this->_grade + 1);
    }
    catch ( Bureaucrat::GradeTooHighException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    catch ( Bureaucrat::GradeTooLowException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    return *this;
}

Bureaucrat Bureaucrat::operator++( int )
{
    // if ( this->_grade <= 1 )
    // {
    //     std::cout << "exeption" << std::endl;
    //     exit(0);
    // }
    // else
    // {
    //     Bureaucrat newBur = *this;
    //     this->_grade -= 1;
    //     return newBur;
    // }
    try
    {
        Bureaucrat newBur = *this;
        this->setGrade(this->_grade - 1);
        return newBur;
    }
    catch ( Bureaucrat::GradeTooHighException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    catch ( Bureaucrat::GradeTooLowException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
}

Bureaucrat Bureaucrat::operator--( int )
{
    // if ( this->_grade >= 150 )
    // {
    //     std::cout << "exeption" << std::endl;
    //     exit(0);
    // }
    // else
    // {
    //     Bureaucrat newBur = *this;
    //     this->_grade += 1;
    //     return newBur;
    // }
    try
    {
        Bureaucrat newBur = *this;
        this->setGrade(this->_grade + 1);
        return newBur;
    }
    catch ( Bureaucrat::GradeTooHighException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
    catch ( Bureaucrat::GradeTooLowException & err)
    {
        std::cout << err.what() << std::endl;
        exit(0);
    }
}

std::ostream & operator << ( std::ostream &out, Bureaucrat const &bur )
{
    out << bur.getName() << " , bureaucrat grade " << bur.getGrade() << std::endl;
    return out;
}