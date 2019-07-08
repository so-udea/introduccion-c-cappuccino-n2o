#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int multiplicacionDinamica(int valor, int valor2);

int main() {
    int maximo = 9;
    int minimo = 1;
    srand(time(NULL));

    int valor = rand() %maximo + minimo;
    int valor2 = rand() %maximo+ minimo;

    multiplicacionDinamica(valor, valor2);

    return 0;
}

int multiplicacionDinamica(int valor,int valor2){

    int maximo = 9;
    int minimo = 1;

    srand(time(NULL));
    int num = rand() %maximo + minimo;
    int num2 = rand() %maximo+ minimo;

    int resultado;
    int resultadoAlumno;

    printf("Cuanto es %d veces %d \n", valor, valor2);
    printf("Preciona 0(cero) para salir \n");

    scanf("%d",&resultadoAlumno);
    resultado = valor * valor2;

    if (resultadoAlumno == resultado ){

        
        switch (num%4){
            case 0:
                printf("Muy bien! \n");
                break;
            case 1:
                printf("Excelente! \n");
                break;
            case 2:
                printf("Buen trabajo! \n");
                break;
            case 3:
                printf("Sigue haciéndolo bien! \n");
                break;
            default:
                break;
        }
        
        
        
        multiplicacionDinamica(num, num2);

    }else if(resultadoAlumno == 0){

        printf("No regrese");
        return 0;

    }else{

        switch (num%4){
            case 0:
                printf("No. Por favor trata de nuevo. \n");
                break;
            case 1:
                printf("Incorrecto. Trata una vez más. \n");
                break;
            case 2:
                printf("No te rindas! \n");
                break;
            case 3:
                printf("No. Trata de nuevo \n");
                break;
            default:
                break;
        }
        
        multiplicacionDinamica(valor, valor2);
    }

    return 0;
}