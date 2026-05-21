/*
Dada una secuencia de números enteros informar los n primeros números que aparezcan y su sumatoria.
El valor de n es ingresado por el usuario previo al ingreso de los números de la lista
*/

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
    int ingreso_usuario, sumaTotal=0, contadorPrimos=0, cantidadInicial;

//Primero cantidad de números primos a acumular (?
printf("Ingrese una cantidad de primos: \n");
scanf("%d", &cantidadInicial);

while (contadorPrimos!=cantidadInicial) {
    scanf("%d", &ingreso_usuario);
    
    if (esPrimo(ingreso_usuario)) {
        printf("%d --> es primo:)\n", ingreso_usuario);
        contadorPrimos++;
        sumaTotal+=ingreso_usuario;
    }
}
printf("La sumatoria total de primos es %d", sumaTotal);


return 0;
}