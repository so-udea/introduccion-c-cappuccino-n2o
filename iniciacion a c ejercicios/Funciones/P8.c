#include <stdio.h>
#include <string.h>
#include <stdlib.h> //rand() y srand()
#include <time.h> //time()

int lanzarMoneda();

int main (void)
{
	printf("Ingrese el numero de veces que desea lanzar la moneda, o ingrese 0 si quiere salir del programa\n");
    int salir = 0;
    while(salir == 0){
        srand(time(NULL));
        int nveces;
        int caras = 0;
        int sellos = 0;
        scanf("%d",&nveces);
        if(nveces == 0){
            salir = 1;
        }
        char resultados[nveces];
        if(lanzarMoneda() == 1){
            caras += 1;
            strcpy(resultados, "C");
        }
        else{
            sellos += 1;
            strcpy(resultados, "S");
        }
        for(int i = 0; i < nveces-1; i++){
            if(lanzarMoneda() == 1){
                caras += 1;
                strcat(resultados, "C");
            }
            else{
                sellos += 1;
                strcat(resultados, "S");
            }
        }
        printf("%s, #de caras = %d,# de sellos = %d\n", resultados,caras , sellos);
    }
    
}

int lanzarMoneda(){
    return rand()%2;
}