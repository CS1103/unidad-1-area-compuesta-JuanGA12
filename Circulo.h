//
// Created by Juan Galvez on 2019-08-21.
//

#ifndef TAREA_MARTES_20_CIRCULO_H
#define TAREA_MARTES_20_CIRCULO_H


#include "Figura.h"
#include <iostream>

using namespace std;
class Circulo: public Figura {

private:
    float radio;

public:
    Circulo(){};
    Circulo(float x, float y, int verdad, float radio);
    virtual~Circulo(){
        cout <<"Destruido Circulo"<<endl;
    };

    float area() override ;

    void setradio(float _radio){radio = _radio;}
    float getradio(){ return  radio;}
};


#endif //TAREA_MARTES_20_CIRCULO_H
