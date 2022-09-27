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
    Form *makePresidentialPardonForm(std::string target);
    Form *makeRobotomyRequestForm(std::string target);
    Form *makeShrubberyCreationForm(std::string target);

    class WrongFormName : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Wrong name of form";
        }
    };
};

#endif