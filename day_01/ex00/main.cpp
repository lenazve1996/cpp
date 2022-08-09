#include "Zombie.hpp"

int main()
{

    Zombie *first = newZombie( "Jane" );
    first->announce();
    delete first;

    randomChump( "Jack" );
    return 0;
}