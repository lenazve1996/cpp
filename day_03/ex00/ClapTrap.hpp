#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {

public:
    ClapTrap( std::string name );
    ClapTrap ( const ClapTrap & oldObj );
    ClapTrap& operator=( const ClapTrap &clapTrap );
    ~ClapTrap ();
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void outOfPoints( void );

private:
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;
};

#endif