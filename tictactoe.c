#include <stdio.h>
#define SIZE 3
 
void mostrar(char m[SIZE][SIZE], int tam)
{
    int i, j;
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
}
 
int main()
{
    int r,l, c;
    char mesa[SIZE][SIZE] = {
                {'.', '.', '.'}, 
                {'.', '.', '.'}, 
                {'.', '.', '.'}
        };
    
    mostrar(mesa, SIZE);

    for(r=1;r<=9;r++)
    {      
        printf("Informe sua jogada(l  c):");
        scanf("%d %d", &l, &c);
        l--;
        c--;
        if(r%2==1)    
            mesa[l][c] = 'X';
        else    
            mesa[l][c] = 'O';
     
        mostrar(mesa, SIZE);
    } 
    return 0;
}
