#include "Dummy.hpp"

Dummy::Dummy()
{
    _type = "Target Practice Dummy";
    return;
}

Dummy::~Dummy()
{
    return;
}

Dummy *Dummy::clone() const
{
    Dummy *new_one = new Dummy();
    return new_one;
}