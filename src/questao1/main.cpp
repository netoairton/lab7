/**
 * @file	main.cpp
 * @brief	Implementacao do main
 * @author	Airton Neto(netoairton@yahoo.com.br)
 * @since	08/06/2017
 * @date	08/06/2017
 * @sa		funcoes.h
 */
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<set>
using std::set;
#include<vector>
using std::vector;
#include "include/questao1/funcoes.h"

int main(){
    vector<int> elementos;
    //Insere os elementos no vetor
    for(int i=0; i<50; i=i+7){
        elementos.push_back(i);
    }
    //Atribui o iterador do elemento mais proximo à media a result
    auto result = closest2mean(elementos.begin(), elementos.end());
    cout << endl
         << "O elemento mais proximo da media e: " << (*result) << endl;



    return 0;
}