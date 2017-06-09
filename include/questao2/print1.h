/**
 * @file	print1.h
 * @brief	Implementacao da funcao que imprime os elementos do container, os separadores e o label 
 * @author	Airton Neto(netoairton@yahoo.com.br)
 * @since	07/06/2017
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

/**
 * @brief Funcao de impressao baseada nos parametros
 * @param Container
 * @param Label inicial
 * @param Separadores dos elementos
 */
template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){
    typename TContainer::const_iterator it;
    cout<<label;
    for(it = collection.begin(); it!=collection.end(); ++it){
        cout<<*it<<separator;
    }
    cout<<endl;
}