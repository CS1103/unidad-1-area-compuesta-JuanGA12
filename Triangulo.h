//
// Created by Juan Galvez on 2019-08-21.
//

#ifndef TAREA_MARTES_20_TRIANGULO_H
#define TAREA_MARTES_20_TRIANGULO_H

#include "iostream"

#include "Figura.h"

class Triangulo: public Figura {


protected:
    float base;
    float altura;

public:
    Triangulo()= default;
    Triangulo(float x, float y, int verdad, float base, float altura);
    virtual ~Triangulo(){
        std::cout <<"Destruido Triangulo"<<std::endl;
    };

    float area() override ;

    void setbase( float _base){base = _base;}
    void setaltura( float _altura){altura = _altura;}

    float getbase(){return base;}
    float getaltura(){return altura;}
};


#endif //TAREA_MARTES_20_TRIANGULO_H
