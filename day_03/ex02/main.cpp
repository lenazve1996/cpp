#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 1 <<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;
    ScavTrap    Jack ( "Jack" );
    FragTrap    Alan ( "Alan" );

    std::cout << std::endl << Jack.getName() << std::endl;
    std::cout << Jack.getHitPoints() << std::endl;
    std::cout << Jack.getEnergyPoints() << std::endl;
    std::cout << Jack.getAttackDamage() << std::endl << std::endl;

    std::cout << Alan.getName() << std::endl;
    std::cout << Alan.getHitPoints() << std::endl;
    std::cout << Alan.getEnergyPoints() << std::endl;
    std::cout << Alan.getAttackDamage() << std::endl << std::endl;

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 2 <<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;
    Alan.highFivesGuys();

    int counter = 1;
    while (Jack.isAlive() && Alan.isAlive())
    {
        std::cout << std::endl << ">>>>>>>>>>>>>>> " << counter << " ROUND <<<<<<<<<<<<<<<" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        
        Jack.attack("Alan");
        Alan.takeDamage (Jack.getAttackDamage());

        std::cout << std::endl;
        Alan.attack("Jack");
        Jack.takeDamage (Alan.getAttackDamage());

        std::cout << std::endl;
        Jack.beRepaired(1);
        Alan.beRepaired(1);
        std::cout << std::endl << std::endl;
        counter++;
    }
    return 0;
}