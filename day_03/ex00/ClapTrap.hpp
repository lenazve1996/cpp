#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {

public:
    ClapTrap();
    ClapTrap( std::string name );
    ClapTrap ( const ClapTrap & oldObj );
    ClapTrap& operator=( const ClapTrap &clapTrap );
    ~ClapTrap ();
    std::string getName();
    int getHitPoints();
    int getEnergyPoints();
    int getAttackDamage();
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void outOfPoints( void );
    bool isAlive ( void );

private:
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;
};

#endif