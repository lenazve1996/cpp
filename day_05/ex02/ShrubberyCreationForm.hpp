#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <string>
#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form {

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm( std::string target );
    // ShrubberyCreationForm( const ShrubberyCreationForm &other );
    // ShrubberyCreationForm& operator=( const ShrubberyCreationForm &other );
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    void createSrubbery();

private:       
};

std::ostream &operator<<( std::ostream &out, ShrubberyCreationForm &bur );

#endif