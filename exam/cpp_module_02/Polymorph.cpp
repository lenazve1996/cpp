#include "Polymorph.hpp"

Polymorph::Polymorph()
{
    _name = "Polymorph";
    _effects = "turned into a critter";
    return;
}

Polymorph::~Polymorph()
{
    return;
}

Polymorph *Polymorph::clone() const
{
    Polymorph *new_one = new Polymorph();
    return new_one;
}