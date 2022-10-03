#ifndef CONVERTION_H
# define CONVERTION_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h> 
#include <cctype>
#include <cmath>

bool    isInt(std::string str);
float   isFloat(char *str);
float   isDouble(char *str);
void    printDouble(char *str);
void    printInt(std::string str);
void    printFloat(char *str);
int     findPrecision(char *s);
void    displayChar(char symbol);
void    displayFloat(float numb, int prec);
void    impossibleConvertion();

#endif