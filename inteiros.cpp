#include "inteiro.h"
#include <iostream>

using namespace std;

int main(void){
	
	inteiro *p=NULL, *paux, x;
	
	for(int i=0; i<10; i++){
	cout << "insira um valor:" <<endl;
	cin >> x;
		if(p == NULL){
			paux=p=new inteiro(x);
		}
		else{
			paux = p;
			if(p -> valor > x){
				paux= new inteiro(x);
				paux -> prox = p;
				p = paux;	
			}
			else
				while(paux->prox != NULL){
					// Criar paux e percorrer lista com 2 ponteiros. quando p for == null, insira o novo nodo após o pant
				}
		}
	

	return 0;
}
