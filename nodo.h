#include "stdlib.h"

template <class T>
struct nodo {
public:
    T dato;
    nodo *izquierdo;
    nodo *derecho;
    
    int a_izquierda;
    int a_derecha;
    
        nodo(char d) { //Constructor
            dato = d;
            izquierdo = derecho = nullptr;
            derecho = nullptr;
            a_izquierda = 0;
            a_derecha = 0;
        }
};