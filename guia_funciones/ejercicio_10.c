/*

10) Escribir una función que dado un tiempo expresado en segundos, devuelva 
por parámetros el equivalente en días, horas, minutos y segundos. 
Utilizar esta función dentro de un programa que solicite el
*/
#include<stdio.h>

void calculoTiempo(int s, int *minutos, int *horas, int *dias ) {
     
    *dias = s/86400;
    s= s%86400;
    *horas = s/3600;
    s = s%3600;
    *minutos = s/60;    
    s = s%60;
}

int main() {
    int ingresoUsuario,dias, minutos, horas, segundos; 

    printf("Ingrese un tiempo en segundos (entero positivo): ");
    scanf("%d", &ingresoUsuario);

    if (ingresoUsuario>0) {
        calculoTiempo(ingresoUsuario, &minutos, &horas, &dias);

        printf("Tiempo ingresado: %ds\n Valor en minutos: %dmin\n Valor en Horas: %dhs\n Valor en días: %d dia/as. \n", ingresoUsuario, minutos, horas, dias);
    } else {
        printf("Valor ingresado invállido");
    }

    printf("\nFIN DEL PROGRAMA \n");


    return 0;
}