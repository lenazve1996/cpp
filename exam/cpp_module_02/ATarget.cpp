#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type)
{
    return;
}

ATarget::ATarget(const ATarget &other)
{
    this->_type = other._type;
}

ATarget &ATarget::operator=(const ATarget &other)
{
    this->_type = other._type;
    return *this;
}

ATarget::~ATarget()
{
    return;
}

std::string const &ATarget::getType() const
{
    return this->_type;
}

void ATarget::getHitBySpell(ASpell const & some_spell) const
{
    std::cout << _type << " has been " << some_spell.getEffects() << "!" << std::endl;
    return;
}