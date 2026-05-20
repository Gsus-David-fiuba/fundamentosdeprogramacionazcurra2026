/*Escribir un programa que solicite al usuario dos números enteros positivos y determine el máximo común divisor entre dos números*/

#include<stdio.h>
#include<stdbool.h>

int mcd(int a, int b) {
    int temporal;
    while (b!=0) {
        temporal = b;
        b = a%b;
        a=temporal;
    }

    return a;
}

int main() {
    int primer,segundo;
    printf("Ingresa el primer número luego el segundo\n");

    scanf("%d", &primer);
    scanf("%d", &segundo);
    printf("El MCD de %d y %d es %d", primer, segundo, mcd(primer,segundo));
}
