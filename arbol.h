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
    return(raiz==nullptr);


}
void insertar(nodo<A> & item, int dato);

private:
    nodo<A> *raiz;
    size_t nodos;
};

//A const& item,
template <class A>
void arbolBin<A>::insertar(nodo<A> & item, int dato)
{
    nodo<A> *nuevo_nodo(dato);
    
    if(raiz == NULL){
        item = nuevo_nodo;
    }
    else{
        int valorRaiz = item->dato;
        if( dato < valorRaiz){
            insertar(item->izq,dato);
        }
        else{
            insertar(item->der,dato);
        }
    }
}
