/*
Escribir una función que reciba un valor entero y calcule el factorial del mismo
Si no se puede calcular que devuelva 0
*/

#include<stdio.h>

int calculoFactorial(int n) {
    int i, resultado = 1;
    if (n>1) {
        for (i=n;i>1;i--) {
            resultado = resultado*i;
            
        }
    }

    else if (n == 1 || n == 0){
        resultado = 1;        
        }
    else {
        resultado = 0;
    }

    return resultado;
}

int main() {
    int numero;
    printf("Por favor ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);
    printf("%d\n ", calculoFactorial(numero));   
    printf("\nFINALIZA EL PROGRAMA\n");
    return 0;
}

