#include <iostream>
#include "ListaMinterminos.h"
using namespace std;

void ListaMinterminos :: agregarMintermino(Mintermino *m) {
    NodoMinterminos *temp = cabeza;
    NodoMinterminos *nuevo = new NodoMinterminos(m);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

int ListaMinterminos :: longitud() {
    int cont = 0;
    NodoMinterminos *temp = cabeza;
    while(temp != nullptr) {
        cont++;
        temp = temp -> getSiguiente();
    }
    return cont;
}

NodoMinterminos* ListaMinterminos :: getMinterminoNodo(string s) {
    NodoMinterminos *temp = cabeza;
    while(temp -> getSiguiente() != nullptr && temp -> getMintermino() -> getFormula().find(s) == string :: npos) {
        temp = temp -> getSiguiente();
    }
    return temp;
}
