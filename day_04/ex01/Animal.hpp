#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal {

public:
    Animal();
    Animal( std::string name );
    Animal( const Animal &other );
    Animal& operator=( const Animal &other );
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;

protected:
    std::string type;

};

#endif