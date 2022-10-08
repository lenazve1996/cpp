#ifndef WARLOCK_H
# define WARLOCK_H

#include <string>
#include <iostream>

class Warlock {

public:
    Warlock(std::string name, std::string title);
    ~Warlock();
    void introduce() const;
    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string title);

private:
    std::string _name;
    std::string _title;
    Warlock() {return;};
    Warlock(const Warlock &) {return;};
    Warlock &operator=(const Warlock &){return *this;};
};

#endif