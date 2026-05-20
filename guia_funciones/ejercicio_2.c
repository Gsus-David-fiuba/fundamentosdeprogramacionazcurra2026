/*
Escribir una función que dado un número entero devuelva un valor booleano que indique si dicho numero es primo o no. Antes de plantear una solución ten presente las siguientes preguntas: 

a) Con sólo encontrar un divisor del número a evaluar distinto a uno y a sí mismo, ya puedo afirmar que el número no es primo. ¿Tiene sentido seguir evaluando más divisores?

b) Teniendo en cuenta que todo número par a excepción del 2 no es primo. ¿TIene setido seguir en un ciclo, si al calcular el resto de ladivisión del número a evaluar por dos, el resultado es cero?

c) ¿Puedo encontrar un divisor del número a evaluar que sea mayor al numero a evaluar dividido 2? 

*/

#include<stdio.h>
#include<stdbool.h>

int numeroPrimo(int n) {
    int i=3, contador=2, resultado=0;
    while (contador<=2 && i<n/2) {
        resultado=n%i;
        if (resultado == 0)
        contador+=1;
        i++;
    };
    return resultado=contador>2;
}

int main() {
    printf("%s\n", numeroPrimo(5) ? "true" : "false");
    printf("%s\n", numeroPrimo(20) ? "true" : "false");

    return 0;
}