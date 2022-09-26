#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <string>
#include "Form.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

#define SIGN_ROBO 72
#define EXECUTE_ROBO 45

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm();
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RobotomyRequestForm &other );
    RobotomyRequestForm& operator=( const RobotomyRequestForm &other );
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
    void robotomy() const;
};

#endif