//Ingresar el radio de una esfera y calcular el volumen
//Volumen de una esfera se calcula con (PI*r³)4/3
#include <stdio.h>

void main() {
    //Declaramos variables   
    float radio;
    //Declaramos contstante
   #define PI 3.1415

   printf("Calculadora de volumen de una esfera de acuerdo a su radio:) \n");
   
   printf("Por favor ingrese el radio de la esfera: ");
   scanf("%f", &radio);

   printf("El volumen de la esfera de radio %.2f es: %.2f\n", radio, (PI*radio*radio*radio)*4/3);

}