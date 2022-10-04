#ifndef CONVERTION_H
# define CONVERTION_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h> 
#include <cctype>
#include <cmath>

void    checkInt(char *s);
void    checkChar(std::string str);
void    checkFloat(char *str);
void    checkDouble(char *str);

void    displayChar(long int symbol);
void    displayInt(long int numb);
void    displayFloat(float numb);
void    displayDouble(double numb);

void    impossibleConvertion();


#endif