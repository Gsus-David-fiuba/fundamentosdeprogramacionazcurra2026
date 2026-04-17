/*Calcular y mostrar la suma de los n primeros
números naturales, siendo n un número ingresado
por el usuario. Usar fórmula [n*(n+1)]/2*/

#include <stdio.h>
int main() {
//Declaramos variable
    int n,suma;

    printf("Sumaremos los n primeros números naturales. por favor, ingresa un número: \n");
//Le pedimos al usuario que ingrese un número    
    scanf("%i", &n);

    suma = (n*(n+1))/2;

    printf("La suma de los primeros %i es igual a %i", n, suma); 
    printf("\nFin del programa\n");   

    return 0;
}