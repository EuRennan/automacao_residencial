/*
    Projeto Stick Lite V3, irá enviar e receber os sinais
    dos sensores e atuadores via LoRaWAN
    Pinagem:
            
*/
#include "Sensor.h"
#include "Atuador.h"

Atuador led(35);
Sensor sensor_de_presenca(46);

void setup()
{
  Serial.begin(9600);
  sensor_de_presenca.iniciar();
  led.iniciar();
}

void loop()
{
  if(sensor_de_presenca.getEstado())
  {
    led.ligar();
  } 
  else 
  {
    led.desligar();
  }

}