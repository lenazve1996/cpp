#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("name not assigned", 145, 137)
{
    std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : \
Form(target, 145, 137)
{
    std::cout << "Constructor for ShrubberyCreationForm "<< target << " called" << std::endl;
    return;
}

// ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ) : Form( const ShrubberyCreationForm &other )
// {
//     this->_signed = other._signed;
//     return;
// }

// ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
// {
//     this->_signed = other._signed;
//     return *this;
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
    return;
}

void ShrubberyCreationForm::createSrubbery()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == 1)
    try
    {
        if (executor.getGrade() <= this->getExecuteGrade() && this->getSigned())
        {
            this->createSrubbery();
        }
        else
        {
            bur.signForm(this->_name, "notSigned");
            throw GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
