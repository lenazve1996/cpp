#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
    return;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
    return;
}

std::string const &Warlock::getName() const
{
    return this->_name;
}
std::string const &Warlock::getTitle() const
{
    return this->_title;
}
void Warlock::setTitle(std::string title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
    return;
}

void Warlock::learnSpell(ASpell *some_spell)
{
    // if (some_spell)
    // {
    //     std::vector<ASpell *>::iterator iter = _known_spells.begin();
    //     std::vector<ASpell *>::iterator iter2 = _known_spells.end();
    //     while (iter != iter2)
    //     {
    //         if ((*iter) == some_spell)
    //             return;
    //     }
    //     _known_spells.push_back(some_spell->clone());
    // }
    _spell_book.learnSpell(some_spell);
}

void Warlock::forgetSpell(std::string const &spell_name)
{
    // std::vector<ASpell *>::iterator iter = _known_spells.begin();
    // std::vector<ASpell *>::iterator iter2 = _known_spells.end();
    // while (iter != iter2)
    // {
    //     if ((*iter)->getName() == spell_name)
    //     {
    //         delete *iter;
    //         iter = _known_spells.erase(iter);
    //         break;
    //     }
    //     iter++;
    // }
    _spell_book.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string const &spell_name, const ATarget &some_target)
{
    // std::string cur_effect;
    // std::vector<ASpell *>::iterator iter = _known_spells.begin();
    // std::vector<ASpell *>::iterator iter2 = _known_spells.end();
    // while (iter != iter2)
    // {
    //     if ((*iter)->getName() == spell_name)
    //     {
    //         createSpell
    //         (*iter)->launch(some_target);
    //         break;
    //     }
    //     iter++;
    // }
    ATarget const *tmp_target = 0;
    if (tmp_target == &some_target)
        return;
    ASpell *tmp = _spell_book.createSpell(spell_name);
    if (tmp)
        tmp->launch(some_target);
}