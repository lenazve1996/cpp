#include "Zombie.hpp"

Zombie::Zombie() {

    // _name = str;
    std::cout << "Constructor called" << std::endl;
    return;

}

Zombie::~Zombie() {

    std::cout << "Destructor called: " << _name << std::endl;
    return;

}

void Zombie::put_name( std::string str ) {

    _name = str;
    return;
}

void Zombie::announce( void ) {

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;

}