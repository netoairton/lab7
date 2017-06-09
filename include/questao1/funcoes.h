/**
 * @file	funcoes.h
 * @brief	Implementacao da funcao que calcula a media do container e retorna o mais proximo
 * @author	Airton Neto(netoairton@yahoo.com.br)
 * @since	08/06/2017
 * @date	08/06/2017
 */
#include<set>
using std::set;
#include<vector>
using std::vector;
#include<iostream>
using std::cout;
using std::endl;
#include<algorithm>
#include<cmath>

/**
 * @brief Funcao que calcula a media do vetor e calcula o valor mais proximo da media
 * @param Iterador ao primeiro elemento do container
 * @param Iterador ao ultimo elemento do container
 * @return Iterador para o valor mais proximo a media
 */
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