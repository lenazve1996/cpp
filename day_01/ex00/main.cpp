#include "Zombie.hpp"

int main()
{
    std::string first_name = "Jane";
    std::string second_name = "Jack";

    Zombie *first = newZombie( first_name );
    first->announce();
    delete first;

    randomChump( second_name );
    return 0;
}