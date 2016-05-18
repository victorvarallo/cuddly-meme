#include <stdio.h>


int main() {

	FILE *arquivo;
	   
    char arqn[51];
    int c,i;    
    int cl = 0;
    int cb = 0;
    int cp = 0;

    

    printf("nome do arquivo(com extensao):  ");
	scanf("%s",arqn);                         //ler arquivo

	arquivo = fopen(arqn, "r");               //abrir arquivo digitado

	c = getc(arquivo);
    while( c != -1 )
    {
        cb++;                                 //contador de bytes

        if (c == '\n')
            cl++;                             //contador de linhas

        if (c == ' ' || c=='\t' || c=='\n')
        {
            i=0;
		}
        else    i++;
        if(i==1)
            cp++;                              //contador de palavras
        
        

		c = getc(arquivo);
	}

    printf("L=%i P=%i B=%i\n", cl, cp, cb);


	fclose(arquivo);


	return 0;
}
