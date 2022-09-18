#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 1 <<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;
    
    ClapTrap    Jane ( "Jane" );
    ClapTrap    Jack ( "Jack" );

    std::cout << std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout << std::endl;
        Jane.attack("Jack");
        Jack.takeDamage (Jane.getAttackDamage());

        std::cout << std::endl;
        Jack.attack("Jane");
        Jane.takeDamage(Jack.getAttackDamage());

        std::cout << std::endl;
        Jane.beRepaired(1);
        Jack.beRepaired(1);
        std::cout << std::endl << std::endl;
    }

    std::cout << std::endl << ">>>>>>>>>>>>>>> TEST 2 <<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;

    ClapTrap Clap1 = Jane;
    std::cout << Clap1.getName() << std::endl;
    std::cout << Clap1.getHitPoints() << std::endl;
    std::cout << Clap1.getEnergyPoints() << std::endl;
    std::cout << Clap1.getAttackDamage() << std::endl;

    ClapTrap Clap2 (Jack);
    std::cout << Clap2.getName() << std::endl;
    std::cout << Clap2.getHitPoints() << std::endl;
    std::cout << Clap2.getEnergyPoints() << std::endl;
    std::cout << Clap2.getAttackDamage() << std::endl;

}