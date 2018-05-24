#include "clases.h"

ArregloDinamico::ArregloDinamico(int NumElementos, int arreglo[]){
    this->NumElementos=NumElementos;
    this->datos= new int[NumElementos];

    for(int i=0; i<NumElementos; i++){
        datos[i]=arreglo[i];
    }
}
ArregloDinamico::~ArregloDinamico(){
    delete[] datos;
}

ArregloDinamico::ArregloDinamico(ArregloDinamico &o){
    datos= new int[o.NumElementos];
    NumElementos= o.NumElementos;

    for(int i=0; i<NumElementos; i++){
        datos[i]=o.datos[i];
    }
}

void ArregloDinamico::insertarElemento(int elemento){
    this->NumElementos++;
    int *p=new int[NumElementos];
    for(int i=0; i<NumElementos; i++){
        p[i]=datos[i];
    }
    p[NumElementos-1]=elemento;
    delete[] datos;
    datos=p;
}

void ArregloDinamico::mostrarElementos(){
    for(int i=0; i<NumElementos; i++){
        cout<<datos[i];
    }
}

void ArregloDinamico::mostrarPrimos(){
    for(int i=0; i<NumElementos; i++){
        int aux=0;
        for(int j=0; j<datos[i]; j++){
            if(datos[i]%j==0){
                aux++;
            }
        }
        if(aux==2){
            cout<<datos[i]<<",";
        }
    }
}


