#include "Sensor.h"

/* Criando a função construtora */
Sensor::Sensor(int Porta)
{
  _Porta = Porta;
}

/* Criando função que devolve a porta que está conectado o sensor */
int Sensor::getPorta()
{
  return _Porta;
}

/* Criando função que devolve o estado binário do sensor digital */
bool Sensor::getEstado()
{
  return digitalRead(_Porta);
}

/* Inicializa o sensor */
void Sensor::iniciar()
{
  pinMode(_Porta, INPUT);
}