/*
Escribir una función que dados a y b devuelva el resto de la división entera, sin utilizar el operador correspondiente de lenguaje. Para esta resolución deben considerar la utilización de restas sucesivas 
*/

#include<stdio.h>

int calculoResto(int a, int b) {
    int contador=0;
    //Restas sucesivas
    while (a>=b) {
        a-=b;
        contador++;
    }

    return contador;
}

int main() {
    int dividendo, divisor, resultado;
    resultado = calculoResto(50,10);

    calculoResto(50,10);
    printf("%d", resultado);
}

