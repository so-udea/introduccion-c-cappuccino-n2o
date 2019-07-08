#include <stdio.h>
int calcularProGeo(int x, int n);

int main() {
    int x, n ;
    printf("Ingrese los dos numeros x y n, respectivamente: \n");
    scanf("%d %d", &x, &n);
    
    printf("El resultado de la progresion geometrica es: %d", calcularProGeo(x, n));
    
    scanf("%d", &x);
}
    

int calcularProGeo(int x, int n){
    int result = 0;
   for(int i = 0; i <= n; i++ ){
       result += pow (x, i);
   }
    return result;
}