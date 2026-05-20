/*Generar los n(valor ingresado por el usuario) primeros números naturales e informar por pantalla un listado de cada número generado junto con el factorial correspondiente. Utilizar una función que dado un número devuelva su factorial

Validar que el número ingresado sea entero positivo, caso contrario se debeindicar al usuario que el número es incorrecto y se le solicita el ingreso nuevamente*/

#include<stdio.h>
#include<stdbool.h>

int factorial(int num) {
    int i,resultado=1;
    for (i=1; i<=num;i++) {
        resultado*=i;
    }
    return resultado;
}

int main() {
    int ingreso_usuario;


    do {
    printf("Por favor, ingrese un número entero positivo: ");
    scanf("%d", &ingreso_usuario);

    if (ingreso_usuario<0){
        printf("Valor inválido, intente nuevamente. \n");
    }
    } while (ingreso_usuario<0);
        
        
        for (int i=0;i<=ingreso_usuario;i++) {
            printf("El factorial de %d es %d \n", i, factorial(i));
        }


        printf("\n FIN DEL PROGRAMA \n");
    
    return 0;
    }
