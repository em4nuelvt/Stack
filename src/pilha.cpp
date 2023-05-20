#include "pilha.hpp"

Item::Item(){}

    Item* Item::getProx(){
        return this->prox;
    }
    Item* Item::getAnt(){
        return this->ant;
    }
    void Item::setProx(Item* prox){
        this->prox= prox;
    }
    void Item::setAnt(Item* ant){
        this->ant= ant;
    }

    unsigned int Item::getX(){
        return this->x;
    }
    unsigned int Item::getY(){
        return this->y;
    }
    void Item::setX(unsigned int x){
        this->x=x;
    }
    void Item::setY(unsigned int y){
        this->y=y;
    }

Pilha::Pilha(){
    topo=NULL;
}

    bool Pilha::vazia(){
        return topo==NULL;
    }

    void Pilha::empilhar(unsigned int x, unsigned int y){
        Item* novo= new Item();
        novo->setX(x);
        novo->setY(y);
        if(vazia()){
            topo=novo;
            topo->setAnt(NULL);
            topo->setProx(NULL);
            return;
        }else{
            topo->setProx(novo);
            novo->setAnt(topo);
            topo=novo;
            novo->setProx(NULL);
        }
    }

    void Pilha::desempilhar(){
        if(vazia()){
            cout<<"Pilha vazia, não é possível desempilhar"<<endl;
            return;
        }
        if(topo->getAnt()==NULL){
            delete topo;
            topo=NULL;
        }else{
            topo=topo->getAnt();
            delete topo->getProx();
            topo->setProx(NULL);
        }
    }
    
    Item* Pilha::getTopo(){
        if(vazia()){
            cout<<"Pilha vazia, não é possível retornar o topo"<<endl;
            return NULL;
        }
        return this->topo;
    }
