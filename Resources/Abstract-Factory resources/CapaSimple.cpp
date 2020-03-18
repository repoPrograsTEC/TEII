#include <iostream>
using namespace std;

class CapaSimple{
public:
    virtual void crearDisco() = 0;
};

class DVD_CapaSimple : public CapaSimple{
public:
    void crearDisco (){
        cout << " Creando disco DVD de Capa Simple \n";
    }
};

class BluRay_CapaSimple : public CapaSimple{
public:
    void crearDisco (){
        std::cout << " Creando disco BluRay de Capa Simple \n";
    }
};
