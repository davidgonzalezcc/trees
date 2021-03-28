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
    nodo<A> *padre = nullptr;
    if(estaVacio()){
        raiz = nuevo_nodo;
        ++nodos;
        return;
    }

    nodo<A> *enUso = raiz;
    while(enUso){
        padre = enUso;
        enUso = nuevo_nodo->dato > enUso->dato ? enUso->der : enUso->izq;
    }

    if(nuevo_nodo->dato < padre->dato)
    padre->izq = nuevo_nodo;
    else
    padre->der = nuevo_nodo;
    
    
    
    ++nodos;
}

template <class A>
void arbolBin<A>::insertarinit(int dato){
    insertar(raiz,dato);

}
