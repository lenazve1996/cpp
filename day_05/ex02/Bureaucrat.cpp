#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor for Bureaucrat called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
    std::cout << "Constructor for Bureaucrat "<< name << " called" << std::endl;
    try
    {
        this->setGrade(grade);
    }
    catch ( std::exception &err )
    {
        std::cout << err.what() << std::endl;
        _grade = 150;
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
    try
    {
        this->setGrade(this->_grade - 1);
    }
    catch ( std::exception &err )
    {
        std::cout << err.what() << std::endl;
    }
    return *this;
}

Bureaucrat &Bureaucrat::operator--()
{
    try
    {
        this->setGrade(this->_grade + 1);
    }
    catch ( std::exception &err )
    {
        std::cout << err.what() << std::endl;
    }
    return *this;
}

void Bureaucrat::signForm( std::string formName, std::string status ) const
{
    if (status == "Signed")
        std::cout << "Bureaucrat " << this->_name << " signed form " \
        << formName << std::endl;
    else
        std::cout << "Bureaucrat " << this->_name << " couldn’t sign form \"" \
        << formName << "\" because bureaucrat's grade is too low" << std::endl;
}

std::ostream & operator << ( std::ostream &out, Bureaucrat const &bur )
{
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return out;
}