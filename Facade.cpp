//
// Created by daniel on 17/3/20.
//

#include "Subsistema/Mesero.cpp"
#include "Subsistema/Cocina.cpp"

class Facade{
private:
    Mesero mesero;
    Cocina cocina;

public:
    void ordenarComida(){
        std::cout << "Facade llama a los subsistemas" << std::endl;
        mesero.escribirOrden();
        mesero.enviarCocina();
        cocina.prepararComida();
        cocina.llamarCamarero();
        mesero.servirCliente();
        cocina.lavarPlatos();
    }
};