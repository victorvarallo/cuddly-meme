/*Um banco está informatizando seus controles 
de clientes e contas. No primeiro momento 
o banco deseja guardar as informações de 
até 2000 clientes. Cada cliente tem os 
seguintes dados: Nome, idade, endereço, nº 
da conta e CGC. As contas válidas tem 
número diferente de zero. Cada conta 
possui um só cliente. As informações das 
contas são as seguintes: cliente, tempo em 
que é cliente e saldo atual.*/

/*Suponha que o banco deseja oferecer aos clientes as 
seguintes opções de tarefas:
001 
–
saque
002 
–
depósito
003 
–
transferência para outra conta.
Implemente um programa que pergunte ao usuário 
seu nº de conta e a operação que deseja efetuar. A 
seguir, deverá solicitar o valor do 
depósito/saque/transf.. Ao final, deverá imprimir 
um relatório constando o nome do cliente, nº conta 
e saldo total.*/

#include <stdio.h>

struct scliente {
	char nome[50];			//ate 49 caracteres
	int idade;				//em anos
	char endereco[100];		//ate 99 caracteres
	int conta;				//numero da conta no vetor e contas
	int cgc;				//numero do cadastro geral de contribuintes
}clientes[2000];


struct sconta{
	int cliente;			//numero do cliente no vetor de contas
	int tempo;				//em anos, desde a abaertura da conta
	float saldo;			//em reais(R$)
}contas[2000];


int main (void)
{
		

	return 0;
}


























