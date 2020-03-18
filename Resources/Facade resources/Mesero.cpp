//
// Created by daniel on 17/3/20.
//
#include <iostream>

using namespace std;

class Mesero{

public:
    void escribirOrden() {
        cout << "Escribiendo orden" << endl;
    }
    void enviarCocina() {
        cout << "Enviar orden a la cocina" << endl;
    }
    void servirCliente() {
        cout << "Cliente servido" << endl;
    }
};