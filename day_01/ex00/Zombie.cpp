#include "Zombie.hpp"

Zombie::Zombie( std::string str ) {

    _name = str;
    std::cout << std::endl << "Constructor called: " << _name << std::endl;
    return;

}

Zombie::~Zombie() {

    std::cout << "Destructor called: " << _name << std::endl << std::endl;
    return;

}

void Zombie::announce( void ) {

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;

}