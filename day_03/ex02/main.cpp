#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << std::endl;
    ClapTrap    Jane ( "Jane" );
    ScavTrap    Jack ( "Jack" );
    FragTrap    Alan ( "Alan" );

    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        Jane.attack("Jack");
        Jack.takeDamage (2);

        Jack.attack("Jane");
        Jane.takeDamage(3);
        Jack.guardGate();

        Alan.highFivesGuys();
        Alan.attack("Jane");
        Jane.beRepaired(1);
        Jack.beRepaired(1);
        std::cout << std::endl;
    }
}