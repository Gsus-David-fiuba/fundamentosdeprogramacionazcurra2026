/*
Dos números se dicen amigos cuando uno de ellos es igual a la suma de todos los divisores del otro excepto él mismo.

Ejemplo:
Los números 220 y 284 son amigos 

Se pide
a) Escribrir una función booleana que llamada desde un programa, permita discernir si dos números (parámetros) son amigos
b)Usar otra función para calcular la suma de los divisores de un número determinado
c)Hacer referencia a dichas funciones desde un programa o desde otro subprograma
*/
#include<stdio.h>
#include<stdbool.h>


int suma_divisores(int numero) {
    int i, suma=0;
    for (i=1;i<numero;i++) {
        if (numero%i==0) {
            suma+=i;
        }
    }
    return suma;
}

bool sonAmigos(int a, int b) {
    int suma_a, suma_b;
    bool amigos=false;
    suma_a = suma_divisores(a);
    suma_b = suma_divisores(b);

    if (suma_a == b && suma_b == a) {
        amigos = true;
    }

    return amigos;
}


int main() {
    int pr =220, seg=284;

    if (sonAmigos(pr,seg)) {
        printf("Son amigos:) \n");
    }
    else {
        printf("No son amigos:( \n)");
    }


    
    return 0;
}



