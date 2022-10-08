#ifndef WARLOCK_H
# define WARLOCK_H

#include <string>
#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class Atarget;
class SpellBook;

class Warlock {

public:
    Warlock(std::string name, std::string title);
    ~Warlock();
    void introduce() const;
    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string title);
    void learnSpell(ASpell *some_spell);
    void forgetSpell(std::string const &spell_name);
    void launchSpell(std::string const &spell_name, const ATarget &some_target);

private:
    std::string _name;
    std::string _title;
    SpellBook _spell_book;
    std::vector <ASpell *> _known_spells;
    Warlock() {return;};
    Warlock(const Warlock &) {return;};
    Warlock &operator=(const Warlock &){return *this;};
    
};

#endif