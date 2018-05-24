#ifndef CLASES_H
#define CLASES_H
#include <iostream>
using namespace std;

class ArregloDinamico
{
    private:
        int NumElementos;
        int *datos;
    public:
        ArregloDinamico(int n, int arr[]);
        ~ArregloDinamico();
        ArregloDinamico(ArregloDinamico &o);
        void insertarElemento(int);
        void mostrarElementos();
        void mostrarPrimos();
};

#endif // CLASES_H
