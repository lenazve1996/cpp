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
    std::string *getIdeas();
    void setIdeas( std::string idea );
    void print5Ideas();

protected:
    std::string ideas[100];

};

#endif