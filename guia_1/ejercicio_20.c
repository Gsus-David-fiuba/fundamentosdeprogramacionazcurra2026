/*
Escribir un programa que permita al usuario ingresar los montos de las compras de un cliente y que al finalizar informe por pantalla el importe total a pagar,teniendo en cuenta que si éste supera los $1000 se le debe aplicar un 10% de descuento.

Se desconoce la cantidad de datos que se van a ingresar.

La carga de datos finaliza cuando el usuario ingresa el monto 0 (cero).

Se debe validar que no se ingresen montos negativos indicando al usuario monto invalido.
*/
 //Creo que lo mejor sería usar un do while... 
#include<stdio.h> 
 
int main () {
    float ingreso_usuario, sumatoria, descuento;
    sumatoria=0;
 
    printf("\nCALCULO DE MONTOS\n");
    do {
        printf("Por avor, ingrese el monto: (0 para finalizar): ");
        scanf("%f", &ingreso_usuario);
        if (ingreso_usuario<0)
            printf("Monto inválido\n");
    } while (ingreso_usuario<0);

 
    if (ingreso_usuario>0) {
        while (ingreso_usuario!=0) {
            if (ingreso_usuario<0) {
                printf("Por favor, ingrese montos positivos:) \n");
            }
            else {
                sumatoria+=ingreso_usuario;
            }
            
            printf("Monto total: %.2f$, ingrese otro monto (0 para finalizar): ", sumatoria);
            scanf("%f", &ingreso_usuario);
        //Caso en el que se supere el monto de 1000
        if (sumatoria>1000) {
            descuento=sumatoria*0.1;
        }
        
        }
 
    } else {
        printf("No se subió ningún monto\n");
    }

printf("El monto total es de %.2f\n");
if (sumatoria>1000) {
    printf("Al ser un pago mayor de 1000$ se aplica 10 por ciento de descuento descuento y el monto total es de %.2f$",sumatoria-descuento);
}



printf("\nFINALIZA EL PROGRAMA\n");
   return 0;
}