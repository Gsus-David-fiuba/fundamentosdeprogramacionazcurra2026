//Dado un número entero positivo ingresado por el usuario, procesarlo e indicar;

/*(Realizar un programa diferente para cada caso)
a) La cantidad de dígitos pares e impares que lo componen
b) El menor y el mayor dígito del número

Recordar uso de división y módulo:

111/10 = 11
111%10 = 1
*/

#include<stdio.h>

int main() {
    int ingreso_usuario, min, max, par, impar, aux, aux2;

    par = 0;
    impar = 0;

    printf("Ingresa un número por favor: ");
    scanf("%i", &ingreso_usuario);
    aux2 = ingreso_usuario;
    max = ingreso_usuario%10;
    min = ingreso_usuario%10;



    while (ingreso_usuario>0) {
        //Asigno variables para condicionales y bucle
        aux = ingreso_usuario%10;



//Evalua mínimo y máximo        
        if (aux>max){
            max = aux;
        } 
        else if (aux<min) {
            min=aux;
        }


//Evalua la parte de pares e impares
        if (aux%2==0) {
            par+=1;
        }
        else {
            impar+=1;
            }
        
        ingreso_usuario = ingreso_usuario/10; 

    }

    printf("Numero ingresado: %d\n", aux2);
    printf("Cantidad de pares: %d\n", par);
    printf("Cantidad de impares: %d\n", impar);
    printf("Valor máximo: %d\n", max);
    printf("Valor mínimo: %d\n", min);
    

    return 0;
}
