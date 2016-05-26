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
#include <string.h>

struct scliente {
	char nome[50];			//ate 49 caracteres
	int anonascimento;		//quatro digitos
	char endereco[100];		//ate 99 caracteres
	int conta;				//numero da conta no vetor de contas
	char cgc[20];			//numero do cadastro geral de contribuintes
}clientes[2000];


struct sconta{
	int cliente;			//numero do cliente no vetor de contas
	int anoabertura;		//em anos, quatro digitos
	float saldo;			//em reais(R$)
}contas[2000];


int main (void)
{   
    //preenchimento dos registros

	strcpy(clientes[0].nome, "Michel Miguel Temer Lulia");
    clientes[0].anonascimento = 1940;
    strcpy(clientes[0].endereco, "Palacio do Planalto, Brasilia, DF, Brasil");
    clientes[0].conta = 0;
    strcpy(clientes[0].cgc, "123.123.123-12");

    strcpy(clientes[1].nome, "Dilma Vania Rousseff");
    clientes[1].anonascimento = 1947;
    strcpy(clientes[1].endereco, "indeterminado, Brasilia, DF, Brasil");
    clientes[1].conta = 1;
    strcpy(clientes[1].cgc, "321.321.321-32");

    strcpy(clientes[2].nome, "Jose Renan Vasconcelos Calheiros");
    clientes[2].anonascimento = 1955;
    strcpy(clientes[2].endereco, "Senado Federal, Brasilia, DF, Brasil");
    clientes[2].conta = 2;
    strcpy(clientes[2].cgc, "666.666.666-66");

    strcpy(clientes[3].nome, "Rovana Bacelar Varallo");
    clientes[3].anonascimento = 1965;
    strcpy(clientes[3].endereco, "Rua Cel. Fernando Machado, Porto Alegre, RS, Brasil");
    clientes[3].conta=3;
    strcpy(clientes[3].cgc, "476.970.000-00");
    
    strcpy(clientes[4].nome, "Victor Varallo Ferreira");
    clientes[4].anonascimento = 1997;
    strcpy(clientes[4].endereco, "Rua Cel. Fernando Machado, Porto Alegre, RS, Brasil");
    clientes[4].conta=4;
    strcpy(clientes[4].cgc, "012.961.163-23");
    
    
    contas[0].cliente = 0;
    contas[0].anoabertura = 2016;
    contas[0].saldo = 100.00;

    contas[1].cliente = 1;
    contas[1].anoabertura = 2016;
    contas[1].saldo = 200.00;

    contas[2].cliente = 2;
    contas[2].anoabertura = 2016;
    contas[2].saldo = 300.00;

    contas[3].cliente = 3;
    contas[3].anoabertura = 2016;
    contas[3].saldo = 535000.00;

    contas[4].cliente = 4;
    contas[4].anoabertura = 2016;
    contas[4].saldo = 326995337.00;

    //menu
    
    int c, ct, op,conf, controle=1;
    float val;

    printf("informe sua conta: ");
    scanf("%d", &c);

    printf("ola %s", clientes[c].nome);
    printf("\nsaldo atual: R$ %.2f", contas[c].saldo);

    while(controle ==1)
    {
        printf("\n\n\t\t***MENU***");
        printf("\n\t0 - sair");
        printf("\n\t1 - saque");
        printf("\n\t2 - deposito");
        printf("\n\t3 - transerencia bancaria");
	
        printf("\n\ninforme a operacao: ");
        scanf("%d",&op);

        if(op==1)
        {   
            printf("informe o valor a ser sacado: ");
            scanf("%f",&val);       

            contas[c].saldo -= val; 
            printf("operacao realizada com sucesso\nsaldo atual: R$%.2f",contas[c].saldo);
        }
        
        else if(op==2)
        {
            printf("informe o valor a ser depositado: ");
            scanf("%f",&val);
            
            contas[c].saldo += val;
            printf("operacao realizada com sucesso\nsaldo atual: R$%.2f",contas[c].saldo);
        }

        else if(op==3)
        {
            printf("numera da conta para a qual deseja transferir: ");
            scanf("%d",&ct);
            printf("transferir para %s?\n1 para confirmar: ",clientes[ct].nome);
            scanf("%d",&conf);
            if(conf==1)
            {
            if(ct != c )
                {        
                    printf("valor a ser transferido: ");
                    scanf("%f",&val);
                    
                    contas[c].saldo -= val;     //desconta valor da conta c
                    contas[ct].saldo += val;    //acrescenta valor a conta desejada
                    printf("\noperacao realizada com sucesso\nsaldo atual: R$%.2f", contas[c].saldo);
                 }       
                else
                {
                    printf("conta invalida");
                }
            }
            else printf("operacao cancelada");
	    }
        else if(op==0)
        {
            printf("volte sempre");
            controle = 0;
        }
    }
        printf("\n");
    return 0;
}
