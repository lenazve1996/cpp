#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor for ClapTrap called" << std::endl;
    return;
}

ClapTrap::ClapTrap( std::string name )
{
    std::cout << "Consctructor for ClapTrap " << name << " called" << std::endl;
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    return;
}

ClapTrap::ClapTrap( const ClapTrap &oldObj )
{
    // _name = oldObj._name;
    _hit_points = oldObj._hit_points;
    _energy_points = oldObj._energy_points;
    _attack_damage = oldObj._attack_damage;
    return;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &clapTrap )
{
    // _name = clapTrap._name;
    _hit_points = clapTrap._hit_points;
    _energy_points = clapTrap._energy_points;
    _attack_damage = clapTrap._attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor for ClapTrap " << _name << " called" << std::endl;
    return;
}

void ClapTrap::attack( const std::string& target )
{
    if (_energy_points && _hit_points)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target;
        std::cout << " causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points--;
    }
    else
    {
        outOfPoints();
        exit(0);
    }
}
void ClapTrap::takeDamage( unsigned int amount )
{
    if (_energy_points && _hit_points)
    {
        std::cout << "ClapTrap " << _name << " takes damage and loses ";
        std::cout << amount << " hit points!" << std::endl;
        _hit_points -= amount;
    }
    else
    {
        outOfPoints();
        exit(0);
    }
}
void ClapTrap::beRepaired( unsigned int amount )
{
    if (_energy_points && _hit_points)
    {
        std::cout << "ClapTrap " << _name << " repairs itself and gets ";
        std::cout << amount << " hit points back." << std::endl;
        _energy_points--;
        _hit_points += amount;
    }
    else
    {
        outOfPoints();
        exit(0);
    }
}

// std::string ClapTrap::getName()
// {
//     return this->_name;
// }

// int ClapTrap::getHitPoints()
// {
//     return this->_hit_points;
// }

// int ClapTrap::getEnergyPoints()
// {
//     return this->_energy_points;
// }

// int ClapTrap::getAttackDamage()
// {
//     return this->_attack_damage;
// }

void ClapTrap::outOfPoints( void )
{
    std::cout << std::endl;
    std::cout << "ClapTrap " << _name << " doesn't have any energy_points or hit_points" << std::endl;
    std::cout << "Hit points amount: " << _hit_points << std::endl;
    std::cout << "Energy points amount: " << _energy_points << std::endl;
    std::cout << std::endl;
}