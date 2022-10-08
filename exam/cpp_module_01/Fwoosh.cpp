#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    _name = "Fwoosh";
    _effects = "fwooshed";
    return;
}

Fwoosh::~Fwoosh()
{
    return;
}

Fwoosh *Fwoosh::clone() const
{
    Fwoosh *new_one = new Fwoosh();
    return new_one;
}