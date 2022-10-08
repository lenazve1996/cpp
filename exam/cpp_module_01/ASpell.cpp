#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effect) : _name(name), _effects(effect)
{
    return;
}

ASpell::ASpell(const ASpell &other)
{
    this->_name = other._name;
    this->_effects = other._effects;
}

ASpell &ASpell::operator=(const ASpell &other)
{
    this->_name = other._name;
    this->_effects = other._effects;
    return *this;
}

ASpell::~ASpell()
{
    return;
}

std::string const &ASpell::getName() const
{
    return this->_name;
}

std::string const &ASpell::getEffects() const
{
    return this->_effects;
}

void ASpell::launch(ATarget const & some_target) const
{
    some_target.getHitBySpell(*this);
}
