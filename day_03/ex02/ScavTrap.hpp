#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap ();
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &other );
    ScavTrap & operator = ( const ScavTrap &other );
    ~ScavTrap ();
    void guardGate();
};

#endif