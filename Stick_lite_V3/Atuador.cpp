#include "esp32-hal-gpio.h"
#include "Atuador.h"

/*Função construtora*/
Atuador::Atuador(int Porta)
{
  _Porta = Porta;
}

/*Função que retorna a porta que o atuador está conectado*/
int Atuador::getPorta()
{
  return _Porta;
}

/*Função que retorna o estado do atuador*/
bool Atuador::getEstado()
{
  return digitalRead(_Porta);
}

/*Função que inicializa o atuador*/
void Atuador::iniciar()
{
  pinMode(_Porta, OUTPUT);
}

/*Função que liga o atuador*/
void Atuador::ligar()
{
  digitalWrite(_Porta, HIGH);
}

/*Função que desliga o atuador*/
void Atuador::desligar()
{
  digitalWrite(_Porta, LOW);
}