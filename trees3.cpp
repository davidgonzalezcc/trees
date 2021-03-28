#include <iostream>
#include "arbol.h"
using namespace std;

int main()
{

struct arbolBin <int> nuevo;
nuevo.insertar(5);
nuevo.insertar(10);
nuevo.insertar(15);
nuevo.insertar(2);
nuevo.insertar(3);
nuevo.insertar(4);


nuevo.recorrerPre();
nuevo.buscar(5);
return 0;


}