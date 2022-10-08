#include "Fireball.hpp"

Fireball::Fireball()
{
    _name = "Fireball";
    _effects = "burnt to a crisp";
    return;
}

Fireball::~Fireball()
{
    return;
}

Fireball *Fireball::clone() const
{
    Fireball *new_one = new Fireball();
    return new_one;
}