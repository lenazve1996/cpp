#include "HumanB.hpp"

HumanB::HumanB ( std::string name)
{
    _name = name;
    // *(_weapPtr) = type;
    std::cout << "Constructor for " << _name << " called" << std::endl;
    return;
}

HumanB::~HumanB ()
{
    std::cout << "Desructor for " << _name << " called" << std::endl;
    return;
}

void HumanB::setWeapon( Weapon weapon_type )
{
    *(_weapPtr) = weapon_type;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapPtr->getType() << std::endl;
    return;
}