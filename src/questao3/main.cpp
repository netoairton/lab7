/**
 * @file	main.cpp
 * @brief	Implementacao do main
 * @author	Airton Neto(netoairton@yahoo.com.br)
 * @since	08/06/2017
 * @date	08/06/2017
 */
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <algorithm>
#include<stack>
using std::stack;

int main(int argc, char *argv[]){
    if(argc< 3){/* Testa se o numero de parametros fornecidos esta correto*/ 
        cout<<"Numero de argumentos errados!"<<endl;
        return 0;
    }
    stack<int> pilha; //Define uma pilha de inteiros, poderia ser de float também
    int tamanho= argc;
    int tmp1, tmp2, resultado;
    for(int i=1; i<tamanho; i++){
        switch (*argv[i]){
            case '/': {
                //Desempilha dois elementos para realizar a operação desejada
                tmp2=pilha.top();
                pilha.pop();
                tmp1=pilha.top();
                pilha.pop();
                resultado=tmp1/tmp2;
                //Insere o resultado na pilha para que novas operações possam ser feitas
                pilha.push(resultado);
                break;
            }
            case 'x': {
                //Desempilha dois elementos para realizar a operação desejada
                tmp2=pilha.top();
                pilha.pop();
                tmp1=pilha.top();
                pilha.pop();
                resultado=tmp1*tmp2;
                //Insere o resultado na pilha para que novas operações possam ser feitas
                pilha.push(resultado);
                break;
            }
            case '-': {
                //Desempilha dois elementos para realizar a operação desejada
                tmp2=pilha.top();
                pilha.pop();
                tmp1=pilha.top();
                pilha.pop();
                resultado=tmp1-tmp2;
                //Insere o resultado na pilha para que novas operações possam ser feitas
                pilha.push(resultado);
                break;
            }
            case '+': {
                //Desempilha dois elementos para realizar a operação desejada
                tmp2=pilha.top();
                pilha.pop();
                tmp1=pilha.top();
                pilha.pop();
                resultado=tmp1+tmp2;
                //Insere o resultado na pilha para que novas operações possam ser feitas
                pilha.push(resultado);
                break;
            }
            default: {
                //Insere os elementos que não são operadores
                pilha.push(atoi(argv[i]));
                break;
            }
        }
        
    }
    cout<<"Resultado final= "<<pilha.top()<<endl;
    pilha.pop();
    return 0;
}