#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
#include <vector>
#include "isprime.h"

int main(int argc, char *argv[]){
    if(argc!= 2){/* Testa se o numero de parametros fornecidos esta correto*/ 
        cout<<"Numero de argumentos errados!"<<endl;
        return 0;
    }
    std::vector<int> myvector;
    int N= atoi(argv[1]); //Numero a ser buscado
    for(int i=0; i<=N; i++){
        myvector.push_back(i);
    }
    cout<<endl;
    //Utilizando o find_if, o programa imprime um endereço no final

    /*std::vector<int>::iterator it= std::find_if (myvector.begin(), myvector.end(), isprime);
    std::cout<<"*it="<<*it<<endl;

    for(int i=1; it!=myvector.end(); i++){
        cout<<"i="<<i<<" ";
        if(it+1 > myvector.end()){
            cout<<"parou"<<endl;
            return 0;
        }
        else{
            it=std::find_if (it+1, myvector.end(), isprime);
            std::cout<<"*it="<<*it<<endl;
        }
    }*/
    cout<<"Numeros primos [1-"<<N<<"]: ";
    std::for_each(myvector.begin(), myvector.end(), isprimo);
   
    return 0;
}