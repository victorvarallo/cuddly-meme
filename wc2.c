#include <stdio.h>	//victor varallo victor.varallo@acad.pucrs.br


int main(int argc, char* argv[]) {

	FILE *arquivo;
	   
    int c,j,i = 0;    
    int cl = 0,cb = 0,cp = 0;
    int cltot = 0,cbtot = 0,cptot = 0;

    

	for (j=1;j<argc;j++)
	{
	
    arquivo = fopen(argv[j], "r");               //abrir arquivo digitado

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

    printf("L=%i P=%i B=%i %s\n", cl, cp, cb,argv[j]);
    
    //contadores para exibir o total   
    cbtot += cb;    
    cptot += cp;
    cltot += cl;

    cb = 0;
    cp = 0;
    cl = 0;

	fclose(arquivo);
	}	

    if(argc>2)
    {
        printf("\ntotal de linhas:%d",cltot);   
        printf("\ntotal de palavras:%d",cptot);
        printf("\ntotal de caracteres:%d\n",cbtot);
    }

	return 0;
}
