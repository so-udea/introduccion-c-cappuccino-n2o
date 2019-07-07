#include <stdio.h>


int main (void)
{
    int valor, i , j, bin, bandera;
    printf("Ingrece numero de filas:");
    scanf("%d",&valor);
    
    bin = 1;
    bandera = bin;
    for(i = 1; i <= valor; i++){
        
         printf("\n"); 
         
        for(j = 1; j <= i; j++){
            
            printf("%d",bin);
            if (bin == 1){
                
                bin = 0;
            }
            else{
                
                bin = 1;
            }
            
        }
        
        if (bandera == 1){
                
            bandera = 0;
        }
        else{
            
            bandera = 1;
        }
        
        bin = bandera; 
            
    }
    scanf("%d",&valor);
}