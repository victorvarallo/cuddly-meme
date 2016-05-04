#include <stdio.h>                          //victor varallo

double fatorial(long);

double  fatorial(long n)
{
    double fat=1L;
    double count;

    for(count=n;count>0;count--)
    {
        fat = fat*count;       
    }

    return fat;
}

int main (void)
{
    double n;
    
    printf("insira um valor para saber seu fatorial: ");
    scanf("%lf",&n);
   
    double f= fatorial(n);

    printf ("o fatorial de %.0lf vale **%.0lf**\n", n, f);
    
    return 0;
}
