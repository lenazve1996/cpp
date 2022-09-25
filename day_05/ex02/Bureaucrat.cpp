#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor for Bureaucrat called" << std::endl;
    _grade = 150;
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
        std::cerr << err.what() << std::endl;
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
        std::cerr << err.what() << std::endl;
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
        std::cerr << err.what() << std::endl;
    }
    return *this;
}

void Bureaucrat::signForm( Form &form )
{
    try
    {
        form.beSigned(*this);
        std::cout << "Bureaucrat " << this->_name << " signed form " \
        << form.getName() << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureaucrat " << this->_name << " couldn’t sign form \"" << form.getName()\
         << "\" because " << e.what() << std::endl << std::endl;
    }
}

void Bureaucrat::executeForm( Form &form )
{
    try
    {
        form.execute(*this);
        std::cout << "Bureaucrat " << this->_name << " executed form " \
        << form.getName() << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureaucrat " << this->_name << " couldn’t execute form \"" \
        << form.getName() << "\" because " << e.what() << std::endl << std::endl;
    }
}

std::ostream & operator << ( std::ostream &out, Bureaucrat const &bur )
{
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl << std::endl;
    return out;
}