#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    : Form("PresidentialPardonForm", SIGN_PARDON, EXEC_PARDON)
{
    std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) 
    : Form("PresidentialPardonForm", SIGN_PARDON, EXEC_PARDON, target)
{
    std::cout << "Constructor for PresidentialPardonForm called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other )
    : Form( other.getName(), other.getSignGrade(), other.getExecuteGrade(), other.getTarget() )
{
    *this = other;
    return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
    this->setSigned(other.getSigned());
    this->setTarget(other.getTarget());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
    return;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
        {
            std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        }
        else
        {
            throw GradeTooLowException();
        }
    }
    else
    {
        throw FormIsNotSigned();
    }
}