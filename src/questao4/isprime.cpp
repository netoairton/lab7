/**
 * @file	isprime.cpp
 * @brief	Implementacao das funcoes que verificam se um numero é primo
 * @author	Airton Neto(netoairton@yahoo.com.br)
 * @since	07/05/2017
 * @date	07/05/2017
 * @sa		isprime.h
 */
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include "include/questao4/isprime.h"

/**
 * @brief Funcao que retorna se o valor do iterador é primo ou não
 * @param Inteiro apontado pelo iterador
 */
bool isprime(int k){
    int div=0;
    if(k==0 || k==1){
        return false;
    }
    for(int i=1; i<=k; i++){
        if(k%i ==0){
            div++;
        }
    }

    return (div==2);
}

/**
 * @brief Funcao que imprime o valor se ele for primo
 * @param Inteiro apontado pelo iterador
 */
void isprimo(int k){
    int div=0;
    //Pelo conteúdo visto em FMC 1, 0 e 1 não podem ser definidos como primos
    if(k==0 || k==1){
        return;
    }
    for(int i=1; i<=k; i++){
        if(k%i ==0){
            div++;
        }
    }
    if(div==2){
        cout<<k<<" ";
    }
}