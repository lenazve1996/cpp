#include "Intern.hpp"

Intern::Intern() 
{
    std::cout << "Default constructor for Intern called" << std::endl;
    return;
}

// Intern::Intern( std::string target ) 
//     : Form("Intern", SIGN_PARDON, EXEC_PARDON, target)
// {
//     std::cout << "Constructor for Intern called" << std::endl;
//     return;
// }

Intern::Intern( const Intern &other )
{
    return;
}

Intern& Intern::operator=( const Intern &other )
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
    PresidentialPardonForm *form = new PresidentialPardonForm(target);
    return form;
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
    RobotomyRequestForm *form = new RobotomyRequestForm(target);
    return form;
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
    ShrubberyCreationForm *form = new ShrubberyCreationForm(target);
    return form;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    Form *(Intern::*funcs[3])( std::string target ) = {
    &Intern::makePresidentialPardonForm,
    &Intern::makeRobotomyRequestForm,
    &Intern::makeShrubberyCreationForm,
    };

    std::string forms[3] = {
    "makePresidentialPardonForm",
    "RobotomyRequestForm",
    "ShrubberyCreationForm",
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i])
            this->*funcs[i](target);
    }
    
    // try
    // {
    //     if ()
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
}