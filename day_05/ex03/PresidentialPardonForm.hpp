#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <string>
#include "Form.hpp"
#include <iostream>

#define SIGN_PARDON 25
#define EXEC_PARDON 5

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm();
    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( const PresidentialPardonForm &other );
    PresidentialPardonForm& operator=( const PresidentialPardonForm &other );
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
};

#endif