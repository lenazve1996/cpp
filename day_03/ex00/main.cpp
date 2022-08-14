#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    // int Jane_damage = 3;
    // int Jack_damage = 2;
    std::cout << std::endl;
    ClapTrap    Jane ( "Jane" );
    ClapTrap    Jack ( "Jack" );

    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        Jane.attack("Jack");
        Jack.takeDamage (0);

        Jack.attack("Jane");
        Jane.takeDamage(0);

        Jane.beRepaired(1);
        Jack.beRepaired(1);
        std::cout << std::endl;
    }
}