//criar um vetor de n posicoes, definido em tempo de execucao
//escreva valores randomicos nas posicoes impares e, nas pares, escreva "posicao+3". Para escrita, use aritmetica de ponteiros
//Ao final, imprimir o conteudo de cada posicao do vetor, informando o indice do vetor e endereco na memoria
//crie o vetor usando o comando new e, ao final, livere com o comando delete

#include <iostream>
#include <stdlib.h>		//para gerar valores randomicos de 0 a 100=rand()%100

using namespace std;

int main(void){
	int *ptr,*vtr,vtrSize;
	
	cout << "entre com o tamanho do vetor a ser criado: " << endl;
	cin >> vtrSize;

	ptr = vtr = new int[vtrSize];

	for(int i=0;i<vtrSize;i++){
		if(i%2==0)	// par
			*(ptr+i)=i+3;
		else				//impar
			*(ptr+i)= rand()%100;
	}

	for(int i=0;i<vtrSize;i++){
		cout << "posicao: " << i << "\tvalor: "<< vtr[i] << endl;
	}

	delete vtr;

	return 0;
}
