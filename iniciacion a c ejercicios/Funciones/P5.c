#include <stdio.h>
int invertirValor(int valor);

int main() {

    int valor;
    scanf("%d",&valor);
    printf("valor de enntrada: %d \n", valor);
    printf("valor invertido: %d", invertirValor(valor));
    scanf("%d",&valor);

}

int invertirValor(valor){

    int res, valorInvertido;

    while(valor>0){

        res = valor%10;
        valor=valor/10;
        valorInvertido=valorInvertido*10+res;

    }

    return valorInvertido;
}