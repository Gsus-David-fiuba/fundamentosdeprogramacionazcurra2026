/*
Solicitar al usuario un número natural positivo entre 1 y 20. En el caso de que el número ingresado esté fuera de rango indicarle al usuario y solicitarlo nuevamente.
Luego si este número ingresado es primo, se pide mostrar como resultado el factorial del mismo. En el caso de que no sea primo, se pide mostrar como resultado la suma n-ésima parcial del número --> (n*(n+1))/2
*/

#include<stdio.h>
#include<stdbool.h>
bool esPrimo(int n) {
    int contador = 2, i =2;
    bool primo = true;
    while (contador==2 && i<=n/2) {
        if (n%2==0){
            contador++;
            primo = false;
        }
        i++;
    }
    return primo;
}

int calcularFactorial(int n) {
    int resultado=1;
    for (int i = 1; i<=n;i++) {
        resultado*=i;
    }
    return resultado;
}
int suma_parcial(int n) {
    int resultado = (n*(n+1))/2;
    return resultado;
}

int main() {
    int ingreso_usuario;
    printf("Ingresa un número entre 1 y 20 por favor: ");
    scanf("%d",&ingreso_usuario);

    while (ingreso_usuario<1 || ingreso_usuario>20) {
        printf("Valor inválido, intente nuevamente. Ingrese un número entre 1 y 20: ");
        scanf("%d",&ingreso_usuario);
    }
    if (ingreso_usuario>1 && ingreso_usuario<20){
        if (esPrimo(ingreso_usuario)) {
            printf("%d es un número primo y su factorial es: %d \n", ingreso_usuario, calcularFactorial(ingreso_usuario));
        } else {
            printf("%d es un número compuesto y su suma parcial es: %d", ingreso_usuario, suma_parcial(ingreso_usuario));
        }

        
    }
printf("\nFIN DEL PROGRAMA\n");
    return 0;

}