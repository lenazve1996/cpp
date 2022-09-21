#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <string>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal( std::string name );
    WrongAnimal( const WrongAnimal & other );
    WrongAnimal& operator=( const WrongAnimal &other );
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;

protected:
    std::string type;

};

#endif