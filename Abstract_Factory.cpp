//
// Created by Esteban on 17/3/2020.
//

#include <iostream>
#include "Resources/Abstract-Factory resources/CapaSimple.cpp"
#include "Resources/Abstract-Factory resources/CapaDoble.cpp"
using namespace std;

class AbstractFactory{
public:
    virtual CapaSimple* createSimple () = 0;
    virtual CapaDoble* createDoble () = 0;
};
class DVDFactory : public AbstractFactory{
public:
    CapaSimple* createSimple (){
        return new DVD_CapaSimple;
    }
    CapaDoble* createDoble (){
        return new DVD_CapaDoble;
    }
};
class BluRayFactory : public AbstractFactory{
public:
    CapaSimple* createSimple (){
        return new BluRay_CapaSimple;
    }
    CapaDoble* createDoble (){
        return new BluRay_CapaDoble;
    }
};


int main(){
    AbstractFactory* abstractFactory;
    CapaSimple *simple;
    CapaDoble *doble;

    abstractFactory = new DVDFactory;
    simple = abstractFactory->createSimple();
    simple->crearDisco();
    doble = abstractFactory->createDoble();
    doble->crearDisco();

    abstractFactory = new BluRayFactory;
    simple = abstractFactory->createSimple();
    simple->crearDisco();
    doble = abstractFactory->createDoble();
    doble->crearDisco();

    return 0;
}
