/*Henrique Bittencourt h.bittencourt@acad.pucrs.br*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main (int argc, char* argv[]) {

    FILE *arquivo;

    int j, c, s[SIZE];
	int total = 0;

    arquivo = fopen(argv[1], "r");

//erro ao abrir o arquivo

    if (arquivo == NULL)
    {
        printf ("Erro ao abrir o arquivo\n");
        return 1;
    }
	//Zera o vetor

    for (j = 0; j < SIZE; j++)
    {
        s[j] = 0;
    }

    c = getc(arquivo);

    while (c != -1)
    {
//Monta a tabela Ascii e verifica se existe correspondência no arquivo
        for (j = 0; j < SIZE; j++)
        {
            if (c == j)
            {
                s[j]++;
            }
        }
        c = getc(arquivo);
    }

//Cabeçalho
    printf("%8s%12s%19s\n", "Elemento", "Valor", "Ocorrências");

//Monta a tabela
    for (j = 11; j < SIZE; j++)
    {
        if (s[j] != 0)
        {
            printf ("%8d%4c%5x%13d\n", j, j, j, s[j]);
        }
    }
//Soma as ocorrências
    for (j = 0; j < SIZE; j++)
    {
        total += s[j];
    }
    printf ("\n%8s%13d\n", "Total", total);

//Fecha o arquivo

    fclose (arquivo);

  }
