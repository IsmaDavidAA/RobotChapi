#include "RobotChapi.h"
RobotChapi::RobotChapi(uint8_t _motorIzquierdaAdelante, uint8_t _motorIzquierdaAtras, uint8_t _motorDerechaAdelante, uint8_t _motorDerechaAtras){
  motorIzquierdaAdelante=_motorIzquierdaAdelante;
  motorIzquierdaAtras=_motorIzquierdaAtras;
  motorDerechaAdelante=_motorDerechaAdelante;
  motorDerechaAtras=_motorDerechaAtras;

  pinMode(motorIzquierdaAdelante,OUTPUT);
  pinMode(motorIzquierdaAtras,OUTPUT);
  pinMode(motorDerechaAdelante,OUTPUT);
  pinMode(motorDerechaAtras,OUTPUT);
  
  digitalWrite(motorIzquierdaAdelante,LOW);
  digitalWrite(motorIzquierdaAtras,LOW);
  digitalWrite(motorDerechaAdelante,LOW);
  digitalWrite(motorDerechaAtras,LOW);
}

RobotChapi::RobotChapi(uint8_t _motorIzquierdaAdelante, uint8_t _motorIzquierdaAtras, uint8_t _motorDerechaAdelante, uint8_t _motorDerechaAtras, uint8_t _activarMotorIzquierda, uint8_t _activarMotorDerecha){
  motorIzquierdaAdelante=_motorIzquierdaAdelante;
  motorIzquierdaAtras=_motorIzquierdaAtras;
  motorDerechaAdelante=_motorDerechaAdelante;
  motorDerechaAtras=_motorDerechaAtras;
  activarMotorIzquierda=_activarMotorIzquierda;
  activarMotorDerecha=_activarMotorDerecha;
  
  pinMode(motorIzquierdaAdelante,OUTPUT);
  pinMode(motorIzquierdaAtras,OUTPUT);
  pinMode(motorDerechaAdelante,OUTPUT);
  pinMode(motorDerechaAtras,OUTPUT);
  pinMode(activarMotorIzquierda,OUTPUT);
  pinMode(activarMotorDerecha,OUTPUT);
  
  digitalWrite(motorIzquierdaAdelante,LOW);
  digitalWrite(motorIzquierdaAtras,LOW);
  digitalWrite(motorDerechaAdelante,LOW);
  digitalWrite(motorDerechaAtras,LOW);
}

void RobotChapi::adelante(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2){
  analogWrite(activarMotorIzquierda,_motorVelocidad1);
  analogWrite(activarMotorDerecha,_motorVelocidad2);
  digitalWrite(motorIzquierdaAdelante,HIGH);
  digitalWrite(motorIzquierdaAtras,LOW);
  digitalWrite(motorDerechaAdelante,HIGH);
  digitalWrite(motorDerechaAtras,LOW);
}

void RobotChapi::atras(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2){
  analogWrite(activarMotorIzquierda,_motorVelocidad1);
  analogWrite(activarMotorDerecha,_motorVelocidad2);
  digitalWrite(motorIzquierdaAdelante,LOW);
  digitalWrite(motorIzquierdaAtras,HIGH);
  digitalWrite(motorDerechaAdelante,LOW);
  digitalWrite(motorDerechaAtras,HIGH);
}

void RobotChapi::derecha(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2){
  analogWrite(activarMotorIzquierda,_motorVelocidad1);
  analogWrite(activarMotorDerecha,_motorVelocidad2);
  digitalWrite(motorIzquierdaAdelante,HIGH);
  digitalWrite(motorIzquierdaAtras,LOW);
  digitalWrite(motorDerechaAdelante,LOW);
  digitalWrite(motorDerechaAtras,HIGH);
}

void RobotChapi::izquierda(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2){
  analogWrite(activarMotorIzquierda,_motorVelocidad1);
  analogWrite(activarMotorDerecha,_motorVelocidad2);
  digitalWrite(motorIzquierdaAdelante,LOW);
  digitalWrite(motorIzquierdaAtras,HIGH);
  digitalWrite(motorDerechaAdelante,HIGH);
  digitalWrite(motorDerechaAtras,LOW);
}
void RobotChapi::derechaEnCompass(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2){
  analogWrite(activarMotorIzquierda,_motorVelocidad1);
  analogWrite(activarMotorDerecha,_motorVelocidad2);
  digitalWrite(motorIzquierdaAdelante,HIGH);
  digitalWrite(motorIzquierdaAtras,LOW);
  digitalWrite(motorDerechaAdelante,LOW);
  digitalWrite(motorDerechaAtras,HIGH);
}

void RobotChapi::izquierdaEnCompass(uint8_t _motorVelocidad1, uint8_t _motorVelocidad2){
  analogWrite(activarMotorIzquierda,_motorVelocidad1);
  analogWrite(activarMotorDerecha,_motorVelocidad2);
  digitalWrite(motorIzquierdaAdelante,LOW);
  digitalWrite(motorIzquierdaAtras,HIGH);
  digitalWrite(motorDerechaAdelante,HIGH);
  digitalWrite(motorDerechaAtras,LOW);
}
void RobotChapi::parar(){
  analogWrite(activarMotorIzquierda,0);
  analogWrite(activarMotorDerecha,0);
  digitalWrite(motorIzquierdaAdelante,LOW);
  digitalWrite(motorIzquierdaAtras,LOW);
  digitalWrite(motorDerechaAdelante,LOW);
  digitalWrite(motorDerechaAtras,LOW);
}
