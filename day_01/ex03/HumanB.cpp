#include "HumanB.hpp"

HumanB::HumanB ( std::string name)
{
    _name = name;
    std::cout << "Constructor for " << _name << " called" << std::endl;
    return;
}

HumanB::~HumanB ()
{
    std::cout << "Desructor for " << _name << " called" << std::endl;
    return;
}

void HumanB::setWeapon( Weapon *weapon )
{
    _weapPtr = weapon;
}

void HumanB::attack()
{
    if ( _weapPtr != NULL )
        std::cout << _name << " attacks with their " << _weapPtr->getType() << std::endl;
    return;
}