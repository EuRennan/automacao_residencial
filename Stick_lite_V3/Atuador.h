#ifndef ATUADOR_H
#define ATUADOR_H

#include <Arduino.h>

/*Construindo Classe*/
class Atuador
{
  private:
    int _Porta;

  public:
    Atuador(int Porta); //Função construtora
    int   getPorta(); //Função que retorna prota
    bool getEstado(); //Função que retorna o estado do atuador
    void   iniciar(); //Função que iniciar o atuador
    void     ligar(); //Função que liga o atuador
    void  desligar(); //Função que desliga o atuador
};

#endif