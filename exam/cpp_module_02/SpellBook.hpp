#ifndef SPELLBOOK_H
# define SPELLBOOK_H

#include <string>
#include <iostream>
#include <vector>

#include "ASpell.hpp"
// #include "ATarget.hpp"

class ASpell;
class Atarget;

class SpellBook {

public:
    SpellBook() {return;};
    ~SpellBook();
    void learnSpell(ASpell *some_spell);
    void forgetSpell(std::string const &spell_name);
    ASpell* createSpell(std::string const &spell_name);

private:
    std::vector<ASpell *> _spell_book;
    SpellBook(const SpellBook &) {return;};
    SpellBook &operator=(const SpellBook &){return *this;};
};

#endif