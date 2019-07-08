
#include <stdio.h>
int multiplo(int primero, int segundo);

int main() {
    int totalDePares;
    printf("Ingrese el total de pares: ");
    scanf("%d", &totalDePares);
    int primeros[totalDePares];
    int segundos[totalDePares];

    printf("\nIngrese los pares uno por uno.\n");

    int numeroPareja=0; 
    for (int i = 0 ; i < (2*totalDePares); ++i) {
        if (i%2 == 0)
        {
            printf("\nel primer numero de la  pareja #%d: ", numeroPareja);
            scanf("%d", &primeros[numeroPareja]);
            
        }
        else
        {
            printf("el segundo numero de la  pareja #%d: ", numeroPareja);
            scanf("%d", &segundos[numeroPareja]);
            numeroPareja++;
        }
        
    }
    printf("\n");

    for (int i = 0; i < totalDePares; i++){
        printf("el resultado de la pareja %d es : %d\n",i,multiplo(primeros[i], segundos[i]));
    }
	scanf("%d", &totalDePares);
}
    

int multiplo(int primero, int segundo){
    int result = 1;
    
    if (segundo % primero == 0 )
        result = 1;
    else
        result = 0;
    
    return result;
}