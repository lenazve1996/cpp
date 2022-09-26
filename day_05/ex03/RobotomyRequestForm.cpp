#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    : Form("RobotomyRequestForm", SIGN_ROBO, EXECUTE_ROBO)
{
    std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) 
    : Form("RobotomyRequestForm", SIGN_ROBO, EXECUTE_ROBO, target)
{
    std::cout << "Constructor for RobotomyRequestForm called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other )
    : Form( other.getName(), other.getSignGrade(), other.getExecuteGrade(), other.getTarget() )
{
    *this = other;
    return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
    this->setSigned(other.getSigned());
    this->setTarget(other.getTarget());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
    return;
}


void RobotomyRequestForm::robotomy() const
{
    srand(time(0));

    std::cout << "trrrr trrrr trrrr" << std::endl;
    if (rand() % 2 == 1)
    {
        std::cout << this->getTarget() << " has been robotomized" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed. Target: " << this->getTarget() << std::endl;
    }
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
        {
            this->robotomy();
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