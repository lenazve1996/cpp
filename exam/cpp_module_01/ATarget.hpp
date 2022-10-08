#ifndef ATARGET_H
# define ATARGET_H

#include "ASpell.hpp"

class ASpell;

class ATarget {

public:
    ATarget() {return;};
    ATarget(std::string type);
    ATarget(const ATarget & other);
    ATarget &operator=(const ATarget & other);
    virtual ~ATarget();
    std::string const &getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(ASpell const & some_spell) const;


protected:
    std::string _type;
};

#endif