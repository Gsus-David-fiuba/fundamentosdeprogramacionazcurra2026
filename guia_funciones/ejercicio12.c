/*
Escribir una función que reciba dos valores enteros y devuelva el máximo común divisor entre ambos números. El MCD de dos o más números es aquel número entero que los divide sin dejar resto. (% == 0)
*/
#include<stdio.h>
int mcd(int a, int b) {
    int temporal;

    while (b!=0) {
        temporal = a%b;
        a=b;
        b=temporal;
    }
    return a;
}


int main() { 

    int valor1 = 10, valor2 = 20;
    
    printf("%d \n", mcd(10,20));
    
    return 0;
}
