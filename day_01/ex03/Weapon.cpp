#include "Weapon.hpp"

Weapon::Weapon ( std::string weap_type )
{
    _type = weap_type;
    std::cout << "Constructor for weapon \"" << _type << "\" called" << std::endl;
    return;
}

Weapon::~Weapon ()
{
    std::cout << "Desctructor for weapon \"" << _type << "\" called" << std::endl;
    std::cout << std::endl;
    return;
}

std::string const & Weapon::getType()
{
    return this->_type;
}

void    Weapon::setType( std::string str )
{
    _type = str;
    return;
}