/*Dada una secuencia de números enteros ingresados por el usuario, informar aquellos que sean primos, El listado finaliza al ingresar cero. Alfinalizar el ingreso se debe indicar la cantidad y la sumatoria de aquellos que fueron primos*/

#include<stdio.h>
#include<stdbool.h>

bool esPrimo(int n) {
    bool primo = true;
    int i=2;

    if (n<=1) {
        primo = false;
    }
    while (primo == true && i<=n/2) {
        if (n%i == 0) {
            primo = false;
        }
        i++;
    }

    return primo;
}

int main() {
    int ingreso, sum_total=0,contador=0;

    printf("Ingresa la cantidad de números que quieras (termina en cero): ");
    scanf("%d", &ingreso);

    while (ingreso!=0) {
        if (esPrimo(ingreso)==true) {
            printf("Este número es primo:) \n");
            sum_total+=ingreso;
            contador++;
        }

        scanf("%d", &ingreso);
    
    }

    printf("Cantidad de números primos: %d\n", contador);
    printf("Suma total: %d", sum_total);


    return 0;
}