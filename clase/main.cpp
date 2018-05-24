#include <iostream>
#include "clases.h"

using namespace std;

int main()
{
    int lista[4]={1,2,3,4};
    ArregloDinamico arr(4,lista);
    arr.insertarElemento(5);
    arr.mostrarElementos();
    arr.mostrarPrimos();
    return 0;
}
