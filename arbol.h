#include "nodo.h"
#include <iostream>

using namespace std;

template <class A>
struct arbolBin{
public:
    arbolBin()  {
        raiz = nullptr;
        nodos = 0; 
    }
int estaVacio(){
    return(raiz==nullptr);
}

void insertar(A const&)ho9-;
//nodo<A>* buscar(const A&);
void recorrerPre();
void preorden(nodo<A> *);
void ordenar_izquierda(nodo<A> *&nodo );
size_t tamano() const;
bool busqueda(nodo<A> *arbol, int n);
void buscar(int n);


private:
    nodo<A> *raiz;
    size_t nodos;
};

template <class A>
void arbolBin<A>::insertar(A const& item)
{
    nodo<A> *nodoNuevo = new nodo<A>(item);
    nodo<A> *padre = nullptr;
    if(estaVacio())
    {
    raiz = nodoNuevo;
    ++nodos;
    return;
    }

    nodo<A>* enUso = raiz; //asigna la raiz actual como enUso
    while(enUso) {
    padre = enUso;

    if(nodoNuevo ->dato > enUso->dato){
        enUso = enUso->derecho;
        padre->a_derecha+=1;
    }
    else{
        enUso = enUso->izquierdo;
        padre->a_izquierda+=1;
    }

    if((padre->a_derecha - padre->a_izquierda)==2 && padre->izquierdo->a_izquierda == 2){
        ordenar_izquierda(padre->izquierdo);
    }
    //enUso = nodoNuevo->dato > enUso->dato ? enUso->derecho : enUso->izquierdo;
    }


    if(nodoNuevo->dato < padre->dato){
    padre->izquierdo = nodoNuevo;
    }
    else{
    padre->derecho = nodoNuevo;
    }
    
    ++nodos;
}

template<class A>
void arbolBin<A>::preorden(nodo<A>* nodo)
{
    if(nodo != nullptr)
    {
    cout << " - " << nodo->a_izquierda<<" "<<nodo->dato <<" "<<nodo->a_derecha<< " - ";
    }
    if(nodo->izquierdo){
    cout<<"izq";
    preorden(nodo->izquierdo);
    }
    if(nodo->derecho){
    cout<<"der";
    preorden(nodo->derecho);
    }
}

template <class A>
void arbolBin<A>::ordenar_izquierda(nodo<A> *&nodo ){
    /*nodo<A> *auxiliar;
    auxiliar = nodo;
    nodo = nodo->izquierdo;
    nodo->izquierdo = auxiliar;*/
}


template<class A>
void arbolBin<A>::recorrerPre()
{
preorden(raiz);
}

template <class A>
bool arbolBin<A>::busqueda(nodo<A> *arbol, int n){
    if(arbol == NULL){
        return false;
    }
    else if(arbol->dato == n){
        return true;
    }
    else if(n<arbol->dato){
        return busqueda(arbol->izquierdo,n);
    }
    else{
        return busqueda(arbol->derecho,n);
    }
}

template<class A>
void arbolBin<A>::buscar(int n){
    busqueda(raiz,n);
}