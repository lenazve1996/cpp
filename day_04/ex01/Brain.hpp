#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {

public:
    Brain();
    Brain( std::string name );
    Brain( const Brain &other );
    Brain& operator=( const Brain &other );
    ~Brain();

protected:
    std::string ideas[100];

};

#endif