#ifndef ASPELL_H
# define ASPELL_H

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

public:
    ASpell() {return;};
    ASpell(std::string name, std::string effects);
    ASpell(const ASpell &other);
    ASpell &operator=(const ASpell &other);
    virtual ~ASpell();
    std::string const &getName() const;
    std::string const &getEffects() const;
    virtual ASpell *clone() const = 0;
    void launch(ATarget const & some_target) const;


protected:
    std::string _name;
    std::string _effects;
};

#endif