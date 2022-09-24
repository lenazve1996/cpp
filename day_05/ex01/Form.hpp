#ifndef FORM_H
# define FORM_H

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {

public:
    Form();
    Form( std::string name, int gToSign, int gToExecute );
    Form( const Form &other );
    Form& operator=( const Form &other );
    ~Form();
    std::string getName() const;
    bool getSigned();
    int getSignGrade() const;
    int getExecuteGrade() const;
    void checkSignGrade( int grade );
    void checkExecuteGrade( int grade );
    void beSigned( Bureaucrat const &bur );

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too high for form");
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too low for form");
        }
    };

private:
    const std::string   _name;
    bool                _signed;
    const int           _signGrade;
    const int           _executeGrade;
    int                 checkGrade( int grade );           
};

std::ostream &operator<<( std::ostream &out, Form &bur );

#endif