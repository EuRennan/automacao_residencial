#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

/* Criando uma Classe */
class Sensor {
  private:
    int _Porta;

  public:
    Sensor(int Porta); // Função construtora
    int   getPorta();    // Função que devolve a porta que está conectado o sensor
    bool getEstado();  // Função que devolve o estado binário do sensor
    void   iniciar();    // Função que inicializa o sensor
};

#endif