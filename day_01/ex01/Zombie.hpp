#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

public:

	Zombie ();
	~Zombie();
	void put_name( std::string str );
	void announce( void );

private:

	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif