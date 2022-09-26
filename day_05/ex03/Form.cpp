#include "Form.hpp"

Form::Form() : _name("name not assigned"), _signGrade(0), _executeGrade(0)
{
    std::cout << "Default constructor for Form called" << std::endl;
    _signed = 0;
    return;
}

int Form::checkGrade( int grade )
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
            return grade;
    }
    catch ( std::exception &err )
    {
        std::cout << err.what() << std::endl;
        return 1;
    }
}

Form::Form( std::string name, int gToSign, int gToExecute ) : \
_name(name), _signGrade(checkGrade(gToSign)), _executeGrade(checkGrade(gToExecute))
{
    std::cout << "Constructor for Form called" << std::endl;
    _signed = 0;
    return;
}


Form::Form( std::string name, int gToSign, int gToExecute, std::string target ) : \
_name(name), _signGrade(checkGrade(gToSign)), _executeGrade(checkGrade(gToExecute))
{
    std::cout << "Constructor for Form called" << std::endl;
    _signed = 0;
    _target = target;
    return;
}

Form::Form( const Form &other ) : _name(other._name), _signGrade(other._signGrade), \
_executeGrade(other._executeGrade)
{
    this->_signed = other._signed;
    this->_target = other._target;
    return;
}

Form& Form::operator=( const Form &other )
{
    this->_signed = other._signed;
    this->_target = other._target;
    return *this;
}

Form::~Form()
{
    std::cout << "Destructor for Form called" << std::endl;
    return;
}

std::string Form::getName() const
{
    return this->_name;
}

void Form::checkSignGrade( int grade )
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

void Form::checkExecuteGrade( int grade )
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getSignGrade() const
{
    return this->_signGrade;
}

int Form::getExecuteGrade() const
{
    return this->_executeGrade;
}

std::string Form::getTarget() const
{
    return this->_target;
}

void Form::setSigned(bool status)
{
    _signed = status;
    return; 
}

void Form::setTarget(std::string otherTarget)
{
    _target = otherTarget;
}

void Form::beSigned( Bureaucrat const &bur )
{
    if (bur.getGrade() <= this->getSignGrade())
    {
        this->_signed = 1;
    }
    else
    {
        throw GradeTooLowException();
    }
}

void Form::execute(Bureaucrat const & executor) const
{
    (void)executor;
    return;
}

std::ostream & operator << ( std::ostream &out, Form &form )
{
    out << form.getName();
    if (form.getSigned() == 1)
        out << " is signed";
    else
        out << " isn't signed";
    out << ", form sign grade: " << form.getSignGrade() \
    << ", execute grade: " << form.getExecuteGrade() << ", target: "\
    << form.getTarget() << std::endl << std::endl;
    return out;
}