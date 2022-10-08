#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
    std::vector<ASpell *>::iterator iter = _spell_book.begin();
    std::vector<ASpell *>::iterator iter2 = _spell_book.end();
    while (iter != iter2)
    {
        delete *iter;
        iter++;
    }
    _spell_book.clear();
    return;
}
void SpellBook::learnSpell(ASpell *some_spell)
{
    if (some_spell)
    {
        std::vector<ASpell *>::iterator iter = _spell_book.begin();
        std::vector<ASpell *>::iterator iter2 = _spell_book.end();
        while (iter != iter2)
        {
            if ((*iter) == some_spell)
                return;
            iter++;
        }
        _spell_book.push_back(some_spell->clone());
    }
}
void SpellBook::forgetSpell(std::string const &spell_name)
{
    std::vector<ASpell *>::iterator iter = _spell_book.begin();
    std::vector<ASpell *>::iterator iter2 =_spell_book.end();
    while (iter != iter2)
    {
        if ((*iter)->getName() == spell_name)
        {
            delete *iter;
            iter = _spell_book.erase(iter);
            break;
        }
        iter++;
    }
}
ASpell* SpellBook::createSpell(std::string const &spell_name)
{
    std::vector<ASpell *>::iterator iter = _spell_book.begin();
    std::vector<ASpell *>::iterator iter2 =_spell_book.end();
    while (iter != iter2)
    {
        if ((*iter)->getName() == spell_name)
        {
            return (*iter);
        }
        iter++;
    }
    return (NULL);
}