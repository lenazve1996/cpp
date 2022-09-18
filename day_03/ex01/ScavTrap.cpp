#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap ()
{
    std::cout << "Default contstructor for ScavTrap called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
    std::cout << "Constructor for ScavTrap " << name << " called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    return;
}

ScavTrap::ScavTrap( const ScavTrap &other )
{
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    *this = other;
    return;
}

ScavTrap & ScavTrap::operator = ( const ScavTrap &other )
{
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

ScavTrap::~ScavTrap ()
{
    std::cout << "Destructor for ScavTrap " << _name << " called" << std::endl;
    return;
}

void ScavTrap::attack( const std::string& target )
{
    if (_energy_points && _hit_points)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target;
        std::cout << " causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points--;
    }
    else
    {
        outOfPoints();
        exit(0);
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name <<" is now in Gate keeper mode" << std::endl;
    return;
}