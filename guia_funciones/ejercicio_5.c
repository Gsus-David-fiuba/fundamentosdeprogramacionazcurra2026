/*
Escribir una función que dados a y b ambos de tipo entero que devuelva a^b de tipo double para los siguientes casos (no se puede utilizar ninguna biblioteca de funciones matemáticas). Implementar una solución iterativa
*/ 

#include<stdio.h>

int exponencial(int a, int b) {
    double resultado;
    int i,base, exponente;
    base = a;
    exponente = b;
    resultado = base;

    if (exponente == 0) {
        resultado = 1;
    }
    for (i = 1; i<exponente; i++) {
        resultado=resultado * base; //Aquí me siento perdido...  
    }
    return resultado;
}


int main() {
    printf("Calculando factoriales :) \n");

    printf("i) a = 2  b = 3; resultado = %d \n", exponencial(2,3));
    printf("ii) a = 2  b = 3; resultado = %d \n", exponencial(-2,3));
    printf("iii) a = 2  b = 3; resultado = %d \n", exponencial(2,0));
    printf("iv) a = 2  b = 3; resultado = %d \n", exponencial(2,0));

printf("\nFIN DEL PROGRAMA:)\n");

}
