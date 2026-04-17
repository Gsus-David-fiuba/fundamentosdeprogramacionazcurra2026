//Ingresar un número del 1 al 12 que representa un mes, indicar la cantidad de días de dicho mes. 
#include<stdio.h>

int main() {
   
   int ingreso;

   printf("Por favor, ingresa un número que represente un mes para decirte cuántos días tiene :) ");
   scanf("%i", &ingreso);

   switch (ingreso)
   {
   case 1:
   printf("Enero tiene 31 días\n");
   break;

   case 2: 
   printf("Febrero tiene 28 o 29 días\n");
   break;

   case 3:
   printf("Marzo tiene 31 días\n");
   break;
   
   case 4:
   printf("Abril tiene 30 días\n");
   break;   
   
   case 5:
   printf("Mayo tiene 31 días\n");
   break;
   case 6: 
   
   printf("Junio tiene 28 o 29 días\n");
   break;
   case 7:
   
   printf("Julio tiene 31 días\n");
   break;
   
   case 8:
   printf("Agosto tiene 30 días\n");
   break;   
   
   case 9:
   printf("Septiembre tiene 31 días\n");
   break;
   case 10: 
   
   printf("Octubre tiene 28 o 29 días\n");
   break;
   case 11:
   
   printf("Noviembre tiene 31 días\n");
   break;
   
   case 12:
   printf("Diciembre tiene 30 días\n");
   break;
   
   default:
   printf("Valor inválido\n");
    break;
   }

    return 0;
}