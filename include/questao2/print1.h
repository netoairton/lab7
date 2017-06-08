#include<set>
using std::set;
#include<vector>
using std::vector;
#include<iostream>
using std::cout;
using std::endl;
#include<algorithm>
//#include "print.h"

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){
    typename TContainer::const_iterator it;
    cout<<label;
    for(it = collection.begin(); it!=collection.end(); ++it){
        cout<<*it<<separator;
    }
    cout<<endl;
}