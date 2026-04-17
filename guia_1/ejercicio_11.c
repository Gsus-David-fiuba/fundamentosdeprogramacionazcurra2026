/*
Dado un número n, informar los n primeros términos de la sucesión geométrica de razón 3 (1, 3, 9, 27)
*/

#include<stdio.h>

int main() {
    int ingreso, n, suma,i;
    n = 1;
    suma = 3;

    printf("Escribe un número y te diremos los primeros n de la sucesión de razón 3. \n Ingrese el número: ");
    scanf("%i", &ingreso);

    for (i=0;i<ingreso;i++) {
        printf("-> %i \n",n);
        n = suma*n;
        
    }
}