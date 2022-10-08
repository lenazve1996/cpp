#ifndef FWOOSH_H
# define FWOOSH_H

#include "ASpell.hpp"

class Fwoosh : public ASpell {

public:
    Fwoosh();
    // Fwoosh(std::string name, std::string effects);
    ~Fwoosh();
    Fwoosh *clone() const;

};

#endif