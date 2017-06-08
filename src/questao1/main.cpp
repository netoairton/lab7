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
    for(int i=0; i<50; i=i+7){
        cout<<i<<endl;
        elementos.push_back(i);
    }
    auto result = closest2mean(elementos.begin(), elementos.end());
    cout << endl
         << "O elemento mais proximo da media e: " << (*result) << endl;



    return 0;
}