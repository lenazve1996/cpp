#include <iostream>
#include "ScavTrap.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 1 <<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;
    ClapTrap    Jane ( "Jane" );
    ScavTrap    Jack ( "Jack" );

    std::cout << std::endl << Jane.getName() << std::endl;
    std::cout << Jane.getHitPoints() << std::endl;
    std::cout << Jane.getEnergyPoints() << std::endl;
    std::cout << Jane.getAttackDamage() << std::endl << std::endl;

    std::cout << Jack.getName() << std::endl;
    std::cout << Jack.getHitPoints() << std::endl;
    std::cout << Jack.getEnergyPoints() << std::endl;
    std::cout << Jack.getAttackDamage() << std::endl << std::endl;

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 2 <<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;
    while (Jane.isAlive() && Jack.isAlive())
    {
        std::cout << std::endl;
        Jane.attack("Jack");
        Jack.takeDamage (Jane.getAttackDamage());

        std::cout << std::endl;    
        Jack.attack("Jane");
        Jane.takeDamage(Jack.getAttackDamage());

        std::cout << std::endl;
        Jack.guardGate();

        std::cout << std::endl;
        Jane.beRepaired(1);
        Jack.beRepaired(1);
        std::cout << std::endl << std::endl;
    }
    return 0;
}