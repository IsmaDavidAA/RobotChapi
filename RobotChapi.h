
#ifndef ROBOT_CHAPI_H
#define ROBOT_CHAPI_H
#include <Arduino.h>
#include <RobotChapi.h>
class RobotChapi
{
  public:
    RobotChapi(uint8_t _motorIzquierdaAdelante, uint8_t _motorIzquierdaAtras, uint8_t _motorDerechaAdelante, uint8_t _motorDerechaAtras);
    RobotChapi(uint8_t _motorIzquierdaAdelante, uint8_t _motorIzquierdaAtras, uint8_t _motorDerechaAdelante, uint8_t _motorDerechaAtras, uint8_t _activarMotorIzquierda, uint8_t _activarMotorDerecha);
    void adelante(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2);
    void atras(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2);
    void derecha(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2);
    void izquierda(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2);
    void derechaEnCompass(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2);
    void izquierdaEnCompass(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2);
    void parar();
  private:
    uint8_t motorIzquierdaAdelante,motorIzquierdaAtras,motorDerechaAdelante,motorDerechaAtras, activarMotorIzquierda, activarMotorDerecha;
};
#endif
