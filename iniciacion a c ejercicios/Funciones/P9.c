#include <stdio.h>
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

int multiplicacionDinamica(valor, valor2){

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

        printf("Muy bien! \n");
        multiplicacionDinamica(num, num2);

    }else if(resultadoAlumno == 0){

        printf("No regrese");
        return 0;

    }else{

        printf("No, Por favor intenta nuevamente \n");
        
        multiplicacionDinamica(valor, valor2);
    }

    return 0;
}