/*Ingresar un número entero y decir si:
es par o impar
es mayor, menor o igual a cero*/


#include <stdio.h>

int main() {
    int n;


    printf("Verificaremos si el número es par, impar, si es menor, mayor o igual a cero \n");
    printf("Escribe un número entero por favor: \n");
    scanf("%i", &n);

    if (n%2==0) {
        printf("El número ingresado es par\n");
    } else {
        printf("El número ingresado es impar\n");
    }

    if (n>0) {
        printf("Además el número ingresado es positivo\n");
    } else if (n<0) {
        printf("Además el número ingresado es negativo\n");
    } else {
        printf("Además el número ingresado es igual a 0\n");
    }


    return 0;
}