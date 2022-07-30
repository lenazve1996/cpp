#include "Zombie.hpp"

Zombie::Zombie( void ) {

    std::cout << name << std::endl;

}

void Zombie::announce( void ) {

    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}