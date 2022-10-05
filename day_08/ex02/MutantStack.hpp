#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack <T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack() {};
    MutantStack(const MutantStack &other)
    {
        *this = other;
    }
    MutantStack &operator=(const MutantStack &other)
    {
        std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {};
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return std::stack<T>::c.end();
    }
};

#endif