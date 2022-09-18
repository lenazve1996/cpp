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
    std::string getName();
    int getGrade();
    Bureaucrat &Bureaucrat::operator++();
    Bureaucrat &Bureaucrat::operator--();
    // std::ostream &operator<<( std::ostream &out, Bureaucrat const &bur );

private:
    const std::string _name;
    int _grade;
};

#endif