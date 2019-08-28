//
// Created by Juan Galvez on 2019-08-21.
//

#include "Circulo.h"

Circulo::Circulo(float x, float y,int verdad, float radio):Figura(x, y,verdad) {
    this->radio;
}

float Circulo::area() {

    if ( verdad == 1){
        return (3.1416*radio*radio);
    }
    else
        return (-3.1416*radio*radio);
}