#include <stdio.h>
#include <stdlib.h>


void troca(float*, float*);

void troca(float *a, float *b)
{
    float c;
    c = *a;
    *a = *b;
    *b = c;
    
}

int main(int argc, char* argv[])
{
    float x,y;
	
	printf("valor de x: ");
	scanf("%f",&x);

	printf("valor de y: ");
	scanf("%f",&y);

    printf("x = %f; y= %f\n",x,y);

    troca(&x,&y);

    printf("x = %f; y= %f\n",x,y);

    return 0;
}
