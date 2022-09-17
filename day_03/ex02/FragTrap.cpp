#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap ()
{
    std::cout << "Default contstructor for FragTrap called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
    std::cout << "Constructor for FragTrap " << name << " called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    return;
}

FragTrap::FragTrap( const FragTrap &other )
{
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    *this = other;
    return;
}

FragTrap & FragTrap::operator = ( const FragTrap &other )
{
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

FragTrap::~FragTrap ()
{
    std::cout << "Destructor for FragTrap " << _name << " called" << std::endl;
    return;
}

void FragTrap::highFivesGuys()
{
    std::cout << "High five?" << std::endl;
    return; 
}