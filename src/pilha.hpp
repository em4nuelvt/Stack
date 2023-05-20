#ifndef PILHA_HPP
#define PILHA_HPP

#include <iostream>
using namespace std;

class Item{
    private: 
        unsigned int x;
        unsigned int y;
        Item* prox;
        Item* ant;
    public:
        Item();

        unsigned int getX();
        unsigned int getY();
        Item* getProx();
        Item* getAnt();

        void setX(unsigned int x);
        void setY(unsigned int y);
        void setProx(Item* prox); 
        void setAnt(Item* ant);

};

class Pilha{
    private:
        Item* topo;
    public:
        Pilha();
        bool vazia();
        void empilhar(unsigned int x, unsigned int y);
        void desempilhar();
        Item* getTopo();



};

#endif