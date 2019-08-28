//
// Created by Juan Galvez on 2019-08-21.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo(float x, float y, int verdad, float base, float altura):Triangulo(x, y, verdad, base, altura ){

}

float Rectangulo::area() {

    if (verdad == 1) {
        return (base*altura);
    }
    else
        return (-(base*altura));
}