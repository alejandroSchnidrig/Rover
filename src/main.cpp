/**
 * UnTref 2024
 * Diseño y Arquitectura de Sistemas de Computación
 *
 * Proyecto: FarmBot
 * Integrantes:
 *  -Balmelli Pérez Mateo 
 *  -Di Leo, Tomás
 *  -Schnidrig Alejandro
 *
 * Docentes:
 *  -Fossati, Jorge
 *  -Moreno Fernández, Joaquín
 */

#include <Arduino.h>
#include "Motor.h"

Motor *motor = new Motor();

//Funciones de control de los motores
void avanzar()
{
    motor->avanzar();
}

void retroceder()
{
    motor->retroceder();
}

void parar()
{
    motor->parar();
}

void setup()
{
    Serial.begin(115200);

    motor->inicializar();
    parar();
}

void loop()
{
    avanzar();
    delay(100);
    parar();
    delay(500);

    parar();

    retroceder();
    delay(100);
    parar();
    delay(500);
}
