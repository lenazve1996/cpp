#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <string>
#include "Form.hpp"
#include <iostream>
#include <fstream>

#define SIGN_SHRUB 145
#define EXECUTE_SHRUB 137

class ShrubberyCreationForm : public Form {

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm &other );
    ShrubberyCreationForm& operator=( const ShrubberyCreationForm &other );
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    void createShrubbery() const;
};

#endif