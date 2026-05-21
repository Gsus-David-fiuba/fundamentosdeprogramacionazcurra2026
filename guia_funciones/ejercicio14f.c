/*
Un número entero positivo se dice perfecto si es igual a la suma de todos sus divisores excepto él mismo, Ejempl: los números 6,28 y 496 son perfectos.

6 = 1+2+3
28 = 1+2+4+7+14
496 = 1+2+4+8+16+31+124+248

Se pide:
a)Escribir una función booleana que permita discernir si un número (o único parámetro) es perfecto
b)Dar un ejemplo de cómo se hace la referencia a dicha función desde un programa o desde otro subprograma 
*/

#include<stdio.h>
#include<stdbool.h>

bool esPerfecto( int n) {
    bool perfecto = false;
    int numero, suma=0;
    for (numero=1; numero<n;numero++){
        if (n%numero==0) {
            suma+=numero;
        }
    }

    if (suma==numero) {
        perfecto = true;
    }
    return perfecto;
}

int main() {

    printf("%d Numero perfecto? \n", esPerfecto(496));
    printf("%d Numero perfecto? \n", esPerfecto(50));
    
    return 0;

}

