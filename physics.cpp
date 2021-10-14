#include "physics.h"

physics::physics(float posX_, float posY_, float velX_, float velY_, float masa_, float radio_, float K_, float e_, float ancho_, float alto_)
{
    Px = posX_; //pos en x
    Py = posY_; //pos en y
    mass = masa_; // masa del elemento
    R = radio_; //radio del elemento
    Vx = velX_; //vel en x
    Vy = velY_; //vel en y
    Ax = 0; //acel en x
    Ay = 0; //acel en y
    G = 9.81; //gravedad
    K = K_; //Resistencia del aire
    e = e_; //Coeficiente de restitucion
    V = 0; //vector de velocidad
    Dt = 0.1; //delta tiempo
    ancho = ancho_;
    alto = alto_;
}


physics::~physics()
{

}

void physics::actualizar_physics()
{
    V = pow(((Vx*Vx)+(Vy*Vy)),(1/2));
    Angle = atan2(Vy,Vx);
    Ax = -((K*(V*V)*(R*R))/mass)*cos(Angle);
    Ay = (-((K*(V*V)*(R*R))/mass)*sin(Angle))-G;
    Px = Px + ((Vx*(Dt)))+(((Ax*(Dt*Dt)))/2);
    Py = Py + ((Vy*(Dt)))+(((Ay*(Dt*Dt)))/2);
    Vx = Vx + Ax*Dt;
    Vy = Vy + Ay*Dt;
}
float physics::getV() const
{
    return V;
}

float physics::getAx() const
{
    return Ax;
}

float physics::getAy() const
{
    return Ay;
}

float physics::getPx() const
{
    return Px;
}

float physics::getPy() const
{
    return Py;
}

float physics::getMass() const
{
    return mass;
}

float physics::getR() const
{
    return R;
}

float physics::getVx() const
{
    return Vx;
}

float physics::getVy() const
{
    return Vy;
}

float physics::getE() const
{
    return e;
}

void physics::set_vel(float vx, float vy, float px, float py)
{
    Vx = vx;
    Vy = vy;
    Px = px;
    Py = py;
}

float physics::getAncho() const
{
    return ancho;
}

float physics::getAlto() const
{
    return alto;
}
