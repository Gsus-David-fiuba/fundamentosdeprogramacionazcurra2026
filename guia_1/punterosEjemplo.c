//Escribir un programa que muestre las tablas de multiplicar de la tabla del 1 hasta la tabla del 9 para los primeros 100 números naturales 

#include<stdio.h>
#include<stdlib.h>

int main() {

    //Probando algo que tiene que ver con punteros
    int edad;
    int* p1;

    edad = 12;

    printf("Edad= %d \n", edad);

    p1 = &edad;
    *p1=15;
     printf("Edad 'Modificada': %d\n", edad);
    printf("p1 = %p \n", p1);


    return 0;
    
}