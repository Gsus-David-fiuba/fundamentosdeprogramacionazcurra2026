/*Escribir una función que dados a y b devuelva el cociente de la división
entera, sin utilizar el operador correspondiente del lenguaje. Para esta
resolución deben considerar la utilización de restas sucesivas.
Una forma de ver el cociente es ver cuántas veces entra un numero dentro de otro.
*/

#include<stdio.h>

int calculo_cociente(int a, int b) {
    int contador = 0;
    int a, b;

    while (b<=a) {
        a = a-b;
        contador+=1;
    }
    return contador;
}

int main() {

    printf("Cociente: %i \n", calculo_cociente(10,2));
    printf("Cociente: %i \n", calculo_cociente(10,3));
}
