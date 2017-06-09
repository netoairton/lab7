/**
 * @file	main.cpp
 * @brief	Implementacao do main
 * @author	Airton Neto(netoairton@yahoo.com.br)
 * @since	07/06/2017
 * @date	08/06/2017
 * @sa		print1.h
 */
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<set>
using std::set;
#include<vector>
using std::vector;
#include "include/questao2/print1.h"

int main(){
    set<int> numeros;
    vector<int> teste;
    //Insere elementos decrescentemente para o set ordenar
    for(int i=15; i>=0; i--){
        numeros.insert(i);
    }
    //Insere mais outros elementos
    numeros.insert(3);
    numeros.insert(77);
    numeros.insert(99);
    numeros.insert(1);

    //Insere elementos no vector
    for(int i=15; i>=0; i--){
        teste.push_back(i);
    }
    //Chama as funcoes de impressão
    print_elements(numeros, "Set: ");
    print_elements(numeros, "CSV Set: ", ';');
    print_elements(teste, "CSV Vector:", ';');
    return 0;    
}