#ifndef PRINT_H
#define PRINT_H

#include<set>
using std::set;
#include<algorithm>
template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' ');

#endif