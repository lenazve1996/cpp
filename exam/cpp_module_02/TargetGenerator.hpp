#ifndef TARGETGENERATOR_H
# define TARGETGENERATOR_H

#include <string>
#include <iostream>
#include <vector>

// #include "ASpell.hpp"
#include "ATarget.hpp"

// class ASpell;
class ATarget;

class TargetGenerator {

public:
    TargetGenerator() {return;};
    ~TargetGenerator();
    void learnTargetType(ATarget *some_target);
    void forgetTargetType(std::string const &targen_name);
    ATarget* createTarget(std::string const &targen_name);


private:
    std::vector <ATarget *> _targets;
    TargetGenerator(const TargetGenerator &) {return;};
    TargetGenerator &operator=(const TargetGenerator &){return *this;};
};

#endif