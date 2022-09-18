#ifndef CAT_H
# define CAT_H

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

public:
    Cat();
    Cat( std::string name );
    Cat( const Cat &other );
    Cat& operator=( const Cat &other );
    ~Cat();
    void makeSound() const;
    void getBrain();
    void setbrain();

private:
    Brain *_brain;
};

#endif