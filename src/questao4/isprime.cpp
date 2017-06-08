#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include "include/questao4/isprime.h"

bool isprime(int k){
    int div=0;
    if(k==0 || k==1){
        return false;
    }
    for(int i=1; i<=k; i++){
        //cout<<k<<"%"<<i<<endl;
        if(k%i ==0){
            div++;
        }
    }

    return (div==2);
}
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