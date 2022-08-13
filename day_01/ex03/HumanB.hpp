#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {

public:
    HumanB ( std::string name);
    ~HumanB ();
    void setWeapon( Weapon *weapon );
    void attack();

private:

    Weapon* _weapPtr;
    std::string _name;

};

#endif