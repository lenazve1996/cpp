#include "Zombie.hpp"

void randomChump( std::string name ) {

    Zombie  new_zombie;

    new_zombie.name = name;
    new_zombie.announce();
    return;
}