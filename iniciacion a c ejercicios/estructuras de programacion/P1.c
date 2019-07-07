#include <stdio.h>
float calcularComision(int venta);

int main (void)
{
    
    int venta;

    printf("ingrese el valor de la venta");
    scanf("%d",&venta);
    printf("%f", calcularComision(venta));

    scanf("%d",&venta);
}

float calcularComision (int venta){
    
    float comision;
    
    if (venta < 20001 ){
        
        comision = venta * 0.05;
    }
  
    else if (venta < 50001){
    
        comision = (venta * 0.07) + 1000;
    } 
    
    else if (venta > 50000){
    
        comision = (venta * 0.1) + 3100;
    }    
    
    if(comision < 0){
    
        return 0;      
    }
    
    
    return comision;
}