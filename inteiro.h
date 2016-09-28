#ifndef _inteiro
#define _inteiro

#include <stdlib.h>

class inteiro{
  public:
    int valor;
    inteiro *prox;
    inteiro(int x){
		this->prox=NULL;
		valor = x;
    }
	inteiro(){
		thins -> prox=NULL;
	}
};

#endif


