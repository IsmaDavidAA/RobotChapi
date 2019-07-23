#include <RobotChapi.h>//incluimos la libreria
/*
 * Para este ejemplo utilizamos 6 pines los cuales van en el siguiente orden y con la siguiente funcionalidad:
 * RobotChapi |nombre deseado| = RobotChapi(|motor izquierda adelante|motor izquierda atras|motor derecha adelante|motor derecha atras|enable motor izquierda|enable motor derecha|);
 *    
*/

RobotChapi robot = RobotChapi(2,3,4,5,9,10);

void setup() {
  
}
void loop() {
  /*
   * tenemos como unicos metodos validos los siguientes:
   * 
   * .adelante(|velocidad para el motor izquierdo|,|velocidad para el motor derecho|);
   * .atras(|velocidad para el motor izquierdo|,|velocidad para el motor derecho|);
   * .derecha(|velocidad para el motor izquierdo|,|velocidad para el motor derecho|);
   * .izquierda(|velocidad para el motor izquierdo|,|velocidad para el motor derecho|);
   * .derechaEnCompas(|velocidad para el motor izquierdo|,|velocidad para el motor derecho|);
   * .izquierdaEncompas(|velocidad para el motor izquierdo|,|velocidad para el motor derecho|);
   * .parar();
   * 
   * nota: las velocidades comprenden valores del 0 al 250, teniendo como minimo el 0 y el maximo
   *       el 250
   *
   *
   *
   *EN EL SIGUIENTE EJEMPLO EL ROBOT DARIA UNA VUELTA 
  */
  robot.adelante(200,200);/*ADELANTE por 2 segundos con una velocidad de 200*/ 
  delay(2000);
  robot.derecha(100,100);/*DERECHA por 1 segundo con una velocidad de 100*/ 
  delay(1000);
  robot.adelante(200,200);/*ADELANTE por 2 segundos con una velocidad de 200*/ 
  delay(2000);
  robot.derecha(100,100);/*DERECHA por 1 segundo con una velocidad de 100*/ 
  delay(1000);
  robot.adelante(200,200);/*ADELANTE por 2 segundos con una velocidad de 200*/ 
  delay(2000);
  robot.derecha(100,100);/*DERECHA por 1 segundo con una velocidad de 100*/ 
  delay(1000);
}
