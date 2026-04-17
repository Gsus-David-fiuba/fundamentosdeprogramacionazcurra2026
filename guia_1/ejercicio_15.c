//Dada una siere de números ingresados de a uno. Indicar mayor, menor y promedio de la serie. El ingreso de números finaliza cuando el usuario ingresa 0

#include<stdio.h>

int main() {
    float ingreso, mayor, menor, denominador, total;

    printf("Ingresa un número por favor: (0 para terminar): ");
    scanf("%f", &ingreso);
    mayor = ingreso;
    menor = ingreso;
    total = total + ingreso;

    while (ingreso!=0) {
        denominador +=1;
        total=total + ingreso;

        if (ingreso>mayor) {
            mayor = ingreso;
        } 
        if (ingreso<menor) {
            menor = ingreso;
        }
        printf("Ingresa un número por favor (0 para terminar): ");
        scanf("%f", &ingreso);
    }

    if (denominador>0) {
        printf("Mayor: %.2f\n", mayor);
        printf("Menor: %.2f\n", menor);
        printf("Promedio: %.2f\n", total/denominador);
    }
    
    printf("\nFin del programa\n");


    return 0;
}