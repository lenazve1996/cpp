#ifndef BRICKWALL_H
# define BRICKWALL_H

#include "ATarget.hpp"

class BrickWall : public ATarget {

public:
    BrickWall();
    ~BrickWall();
    BrickWall *clone() const;
};

#endif