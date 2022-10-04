#ifndef ARRAY_H
# define ARRAY_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_VAL 750

template <typename T>
class Array
{
public:
    Array<T>()
    {
        _arr = NULL;
        _size = 0;
    }

    Array<T>(unsigned int n)
    {
        _arr = new T[n];
        _size = n;
    }

    Array<T>(const Array<T> &other)
    {
        _arr = new T[other._size];
        for (unsigned int n = 0; n < other._size; n++)
        {
            _arr[n] = other._arr[n];
        }
        _size = other._size;
    }

    Array<T> &operator=(const Array<T> &other)
    {
        if (_arr != NULL)
            delete [] _arr;
        _arr = new T[other._size];
        for (unsigned int n = 0; n < other._size; n++)
        {
            _arr[n] = other._arr[n];
        }
        _size = other._size;
    }

    unsigned int size()
    {
        return this->_size;
    }

    T &operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return _arr[index];
    }

    ~Array<T>()
    {
        if (_arr != NULL)
            delete [] _arr;
    }
private:
    T *_arr;
    unsigned int _size;

};

#endif