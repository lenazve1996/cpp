#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    _type = "Inconspicuous Red-brick Wall";
    return;
}

BrickWall::~BrickWall()
{
    return;
}

BrickWall *BrickWall::clone() const
{
    BrickWall *new_one = new BrickWall();
    return new_one;
}