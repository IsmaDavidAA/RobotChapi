#ifndef ROBOT_CHAPI_H
#define ROBOT_CHAPI_H
#include <Arduino.h>
#include <RobotChapi.h>
class RobotChapi
{
  public:
    RobotChapi(uint8_t _motorIzquierdaAdelante, uint8_t _motorIzquierdaAtras, uint8_t _motorDerechaAdelante, uint8_t _motorDerechaAtras);
    RobotChapi(uint8_t _motorIzquierdaAdelante, uint8_t _motorIzquierdaAtras, uint8_t _motorDerechaAdelante, uint8_t _motorDerechaAtras, uint8_t _activarMotorIzquierda, uint8_t _activarMotorDerecha, uint8_t _motorVelocidad);
    void adelante(uint8_t _motorVelocidad);
    void atras(uint8_t _motorVelocidad);
    void derecha(uint8_t _motorVelocidad);
    void izquierda(uint8_t _motorVelocidad);
    void derechaEnCompass(uint8_t _motorVelocidad);
    void izquierdaEnCompass(uint8_t _motorVelocidad);
    void parar();
  private:
    uint8_t motorIzquierdaAdelante,motorIzquierdaAtras,motorDerechaAdelante,motorDerechaAtras, activarMotorIzquierda, activarMotorDerecha, motorVelocidad;
};
#endif
