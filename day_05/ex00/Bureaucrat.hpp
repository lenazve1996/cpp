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

private:
    const std::string _name;
    int _grade;
};

#endif