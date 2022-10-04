#ifndef ITER_H
# define ITER_H

#include <string>
#include <iostream>

template <typename T>
void print_arr(T const &elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void iter(T *arr, int len, void f(T const &elem))
{
    for (int n = 0; n < len; n++)
        f(arr[n]);
}

#endif