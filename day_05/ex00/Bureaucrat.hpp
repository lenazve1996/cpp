#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>

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
    Bureaucrat operator++( int );
    Bureaucrat operator--( int );

    class GradeTooHighException { 
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too high");
        }
    };

    class GradeTooLowException {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too low");
        }
    };


private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bur );

#endif