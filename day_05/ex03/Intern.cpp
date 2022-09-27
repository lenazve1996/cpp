#include "Intern.hpp"

Intern::Intern() 
{
    std::cout << "Default constructor for Intern called" << std::endl << std::endl;
    return;
}

Intern::Intern( const Intern &other )
{
    *this = other;
    return;
}

Intern& Intern::operator=( const Intern & )
{
    return *this;
}

Intern::~Intern()
{
    std::cout << "Destructor for Intern called" << std::endl;
    return;
}

Form *Intern::makePresidentialPardonForm(std::string target)
{
    std::cout << "Intern creates PresidentialPardonForm" << std::endl << std::endl;
    PresidentialPardonForm *form = new PresidentialPardonForm(target);
    return form;
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
    std::cout << "Intern creates RobotomyRequestForm" << std::endl << std::endl;
    RobotomyRequestForm *form = new RobotomyRequestForm(target);
    return form;
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
    std::cout << "Intern creates ShrubberyCreationForm" << std::endl << std::endl;
    ShrubberyCreationForm *form = new ShrubberyCreationForm(target);
    return form;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    Form *newForm = NULL;
    try
    {
        Form *(Intern::*funcs[3])( std::string target ) = {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm,
        };

        std::string forms[3] = {
        "pardon request",
        "robotomy request",
        "shrubbery request",
        };

        for (int i = 0; i < 3; i++)
        {
            if (formName == forms[i])
            {
                newForm = (this->*funcs[i])(target);
                return newForm;
            }
            else
                throw WrongFormName();
            
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return newForm;
}