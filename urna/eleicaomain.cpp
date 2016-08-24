#include "candidato.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void){
	ifstream arq;	// cria input file stream

	candidato cand[20];
	string nome, partido;	
	int numero;

	arq.open("candidatos.txt", ios::in);

	for(int i=0; i!=20; i++){
		arq >> numero >> nome >> partido;
		cand[i].set_numero(numero);
		cand[i].set_nome(nome);
		cand[i].set_partido(partido);		
	}
	arq.close();
	
/****************urna*****1************************/
	arq.open("urna1.txt", ios::in);

	while(!arq.eof()){
		arq >> numero;
		cand[numero-1].um_voto();
	}
	arq.close();
/*****************urna****2************************/
	arq.open("urna2.txt", ios::in);

	while(!arq.eof()){
		arq >> numero;
		cand[numero-1].um_voto();
	}
	arq.close();
/*****************urna****3************************/
	arq.open("urna3.txt", ios::in);

	while(!arq.eof()){
		arq >> numero;
		cand[numero-1].um_voto();
	}
	arq.close();
/****************urna****3*************************/
	arq.open("urna1.txt", ios::in);

	while(!arq.eof()){
		arq >> numero;
		cand[numero-1].um_voto();
	}
	arq.close();
/***************************************************/
	
	
return 0;
}
