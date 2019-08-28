//
// Created by Juan Galvez on 2019-08-21.
//

#ifndef TAREA_MARTES_20_FIGURA_H
#define TAREA_MARTES_20_FIGURA_H


class Figura {
protected:
    float x,y;
    int verdad;//para validar si la figura es hueca o no.
public:
    Figura(){};
    Figura(float x, float y, int verdad);
    virtual ~Figura(){};

    virtual float area() = 0;
    float area_por_x();
    float area_por_y();

    void setx( float _x){ x = _x;}
    void sety( float _y){ y = _y;}
    void setverdad( int _verdad){ verdad = _verdad;}

    float getx(){return x;}
    float gety(){return y;}
    int getverdad(){return verdad;}
};


#endif //TAREA_MARTES_20_FIGURA_H
