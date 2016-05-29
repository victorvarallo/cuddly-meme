#include <stdio.h>

long dec2oct (long num)		//10 -> 8
{
	long resto,base=1,octal=0;

	while (num>0)	
	{
		resto = num%8;
		octal +=resto*base;
		num /= 8;
		base *= 10;
	}

	return(octal);
}

long oct2dec (long num)		//8 ->10
{
	long resto,base=1,dec=0;

	while (num>0)
	{
		resto = num%10;
		dec += resto*base;
		num /= 10;
		base *= 8;
	}
	
	return(dec);

}

long dec2bin (long num)		//10 -> 2
{
    long resto,base=1, bin=0;
    
    while(num > 0)
    {
        resto = num % 2;
        bin += resto*base;
        num /= 2;
        base *= 10;
    }

    return(bin);
}

long bin2dec (long num)		//2 -> 10
{
	long decimal=0, base=1, resto;
	
	while(num>0)
	{
	resto = num%10;
	decimal += resto*base;
	num /= 10;
	base *=2;
	}

	return(decimal);
}
	
int main (void)           //funcao principal
{

    long num,result;
	int controle;
	char x;
	

    menu:
    printf("\t***CONVERSOR DE BASES***\n");
    printf("escolha uma opção: \n");
	printf("0 - sair\n");
    printf("1 - decimal para binario\n");
    printf("2 - binario para decimal\n");
    printf("3 - decimal para octal\n");
	printf("4 - octal para decimal\n");
    printf("->");
    scanf("%d",&controle);

    switch(controle)
    {	
		//sair
		case 0:	printf("ate logo!\n");   
				break;

		//decimal para binario
        case 1: printf("insira seu numero em decimal: ");
                scanf("%ld",&num);
                result = dec2bin(num);
                printf("(%ld) 10 = (%ld) 2\n\n",num,result);
				printf("tentar novamente?(s/n) ");
				scanf(" %c",&x);
					if (x == 's')
					{
					printf("\n\n");
					goto menu;
					}
               		break;

		//binario para decimal
        case 2: printf("insira seu numero em binario: ");
                scanf("%ld",&num);
                result = bin2dec(num);
                printf("(%ld) 2 = (%ld) 10\n\n",num,result);
				printf("tentar novamente?(s/n) ");
				scanf(" %c",&x);
					if (x == 's')
					{
					printf("\n\n");
					goto menu;
					}
                break;

		//decimal para octal
        case 3: printf("insira seu numero em decimal: ");
                scanf("%ld",&num);
                result = dec2oct(num);
                printf("(%ld) 10 = (%ld) 8\n\n",num,result);
				printf("tentar novamente?(s/n) ");
				scanf(" %c",&x);
					if (x == 's')
					{
					printf("\n\n");
					goto menu;
					}
                break;

		//octal para decimal
        case 4: printf("insira seu numero em octal: ");
                scanf("%ld",&num);
                result = oct2dec(num);
                printf("(%ld) 8 = (%ld) 10\n\n",num,result);
				printf("tentar novamente?(s/n) ");
				scanf(" %c",&x);
					if (x == 's')
					{
					printf("\n\n");
					goto menu;
					}
                break;


        default:printf("opcao invalida");
				printf("retornando ao menu\n\n");
                goto menu;
                break;       
    }

    return 0;
}
