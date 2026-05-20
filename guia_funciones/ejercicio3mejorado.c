/*
crear una función en donde ingrese un número entero y devuelva el factorial
*/

#include<stdio.h>

long long factorial(int n) {
    int i, resultado=1;
    if (n<0) {
        resultado = 0;
    }
    if (n==0) {
        resultado = 1;
    }
    for (i=n;i>0;i--) {
        resultado=resultado*i;
    }
    return resultado;
    
}

int main() {


    printf("%l", factorial(3));


    return 0;
}
