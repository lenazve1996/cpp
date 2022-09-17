#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap ();
    FragTrap( std::string name );
    FragTrap( const FragTrap &other );
    FragTrap & operator = ( const FragTrap &other );
    ~FragTrap ();
    void highFivesGuys();
};

#endif