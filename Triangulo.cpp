//
// Created by Juan Galvez on 2019-08-21.
//

#include "Triangulo.h"

Triangulo::Triangulo(float x, float y, int verdad, float base, float altura):Figura(x, y, verdad) {
    this->base;
    this->altura;

}

float Triangulo::area() {
    if (verdad == 1){
        return ((base*altura)/2);
    }
    else
        return (-(base*altura)/2);
}