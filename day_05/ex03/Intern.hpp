#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
    Intern();
    Intern( std::string target );
    Intern( const Intern &other );
    Intern& operator=( const Intern &other );
    ~Intern();
    Form *makeForm(std::string formName, std::string target);
    Form *Intern::makePresidentialPardonForm(std::string target);
    Form *Intern::makeRobotomyRequestForm(std::string target);
    Form *Intern::makeShrubberyCreationForm(std::string target);
};

#endif