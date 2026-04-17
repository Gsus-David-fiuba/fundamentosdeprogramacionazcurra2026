//Escribir un programa que muestre las tablas de multiplicar desde la tabla del 1 hasta la tabla del nueve para los primeros 100 números naturales

#include<stdio.h>

int main() {
    int i, ii, numero, multiplica;

    for (i=1; i<=100; i++) {
        for (ii=1;ii<=10;ii++) {
            printf("%i x %i == %i\n", i, ii, i*ii);
        }
        printf("\n");
    }
}