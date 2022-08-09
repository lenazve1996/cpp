#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon {

public:
    Weapon ( std::string weap_type );
    ~Weapon ();
    std::string const & getType(); 
    void    setType( std::string str );

private:
    std::string _type;

};

#endif