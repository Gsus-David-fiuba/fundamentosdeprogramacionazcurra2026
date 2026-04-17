//solicitar un número entero positivo al usuario y calcular su factorial. En el caso de ingresar un número negativo mostrar el mensaje que diga
//"No se puede efectuar el factorial del número ingresado"
//Recordar que por definición  factorial(0)=1 y factorial(1)=1

#include<stdio.h>

int main() {

    int ingreso, i, resultado, n;
    resultado=1;

    printf("Ingresa un número y calcularemos su factorial :) \n");
    scanf("%i", &ingreso);
    
    if (ingreso>0) {
        for (i=ingreso;i>0;i--) {
            resultado = resultado*i;
        }
        printf("\n El factorial de %i es %i \n", ingreso, resultado);
    } 

    else if (ingreso == 0) {
        printf("El factorial de 0 es 1\n");
    }
    else {
        printf("No existe el factorial de un número negativo");
    }

    return 0;
}