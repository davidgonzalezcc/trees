#include "nodo.h"
#include <iostream>

using namespace std;

template <class A>
struct arbolBin{
public:
    arbolBin()  {
        raiz = nullptr;
        nodos = 0; }
int estaVacio(){
    return(raiz==nullptr);}

void insertar(nodo<A> *& item, int dato);
void insertarinit(int dato);

    nodo<A> *raiz;
    size_t nodos;
};


template <class A>
void arbolBin<A>::insertar(nodo<A> *& raiz, int dato)
{
    nodo<A> *nuevo_nodo = new nodo<A>(dato);
    
    if(estaVacio()){
        raiz = nuevo_nodo;
        ++nodos;
        return;
    }
    else
    {
        int valorRaiz = raiz->dato;
        if( dato < valorRaiz){
            insertar(raiz->izq,dato);
        }
        else{
            insertar(raiz->der,dato);
        }
    }
    nodos++;
}

template <class A>
void arbolBin<A>::insertarinit(int dato){
    insertar(raiz,dato);

}
