#include <stdio.h>

int main(int argc,char* argv[])
{
    
    printf("teste de parametro.\n");

    printf("nosso programa recebeu %d argumentos.\n",argc);

    int i;
    for(i=0;i<argc;i++)
    printf("parametro %d tem valor %s.\n", i, argv[i]);


    return 0;
}
