//Calcular el sueldo de un operario ingresando por el teclado la cantidad de horas que trabajó en el mes y el valor de la hora. Mosrtrarle el resultado al usuario con un mensaje adecuado

#include <stdio.h>

int main() {
    int horas_trabajadas;
    float pago_hora,sueldo_total;
    char nombre[50];

    printf("Calculadora de sueldo en relación horas trabajadas\n");

    //Pedimos nombres y datos del operario.
    printf("Por favor, indica tu nombre y apellido: ");
    fgets(nombre, 50, stdin);

    printf("Por favor, ingrese las horas trabajadas durante el mes: ");
    scanf("%d", &horas_trabajadas);

    printf("Ahora ingrese el sueldo por hora del operario: ");
    scanf("%f", &pago_hora);
    sueldo_total=pago_hora*horas_trabajadas;

    //Mensaje final
    printf("Hola %sel total de tu sueldo según las horas trabajadas (%dhr), es de %.2f$", nombre, horas_trabajadas,sueldo_total);



    printf("\nFIn del programa\n");


    return 0;
}
