#include "stdlib.h"

template <class T>
struct nodo {
public:

    T dato;
    nodo *izq;
    nodo *der;
    
        nodo(char d) { //Constructor
            dato = d;
            izq = der = nullptr;
                   }
};

