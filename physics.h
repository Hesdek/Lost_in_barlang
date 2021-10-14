#ifndef PHYSICS_H
#define PHYSICS_H
#include <math.h>


class physics
{
private:
    float Px; //pos en x
    float Py; //pos en y
    float Vx; //vel en x
    float Vy; //vel en y
    float Ax; //acel en x
    float Ay; //acel en y
    float mass; // masa del elemento
    float R; //radio del elemento
    float Angle; //angulo en el que va el elemento
    float G; //gravedad
    float K; //Resistencia del aire
    float e; //Coeficiente de restitucion
    float V; //vector de velocidad
    float Dt; //delta tiempo
    float ancho;
    float alto;
public:
    physics(float posX_,float posY_,float velX_,float velY_,float masa_,float radio_,float K_,float e_, float ancho_, float alto_);
    ~physics();


    void actualizar_physics();

    float getV() const;
    float getAx() const;
    float getAy() const;
    float getPx() const;
    float getPy() const;
    float getMass() const;
    float getR() const;
    float getVx() const;
    float getVy() const;
    float getE() const;
    void set_vel(float vx, float vy, float px, float py);
    float getAncho() const;
    float getAlto() const;
};

#endif // PHYSICS_H
