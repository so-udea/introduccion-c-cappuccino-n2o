#include <stdio.h>
int factorial(int numero);
float sumatoria(int valor, int terminos);

int main() {
    
    int valor,terminos;
    
    printf("inserte la X:");
	scanf("%d", &valor);
	
	printf("\ninserte el numero de terminos:");
	scanf("%d", &terminos);
	
	printf("\nEl resultado de la sumatoria es: %f", sumatoria(valor,terminos));
	scanf("%d", &valor); //lo dejamos en lectura para que no cierre el proceso
}

int factorial(int numero){
    int resultado = 1;
    
    for(int i = 1;i <= numero;i++){
        
        resultado = resultado*i;
    }
    return resultado;
}

float sumatoria(int valor, int terminos){
    
    int i,signo;
	float sumatoria;
	
	sumatoria = 1;
	signo=-1;
	
	for(i = 1;i < terminos;i++){
	    
	    sumatoria = sumatoria + signo*((pow(valor,i*2))/factorial(i*2));
	    
	    if (signo == 1){
            
            signo = -1;
            }
            else{
            
            signo = 1;

            }
	}
	
	return sumatoria;
}