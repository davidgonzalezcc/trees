#include <iostream>
#include "arbol.h"

using namespace std;

struct arbolBin<int> arbol;

void menu();

int main()
{
menu();

return 0;
}

void menu(){
    int dato, opcion;

    do
    {
        cout<<"\t Menu: \n";
        cout<<"1. Insertar nuevo nodo\n";
        cin>>opcion;
        switch(opcion){
            case 1: cout<<"Digite un número: ";
                    cin>>dato;
                    arbol.insertarinit(dato);
                    cout<<"\n";
                    break;        
        }  
    }
    while(opcion != 2);
}