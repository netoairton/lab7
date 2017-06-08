/*#ifndef FUNCOES_H
#define FUNCOES_H*/

#include<set>
using std::set;
#include<vector>
using std::vector;
#include<iostream>
using std::cout;
using std::endl;
#include<algorithm>
#include<cmath>

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
    
    InputIterator jj;
    InputIterator it; //iterador do mesmo tipo
    
    float media=0, dif=0, divisor=0; //tmp=0;
    for(it = first; it!=last; ++it){
        media=media+ *it; //Somo todos so valores do vetor
    }
    divisor= last - first; //Divisor será a diferença de posição entre o final e o inicial
    if(divisor==0){
        return first;
    }

    media= media/divisor; //media agora é a soma/divisor

    dif= *first - media; //Diferença inicial
    dif=fabs (dif); //Valor absoluto 
    jj= first;

    for(it = first++; it!=last; ++it){
        if(fabs(*it - media) < dif){
            dif= fabs(*it - media);
            jj=it;
        }
    }
    return jj;
}

//#endif