#include <stdio.h>

int main() {

	FILE *arquivo;
	   
    char arqn[51];
    int c;    
    int cl = 0;
    int cb = 0;
    int cp = 0;

    printf("nome do arquivo(com extensao):  ");
	scanf("%s",arqn);       //ler arquivo

	arquivo = fopen(arqn, "r");    //abrir arquivo digitado

	c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl = cl + 1;
        if (c == ' ')
            cp = cp + 1;

		
		c = getc(arquivo);
	}

    printf("L=%i P=%i B=%i\n", cl, cp, cb);


	fclose(arquivo);


	return 0;
}
