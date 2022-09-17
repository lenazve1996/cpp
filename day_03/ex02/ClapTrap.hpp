#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {

public:
    ClapTrap();
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap & oldObj );
    ClapTrap& operator=( const ClapTrap &clapTrap );
    ~ClapTrap();
    // std::string getName();
    // int ClapTrap::getHitPoints();
    // int ClapTrap::getEnergyPoints();
    // int ClapTrap::getAttackDamage();
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void outOfPoints( void );

protected:
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;
};

#endif