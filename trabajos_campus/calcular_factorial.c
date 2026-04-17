/*
Escribir una función que reciba un valor y calcule el factorial del mismo.
No debe imprimir el valor, debe solamente devolverlo.
Si no se puede calcular el factorial del valor recibido, la función deberá devolver 0, de lo contrario deberá devolver el valor calculado. 

Invocarla para los valores -8, 0, 1, 5; mostrando en cada caso lo que devuelve.

Definición: El factorial de un entero positivo n,  se define como el producto de todos los números enteros positivos desde 1 hasta n.  El factorial de 0 es 1.

Para la construcción del programa, podés utilizar el editor del intérprete o el ide que prefieras.
Luego copia y pega lo que hayas hecho en la caja de texto de esta actividad y efectuá la entrega de la misma.
*/

#include<stdio.h>

int calcular_factorial(int a) {
    int i = 0, resultado=1;
    if (a>0){
        for (i=a;i>0;i--) {
            resultado = resultado*i;
        }
    } 
    else if (a==0) {
        resultado = 1;
    }
    else {
        resultado = 0;
    }

return resultado;

}

int main() {
    printf("%i\n", calcular_factorial(-8));
    printf("%i\n", calcular_factorial(0));
    printf("%i\n", calcular_factorial(1));
    printf("%i\n", calcular_factorial(5));

    return 0;
}