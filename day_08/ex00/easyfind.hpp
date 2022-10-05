#ifndef EASYFIND_H
# define EASYFIND_H

#include <array>
#include <list>
#include <algorithm>
#include <iostream>

class ElemNotFound : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return("Element was not found");
        }
};

template <typename T>
typename T::const_iterator easyfind(T container, int elemToFind)
{
    typename T::const_iterator iter_begin = container.begin();
    typename T::const_iterator iter_end = container.end();
    typename T::const_iterator founded = std::find(iter_begin, iter_end, elemToFind);
    if (founded == iter_end)
        throw ElemNotFound();
    else
        return founded ;
}

#endif
