#ifndef _inteiro
#define _inteiro

#include <stdlib.h>

class inteiro{
  public:
    int valor;
    inteiro *prox;
    inteiro(){
      this->prox=NULL;
    }
};

#endif


