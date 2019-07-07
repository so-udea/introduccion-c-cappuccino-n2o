#include <stdio.h>


int main (void)
{
    int final, i , j;

    printf ("Numero final (empezando de 1):");
    scanf("%d",&final);
    printf("\nTabla de multiplicacion desde 1 hasta %d :\n",final);
    
    for(i = 1; i <= 10; i++){
        for(j = 1; j <= final; j++){
            
            
            printf("%dx%d = %d, ",i,j,i*j);
        }
    printf("\n");    
        
    }
    getchar();
}