#ifndef DOG_H
# define DOG_H

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
    Dog();
    Dog( std::string name );
    Dog( const Dog &other );
    Dog& operator=( const Dog &other );
    ~Dog();
    void makeSound() const;
    Brain *getBrain();

private:
    Brain *_brain;
};

#endif