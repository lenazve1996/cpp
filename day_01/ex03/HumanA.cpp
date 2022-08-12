#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon &weapon ) : _weapRef( weapon ), _name( name )
{
    std::cout << "Constructor for " << _name << " called" << std::endl;
    return;
}

HumanA::~HumanA ()
{
    std::cout << "Desructor for " << _name << " called" << std::endl;
    return;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapRef.getType() << std::endl;
    return;
}