#include "Zombie.hpp"

int main()
{
    int numb = 7;
    Zombie* zombies = zombieHorde( numb, "Jane");
    for (int count = 0; count < numb; count++)
    {
        zombies[count].announce();
    }
    delete [] zombies;
    return 0;
}