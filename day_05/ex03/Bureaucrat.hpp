#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

public:
    Bureaucrat();
    Bureaucrat( std::string name, int grade );
    Bureaucrat( const Bureaucrat &other );
    Bureaucrat& operator=( const Bureaucrat &other );
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void setGrade( int grade );
    Bureaucrat &operator++();
    Bureaucrat &operator--();
    void signForm( Form &form );
    void executeForm(Form &form);

    class GradeTooHighException : public std::exception { 
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too high for bureaucrat");
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too low for bureaucrat");
        }
    };


private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bur );

#endif