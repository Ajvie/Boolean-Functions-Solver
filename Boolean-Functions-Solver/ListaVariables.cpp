#include <iostream>
#include "ListaVariables.h"
#include <string.h>
using namespace std;

void ListaVariables :: agregarVariable(string v, bool vv) {
    NodoVariables *temp = cabeza;
    NodoVariables *nuevo = new NodoVariables(v, vv);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

bool ListaVariables :: getValorVerdad(string v) {
    bool valor;
    NodoVariables *temp = cabeza;
    while(temp != nullptr) {
        if(temp -> getVariable().find(v) != string :: npos)
            valor = temp -> getValorVerdad();
        temp = temp -> getSiguiente();
    }
    return valor;
}
