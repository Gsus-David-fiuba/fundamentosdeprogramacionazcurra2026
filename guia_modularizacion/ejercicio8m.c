/*Escribir un programa que solicite el ingreso de una serie de números.
Por cada número ingresado se deberá informar si el mismo es o no, un número capicúa
Se debe evaluar que lo ingresado sea un número entero positivo, de lo contrario se debe enviar el mensaje "Número inválido, y solicitar el siguiente. El ingreso de números termina cuando se ingresa cero"
*/

#include<stdio.h>
#include<stdbool.h>

bool esCapicua(int n) {
    int original = n, digito, invertido=0;

    while (n>0) {
        digito = n%10;
        invertido = invertido*10 + digito;
        n=n/10;
    }
    return (original == invertido);
}

int main() {
    int ingreso_usuario;
        
    printf("Ingresa un número para saber si es capicúa: \n");
    scanf("%d", &ingreso_usuario);
    
    while (ingreso_usuario!=0) {

        if (ingreso_usuario<0) {
            printf("Número inválido, intente nuevamente. \n");

        } else { 
            if(ingreso_usuario>0) {
            
                if (esCapicua(ingreso_usuario)){
                    printf("%d Es capicúa\n", ingreso_usuario);
                } 
            else {
                printf("%d No es capicúa\n", ingreso_usuario);
               }
            }
        }
        printf("Ingresa un número para saber si es capicúa: \n");
        scanf("%d", &ingreso_usuario);
    }


    return 0;
}
