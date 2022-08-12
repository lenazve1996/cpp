#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {

public:
    HumanA ( std::string name, Weapon &weapon );
    ~HumanA ();
    void attack();

private:

    Weapon& _weapRef;
    std::string _name;

};

#endif
