#include <iostream>
using namespace std;

class CapaDoble{
public:
    virtual void crearDisco() = 0;
};

class DVD_CapaDoble : public CapaDoble{
public:
    void crearDisco (){
        cout << " Creando disco DVD de Capa Doble \n";
    }
};

class BluRay_CapaDoble : public CapaDoble {
public:
    void crearDisco (){
        std::cout << " Creando disco BluRay de Capa Doble \n";
    }
};
