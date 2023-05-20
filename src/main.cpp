#include "pilha.hpp"

int main(){
/*  A PILHA IMPLEMENTADA TEM FUNÇÕES DE EMPILHAR E DESEMPILHAR
    - EMPILHA 2 INTEIROS SEM SINAL PASSADOS COMO PARAMETRO 
    PARA A FUNÇÃO empilhar QUE CRIA UM NOVO NÓ NA PILHA
    - DESEMPILHA  O ULTIMO NÓ DA PILHA COM A CHAMADA DA
    FUNÇÃO desempilhar */

    Pilha p;
    p.empilhar(0,0);
    p.empilhar(1,0);
    p.empilhar(2,0);
    p.desempilhar();

    if(!p.vazia()){
        int x= p.getTopo()->getX();
        cout<<x<<endl;
    }
    return 0;

}