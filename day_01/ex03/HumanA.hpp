#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {

public:
    // HumanA ( std::string name, Weapon type );
    HumanA ( std::string name, Weapon type ) : _name(name), _weapRef(type) {};
    ~HumanA ();
    void attack();

private:

    Weapon& _weapRef;
    std::string _name;

};

#endif
