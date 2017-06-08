#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<set>
using std::set;
#include<vector>
using std::vector;
#include "print1.h"

int main(){
    set<int> numeros;
    //vector<int> teste;
    for(int i=15; i>=0; i--){
        numeros.insert(i);
    }
    numeros.insert(3);
    numeros.insert(77);
    numeros.insert(99);
    numeros.insert(1);

    /*for(int i=15; i>=0; i--){
        teste.push_back(i);
    }*/

    print_elements(numeros, "Set: ");
    print_elements(numeros, "CSV Set: ", ';');
    //print_elements(teste, "CSV Set:", ';');
    return 0;    
}